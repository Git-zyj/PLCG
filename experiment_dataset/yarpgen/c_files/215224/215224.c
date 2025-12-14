/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = ((~((var_10 ? ((((var_2 || (arr_0 [19] [i_1]))))) : 3465972075))));
            arr_5 [i_0] [i_1] = ((arr_4 [i_1]) ? ((-(((arr_1 [i_0]) ? 35504 : (arr_0 [i_0 + 2] [i_1]))))) : (((min(-9, (!11576))))));
            arr_6 [i_0] [i_0] [i_1] = ((((arr_3 [i_0]) || (arr_3 [i_0]))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((!(!0))))));
                            var_15 = arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3];
                            arr_14 [i_0] [i_0] [i_2] [13] [i_0] = (11922 * 11928);
                            arr_15 [i_0] = ((((64736 ? -13184 : 873678012)) * (((((arr_4 [i_4 - 2]) || -11922))))));
                            arr_16 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 4] [i_0] = 254;
                        }
                    }
                }
                arr_17 [i_0] = ((873677992 ? (((arr_0 [i_0] [i_2]) ? (arr_4 [i_0]) : (arr_12 [i_0 + 2] [i_0] [i_0] [i_0]))) : (1 || var_2)));
            }
        }
        arr_18 [i_0] = (arr_2 [i_0] [i_0] [i_0]);
        arr_19 [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0 - 2] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_16 -= (873677992 || -8407888442779751987);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        var_17 += (((arr_10 [4] [i_8 + 2] [i_6] [i_8] [i_8 + 3] [i_8]) ? var_9 : 2688903345));
                        arr_30 [i_5] [i_7] [i_7] [i_7] [i_8] = (((arr_9 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [22]) * ((var_0 ? var_2 : 13932))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
