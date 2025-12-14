/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1 + 1] [10] [i_3] |= (~140737471578112);
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_2] &= ((((!((max(140737471578092, (arr_11 [i_0] [i_0]))))))));
                            var_15 = ((!((((((0 ? 1 : 0))) ? 3266 : (~var_11))))));
                            var_16 = (arr_7 [i_0]);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_17 = (arr_3 [i_2]);
                                var_18 = (arr_2 [i_3]);
                                var_19 = (arr_7 [i_1 + 1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 12;i_5 += 1)
                            {
                                var_20 = var_0;
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_3] [i_3] = ((1354 ? 11 : 6));
                                var_21 = 1621090774;
                                var_22 = ((((((arr_10 [i_0]) ? (arr_10 [i_0]) : (arr_10 [i_0])))) ? ((var_11 ? (arr_11 [i_0] [i_0]) : -3266)) : (arr_6 [i_2])));
                                var_23 = (~((((arr_17 [i_0] [i_1] [i_0] [i_0] [i_2]) && -3266))));
                            }
                        }
                    }
                }
                var_24 = var_12;
            }
        }
    }
    var_25 = ((((-var_5 % ((var_9 ? -21 : 67108856)))) == var_6));
    #pragma endscop
}
