/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [5] = min(-2059175509, (17592183947264 + 1));
        arr_4 [8] = 17592183947258;
        var_16 += (((32313 ? 49152 : 32308)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] = ((((min((min(0, -8)), (max(var_2, 5))))) ? 17592183947264 : ((max((arr_10 [i_0 - 2] [i_0 + 1] [i_2 + 1]), var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (min((((-(~49134)))), 29))));
                                arr_18 [7] [2] [0] [7] = var_7;
                                arr_19 [i_0] = ((((16383 ? ((75 ? (arr_17 [i_0] [i_1] [i_0]) : 18446726481525604328)) : (arr_12 [i_3 + 3] [i_1] [i_2 - 1] [i_0 - 2])))) ? ((((((-32289 ? var_0 : 1))) ? (((((arr_5 [i_3] [i_4]) + 2147483647)) << (((((arr_7 [i_1] [i_2]) + 10882)) - 10)))) : ((min(var_1, (arr_15 [i_0] [i_1] [i_3]))))))) : (min(((max(var_2, var_11))), (min(18446726481525604358, -988355081)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_18 = var_8;
                                arr_24 [i_0] = (arr_7 [4] [4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_28 [i_7] = 1;
        arr_29 [i_7] = ((arr_27 [i_7]) == ((1 ? 12150 : (arr_27 [i_7]))));
        arr_30 [i_7] = var_1;
        var_19 *= -2681002713782701863;
    }
    for (int i_8 = 2; i_8 < 7;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 8;i_10 += 1)
            {
                {
                    var_20 ^= var_6;
                    arr_42 [7] [7] [7] [i_10 - 1] = (arr_25 [i_8 + 2]);
                }
            }
        }
        var_21 = 17592183947258;
        var_22 = (max((min(var_12, (arr_5 [i_8 + 2] [i_8 + 1]))), (((16387 && (arr_5 [i_8 + 2] [i_8 + 1]))))));
        var_23 += ((!((min(1978829920235699054, (arr_36 [i_8] [1]))))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        var_24 = ((((min(99, var_13))) >= -3862));
        var_25 = (((max(1, ((-(arr_43 [i_11 - 1]))))) > (((!(arr_43 [i_11 - 1]))))));
    }
    var_26 = (17292610340080754034 > 237);
    var_27 = (min(var_27, (~var_9)));
    #pragma endscop
}
