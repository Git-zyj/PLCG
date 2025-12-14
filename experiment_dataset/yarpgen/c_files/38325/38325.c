/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_15));
    var_17 += var_3;
    var_18 = (max(((-(128 * 3846804823))), 1));
    var_19 *= (max(var_6, (!var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((-(7259212926365645511 - 7259212926365645511))))));
                                arr_14 [i_0] [i_4] [i_3] [i_2] [i_1] [i_0] |= ((((!((min(7259212926365645511, 52874))))) ? (arr_9 [i_0]) : ((((((arr_12 [i_0] [i_0] [i_1] [i_1] [3] [i_3] [i_1]) ? (arr_10 [i_0]) : (arr_8 [i_0] [i_2] [i_0] [i_4])))) ? (arr_10 [i_4]) : ((0 ? 0 : 219))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (arr_8 [i_0] [i_5] [i_0] [i_0]);
                            var_22 ^= (!0);
                            var_23 -= (arr_3 [i_0]);
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] = ((139 == ((1 << (114 - 85)))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_7] = ((max((min(var_14, var_11), 123))));
                            var_24 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_7]) ? 5743483739893729669 : (((min(21490, (((-7259212926365645511 == (arr_6 [i_0]))))))))));
                        }
                        var_25 = (max(var_25, (12 | -7291993838875706669)));
                        arr_25 [2] [i_0] [2] [2] [i_5] = (62455 && 1);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_26 = (((arr_7 [i_2] [i_2] [i_2] [i_8]) != (arr_4 [i_2] [i_2] [i_0])));
                        var_27 = var_8;
                        var_28 *= ((-218846368 ? -7291993838875706668 : 143018921));
                        var_29 = var_1;
                        arr_28 [i_0] [i_0] [i_8] = 18;
                    }
                    var_30 = 27;
                }
            }
        }
    }
    #pragma endscop
}
