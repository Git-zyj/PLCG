/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (86 * ((var_2 ? var_1 : 211)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = 113;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3 - 3] [i_3] [i_0] [i_0] [i_0] = ((~(9588 / var_15)));
                        var_19 = ((!(((4194303 ? 11501 : var_3)))));
                        var_20 = -1;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_21 = (~6);
            var_22 = 1;
            arr_14 [i_0] = 19;
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_23 = var_11;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_5] [i_6] = (!1);

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_24 = 83;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_31 [i_5] [i_8] [i_7] [i_5] [i_5] = ((var_15 ? 9007199254739968 : 63));
                            var_25 = (max(var_25, (((var_7 ? 1 : (var_17 && 1))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            var_26 = (!-19764);
            arr_35 [i_5] = ((!(+-0)));
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_27 += -4840913353116696383;
                        arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((((((var_6 ? 4840913353116696368 : 1))) ? (max(930530233030261523, var_9)) : ((((var_8 + 2147483647) << (var_4 - 1922750525))))))) ? var_16 : ((-(!var_0)))));
                        arr_45 [i_5] = ((((((4106321337591687780 ? var_11 : var_12)))) ? (!96) : -5945));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        arr_50 [0] [i_11] [i_14] [i_5] = (max((~1), (min(var_8, (((var_6 ? var_14 : var_9)))))));
                        arr_51 [i_5] [i_5] = (max((max(30429, 80)), ((max(20, var_5)))));
                        arr_52 [i_15] [i_5] [i_5] [i_5] = ((~(~var_2)));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        arr_55 [i_16] [i_16] = (((~5) >= (var_11 == 1)));
        arr_56 [i_16] = min((~var_12), var_0);
        var_28 = ((-(((~var_17) % (min(var_3, 255))))));
        arr_57 [i_16] = (~var_13);
    }
    var_29 = (((((-var_6 / (min(1, var_10))))) ? 233 : ((((max(var_17, 4590171420749213981)) >= var_10)))));
    var_30 = var_5;
    var_31 = var_7;
    var_32 = 4294967291;
    #pragma endscop
}
