/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!(arr_1 [i_0])));
                arr_5 [i_0] [i_0] [i_0] = (arr_0 [i_0 - 1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((30881 ? 0 : ((((arr_2 [i_2] [i_2]) ? (arr_3 [i_2] [i_2]) : var_0)))));
        arr_10 [i_2] = ((((((arr_7 [i_2]) << (((arr_2 [i_2] [i_2]) - 20564))))) == (((arr_2 [i_2] [i_2]) ? var_8 : (arr_1 [i_2])))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                arr_18 [i_2] [i_2] [i_4] [i_2] = (((arr_12 [i_2] [1] [1]) && var_4));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_21 [i_3] [i_3] [i_2] = var_1;
                    arr_22 [i_3] [i_2] [i_5] = (arr_2 [i_4] [i_5]);
                    var_11 = (((~(arr_6 [1]))));
                }
                var_12 += 1;
                var_13 = (arr_14 [i_3] [i_3] [i_2]);
                arr_23 [i_2] = (((arr_2 [i_4 - 1] [i_4 + 1]) || var_10));
            }

            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                arr_28 [i_2] [i_2] = ((25407 == (arr_16 [i_6 + 1] [i_6 - 1] [i_2])));
                var_14 -= (!55772);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_15 -= ((~(((-113 + 2147483647) >> (var_8 - 1974280286)))));
                arr_31 [i_2] = 48;
            }
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                var_16 = (((arr_25 [i_2] [i_2] [i_8 + 1]) ? (((arr_32 [i_2] [i_8] [i_8] [i_8]) ? var_7 : (arr_6 [i_3]))) : 2534531101));
                arr_34 [i_2] [i_2] = (~457292392);
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_42 [i_2] [i_3] [i_8] [i_9] [i_9 - 1] [i_10] = (((arr_3 [i_8 + 1] [i_2]) > (arr_3 [i_8 - 1] [i_2])));
                            var_17 += (arr_25 [i_3] [i_3] [i_8]);
                            arr_43 [i_2] [i_3] [i_8] [i_9] [i_2] = (var_4 / 65535);
                        }
                    }
                }
            }
            var_18 = (arr_26 [i_2] [i_2] [i_3]);
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_49 [i_2] [i_2] [i_2] = (i_2 % 2 == 0) ? ((((!-6455766540039483443) >> (((arr_12 [i_2] [i_11 - 2] [i_11 + 1]) - 1995347952))))) : ((((!-6455766540039483443) >> (((((arr_12 [i_2] [i_11 - 2] [i_11 + 1]) - 1995347952)) - 3266742595)))));
                        arr_50 [i_2] [i_11] [i_2] [i_2] [i_3] [i_2] = 32018;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_53 [i_2] [i_2] [i_13] = -113;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 12;i_16 += 1)
                    {
                        {
                            arr_62 [i_2] [i_2] = 255;
                            arr_63 [i_2] [i_2] [i_14] [i_15] [i_2] = ((-(arr_58 [i_16 - 1] [i_2] [i_16 + 1] [i_16] [i_16 - 2] [i_16] [i_16 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
        {
            arr_66 [i_2] [i_2] = ((((4294967295 % (arr_41 [i_2] [i_17]))) != ((((arr_59 [i_2] [i_2]) >> (var_0 - 38499))))));
            var_19 = ((52602 << (5971018458275471883 - 5971018458275471872)));
        }
        arr_67 [i_2] = (arr_35 [i_2] [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_18 = 3; i_18 < 14;i_18 += 1)
    {
        arr_70 [i_18] [i_18] = ((-(((arr_1 [i_18]) ? (arr_2 [i_18] [i_18]) : 52602))));
        var_20 = (max(var_20, var_6));
    }
    var_21 = (((((((var_8 ? var_4 : 14919504418371542258))) ? ((min(-3018026857850941708, 65535))) : (max(var_8, var_7)))) - var_4));
    #pragma endscop
}
