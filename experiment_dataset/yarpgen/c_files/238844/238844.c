/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((((var_5 == (!-1307797483))))) & var_12));
        arr_2 [6] [8] = (!2624);
        var_20 -= -2147483639;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                arr_10 [8] [i_2] [i_2] [i_3 + 1] = 25838;
                var_21 = (max((min((max(var_9, var_6)), ((((arr_6 [i_1]) | var_0))))), (((((max(-14591, -1))) ? (arr_8 [i_2] [i_3 + 1] [i_1] [i_2]) : (arr_6 [i_1]))))));
                var_22 = (var_12 ? 39701 : (((-var_8 == ((min(var_1, var_0)))))));
                arr_11 [i_1 + 1] [i_2] = (!((((-2147483647 - 1) | (var_17 != 3420311088)))));
            }
            arr_12 [i_2] &= 122;
            var_23 = (min(var_23, ((max((((!(var_12 | var_11)))), var_1)))));
            var_24 = 39693;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] = (~1);
            var_25 -= (!((min((arr_4 [i_1 + 1]), var_6))));

            /* vectorizable */
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 7;i_6 += 1)
                {
                    arr_24 [i_1] [i_4] [i_5] [i_5] = (~var_8);
                    arr_25 [i_1] [i_5] [2] [i_6 + 1] = (arr_4 [i_1]);
                    arr_26 [i_1] [i_1] [i_1] [i_5] [i_6] = (-var_10 >= 2147483647);
                    arr_27 [i_1 + 1] [i_1 + 1] [i_4] [i_5] [i_4] = var_9;
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_26 -= (arr_5 [i_1 - 1]);
                    arr_30 [i_7] [i_7] [i_7] [i_5] = ((-125 ? (var_18 > -11) : (arr_21 [i_1] [i_4] [i_4] [i_5])));
                    arr_31 [i_5] [i_5] = (var_11 * var_5);
                }
                var_27 ^= 177;
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                arr_34 [i_1 + 1] = (arr_28 [i_1] [i_4] [i_4] [i_8 - 2]);
                var_28 = (((~39710) && (var_6 < var_3)));
                arr_35 [i_4] [4] [i_8] [i_4] = (arr_0 [i_1] [i_4]);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_29 -= (((~var_13) < (((~(arr_6 [i_1]))))));
                            arr_42 [i_10] [i_9 - 1] [i_10] [i_1 - 1] [i_10] [1] [i_1 - 1] = (((~(arr_41 [i_10]))));
                            arr_43 [i_10] [i_4] [i_10] [i_4] [2] = var_5;
                        }
                    }
                }
            }
            var_30 = var_13;
            var_31 = max((var_14 ^ -14591), ((min(-102, var_14))));
        }
        arr_44 [i_1] = ((((((var_9 > var_10) == (~var_16))))) | ((var_18 ^ (arr_29 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))));
        arr_45 [i_1 + 1] = (((var_7 ? (max(var_11, var_17) : (28791 > var_10)))));
    }
    var_32 = var_6;
    #pragma endscop
}
