/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= var_15;
                arr_7 [i_0] = (((41 < 41) + ((210 << (528482304 - 528482288)))));
                var_20 = (max(((((arr_6 [i_1] [i_1] [i_1]) / var_17))), (max(9223372036854775797, (((arr_5 [i_0] [i_0]) ? (arr_0 [i_1]) : 215))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    {
                        var_21 = ((var_14 - (arr_10 [i_3])));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_22 *= max(236, ((((arr_0 [i_5 + 4]) > (arr_3 [i_5 - 2])))));
                            var_23 = (min(var_23, (((((((arr_2 [i_6] [i_4]) != ((var_10 ? (arr_8 [4]) : 20))))) ^ ((((-8 || -2) || (arr_15 [i_2 - 3] [1])))))))));
                            var_24 = (max(var_24, (((((max((arr_2 [3] [i_4 + 2]), var_10))) > (7 < 1))))));
                            arr_21 [i_2 + 2] [i_2 - 1] [i_2] [i_2] [i_2] = var_13;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_25 = (max(var_25, ((((((((19 >> (((arr_9 [1]) - 48800))))) ? (min(var_8, (arr_0 [i_2]))) : (arr_8 [2]))) | 75)))));
                            var_26 = (max((((arr_3 [i_2 - 2]) | (arr_3 [i_2 - 1]))), (max((arr_23 [i_4 - 1] [i_2 + 1]), (arr_12 [i_2 - 2] [i_4 - 1])))));
                        }
                    }
                }
            }
            arr_25 [i_2] = (max((-2147483647 - 1), ((((((!(arr_13 [i_2] [i_2])))) < 2147483647)))));
        }

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_27 = ((!(~1)));
                        var_28 = 3645739683;
                        var_29 = (min(1, (max(var_15, (arr_33 [i_2] [i_2 + 2])))));
                    }
                }
            }
            var_30 = (arr_3 [i_2]);

            /* vectorizable */
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_31 = 140;
                            var_32 = (min(var_32, 241572581942017457));
                            arr_43 [i_2] [i_8] [i_2] [5] = var_13;
                        }
                    }
                }
                var_33 = (arr_31 [i_2] [i_2] [i_2]);

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_48 [9] [i_2] [i_2] [i_2] = -1651087323;
                    arr_49 [i_14] [i_11 - 2] [i_2] [i_2] [1] [i_2] = (((arr_41 [1] [i_11 - 1] [i_8 - 1] [i_2 + 1] [i_2 - 1]) ^ (arr_41 [i_11] [i_11 - 1] [i_8 - 1] [i_2 + 3] [i_2 + 2])));
                    arr_50 [i_2] = (((17556909382611981437 == 27245) ? ((((arr_17 [i_2] [i_8 - 3] [i_11 - 1] [i_14] [3]) > var_12))) : var_7));

                    for (int i_15 = 4; i_15 < 7;i_15 += 1)
                    {
                        var_34 = var_3;
                        var_35 = -1828973717;
                        arr_53 [i_15 + 3] [i_2] [i_11 + 1] [i_11] [i_2] [i_2] [i_2] = (arr_15 [i_8 + 1] [i_2]);
                    }
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        var_36 = (((arr_33 [i_2] [i_8 - 1]) & (arr_9 [i_2])));
                        arr_56 [i_2] [i_2] [i_11] [i_16 + 2] = (arr_37 [i_2 - 3] [i_8] [i_2] [i_14] [i_16 - 1] [i_16 - 1]);
                    }

                    for (int i_17 = 2; i_17 < 8;i_17 += 1)
                    {
                        var_37 = (max(var_37, ((((arr_24 [1] [1] [i_17 + 1] [i_14] [i_17] [i_17 - 2]) | (arr_29 [i_8]))))));
                        arr_61 [i_2 + 1] [i_8] [i_11] [i_2] [i_17] [i_17] = (arr_31 [i_17 - 2] [i_14] [i_14]);
                    }
                }
            }
            arr_62 [i_2] [i_2] = var_3;
            arr_63 [i_2] [i_2 + 1] [i_2 - 1] = (arr_12 [i_8 + 1] [i_8]);
        }
        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_38 -= (((109 != 19452) >> (!-8908)));
            var_39 = -2805203796487986643;
        }
        var_40 = ((((247 | 99) << (0 % var_1))));
    }
    #pragma endscop
}
