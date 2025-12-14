/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 ^= ((min((arr_0 [i_1]), (arr_4 [i_1 + 2] [i_0] [i_1 + 3]))));
                var_13 = (min(var_13, (arr_3 [i_1])));
                var_14 += (max((min((((4205314778467145844 ? -5141 : var_4))), 8216724310621993956)), ((((max(14241429295242405759, 1))) ? 391701435 : 4205314778467145837))));
            }
        }
    }
    var_15 = (!var_8);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, ((((max(18446744073709551615, 255)) / (arr_8 [i_2] [i_4 - 1]))))));
                    var_17 = ((-611864646 ? 65535 : ((~(arr_5 [8] [i_3])))));
                    var_18 = ((((((arr_1 [i_4 + 3] [i_4 + 2]) - var_4))) == (max((151 ^ 149), 288230371856744448))));
                }
            }
        }
    }
    #pragma endscop
}
