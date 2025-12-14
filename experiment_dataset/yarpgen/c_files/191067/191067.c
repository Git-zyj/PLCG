/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_19 = (-9223372036854775807 - 1);
            arr_5 [i_0] [i_0] [i_1] = (!17783108726062282037);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] = (arr_2 [i_0] [17]);
            arr_9 [5] = (min((arr_4 [i_0]), (arr_4 [i_0])));
            arr_10 [6] [i_2] = (arr_1 [i_2]);
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_18 [i_5 + 2] [1] [i_3] [i_3] [i_3] [i_0] = (((min(23648, -9223372036854775788)) <= 1));
                        var_20 = 1;
                        var_21 = 2047;
                        arr_19 [i_0] [i_3] [1] [i_3] = (((arr_2 [i_0] [1]) ? (((((arr_3 [i_3] [i_4]) + -2752915143885790888)) ^ ((((-11 > (arr_4 [i_0]))))))) : (arr_7 [11])));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_22 = (max(var_22, 23));
        arr_23 [i_6] = (arr_3 [i_6 - 3] [i_6]);

        for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_26 [i_6] [i_6 + 1] [2] = 32758;
            arr_27 [i_6] [i_7] [i_7 - 3] = (((arr_6 [i_6] [1]) ? 663635347647269573 : 1));
            arr_28 [i_6] [1] [i_6] = 1;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_23 = (min(var_23, 17783108726062282043));
                        var_24 -= (arr_14 [i_6 + 1] [17] [i_9]);

                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_6] = (arr_22 [i_6 - 3]);
                            arr_38 [i_6] [i_7] [i_8] [i_6] [3] = (2147483647 != 1);
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_43 [i_6] [8] [i_8] [i_9] [i_11] = ((((min(28, -1492573292)) ? (arr_14 [i_6 - 2] [15] [i_8]) : 7844282287875633875)));
                            var_25 = ((-(~1536632651)));
                            arr_44 [i_6] = (((((arr_0 [i_6]) ? 0 : (arr_0 [i_6 - 2]))) <= ((1 ? 255 : 3))));
                            arr_45 [5] [i_7] [i_7] [i_9] [i_11] [i_6] [i_8] = 622;
                            arr_46 [i_6] [i_6] = (((-53 - (3645827642 + 1864710727))));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_26 |= (((arr_7 [i_8]) ? 12 : (-2147483647 - 1)));
                            var_27 ^= ((((38 || (arr_47 [8] [i_9] [i_8] [i_7 - 1] [8]))) ? 1 : (arr_1 [i_6])));
                        }
                        var_28 = 48;
                    }
                }
            }
        }
        for (int i_13 = 3; i_13 < 10;i_13 += 1) /* same iter space */
        {
            var_29 = ((~(arr_47 [i_6 - 2] [i_6 - 2] [i_13] [i_13] [i_6])));
            arr_53 [i_6] [i_13] = ((1 ? (-2147483647 - 1) : (((((2367 >> (arr_42 [i_6] [i_13] [i_6] [1] [i_6])))) | 3701756163))));
        }
        /* vectorizable */
        for (int i_14 = 3; i_14 < 10;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
            {
                var_30 = arr_22 [1];
                var_31 = (min(var_31, ((((arr_16 [1] [i_14] [i_15 + 1]) ? 8 : (arr_3 [i_6] [i_15 - 1]))))));
                arr_60 [i_6 - 3] [i_6] = (arr_47 [3] [i_14] [i_14] [0] [i_6]);
            }
            for (int i_16 = 1; i_16 < 10;i_16 += 1) /* same iter space */
            {
                arr_63 [i_6] [0] [2] [i_6] = (arr_55 [i_6] [0]);
                var_32 = (max(var_32, 1792540979));
            }
            for (int i_17 = 1; i_17 < 10;i_17 += 1) /* same iter space */
            {
                var_33 += 1;
                var_34 = (((arr_54 [5] [i_6]) ? 32768 : (arr_47 [i_6 - 2] [i_14 - 2] [i_14] [i_6 - 2] [i_6])));
            }
            for (int i_18 = 1; i_18 < 10;i_18 += 1) /* same iter space */
            {
                var_35 -= ((4 ? (arr_56 [4] [i_18 + 1] [4]) : 60410));
                arr_70 [i_14 + 1] [i_6] = (arr_33 [i_18 + 1] [i_6] [i_18 - 1]);
                arr_71 [i_6 - 1] [i_14] [i_6] = (arr_50 [i_6 - 1]);
            }
            arr_72 [i_14 - 1] [i_14 - 1] [i_6] = 0;
        }
        var_36 -= (arr_3 [i_6] [9]);
    }
    var_37 = var_7;
    var_38 = (min(var_11, var_11));
    #pragma endscop
}
