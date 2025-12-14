/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [1] [1] = (arr_3 [i_0 - 2] [i_1]);
                var_13 = ((+(((((((arr_2 [i_0] [i_0 - 2] [i_1]) <= (arr_2 [i_0] [i_0] [i_1])))) > ((1204316466 ? 95 : 110)))))));
            }
        }
    }
    var_14 = (var_7 > -1667);

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = (~((+((((arr_1 [i_2] [i_2]) > 1885743132))))));
        var_16 = (((arr_6 [i_2] [i_2]) * (arr_6 [i_2] [i_2])));
    }
    var_17 = ((!-var_6) ? var_11 : (~-32754));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [16] [i_5] [i_4] [0] |= (((((-2147483647 - 1) / (min(-47, (arr_16 [i_5] [i_4] [i_3]))))) - (-2147483647 - 1)));
                    arr_18 [18] [20] [i_5] |= ((!((((((7936 ? 0 : (arr_15 [i_3 - 1] [8] [8] [i_5])))) | (((arr_13 [i_5] [i_4 - 1]) ? (arr_15 [i_5] [19] [i_4] [3]) : (arr_16 [1] [i_4] [i_5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
