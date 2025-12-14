/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_8, ((~(984616444935997256 + var_14))));
    var_21 |= -var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_22 -= ((var_11 << (((arr_3 [8]) * 0))));
                var_23 |= ((((!(arr_2 [i_0 + 3] [i_1] [i_1 - 1]))) ? (0 || 18446744073709551615) : 18446744073709551615));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_4] = (((~-var_1) ? (max((!14340636185122700383), ((6 ? 6 : var_2)))) : ((((var_16 <= (((arr_7 [i_4]) ? var_4 : var_1))))))));
                    var_24 = (max(((max(((max(var_7, 1))), (arr_10 [i_4] [i_4] [i_4] [1])))), (~18446744073709551615)));
                }
            }
        }
    }
    var_25 = (max(((min(((31350 ? 187 : 1)), var_1))), (min(((-819270158 ? 6 : var_6)), 14340636185122700360))));
    #pragma endscop
}
