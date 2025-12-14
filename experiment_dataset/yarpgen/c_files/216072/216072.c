/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 += var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = var_8;
        var_13 = (var_6 < 5525825430147239396);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_14 = (min(var_14, ((((-var_0 ? ((((var_6 <= (arr_1 [1])))) : var_3)))))));
        var_15 = ((-1397763157 / ((-var_9 ^ (arr_1 [6])))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_16 = (-3 > -1397763179);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_17 &= ((-(((arr_7 [i_4 + 1] [i_4 + 1]) % (arr_9 [i_2 + 1])))));
                    var_18 = (((((~(arr_9 [i_2])))) || (((-var_7 ? var_3 : ((var_2 ? var_0 : 1)))))));
                    var_19 = ((((var_7 ? var_0 : var_9))));
                    var_20 = ((var_3 ^ (1 >> 1)));
                    var_21 = (arr_0 [i_3]);
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_17 [i_2] [i_5] [6] = var_0;

            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                var_22 = var_1;
                var_23 = -8955930378059425396;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (-(((var_3 == (arr_3 [i_2])))));
                var_25 += (1 == 1);
                var_26 -= ((arr_11 [i_2] [3]) / (arr_11 [i_2 - 2] [i_5]));
            }
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 7;i_10 += 1)
                    {
                        {
                            arr_33 [6] [6] [i_8] [6] [6] = (arr_8 [i_2] [i_5] [i_8]);
                            var_27 = ((var_4 == (arr_1 [i_8])));
                            var_28 -= var_9;
                        }
                    }
                }
                arr_34 [i_2] [i_2] [9] [i_8] = ((var_6 | (var_5 - var_7)));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_29 -= (arr_16 [i_2] [i_11]);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_44 [i_13] [i_11] = var_5;
                        var_30 = ((-(var_3 >= var_1)));
                        var_31 = var_7;

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_32 = -185213377791974158;
                            var_33 += (((arr_35 [i_2 - 2]) ? (var_6 & var_2) : (var_5 > var_0)));
                        }
                    }
                }
            }
            var_34 *= ((4198230424397792210 ? 1 : 3157117265));
        }
    }
    #pragma endscop
}
