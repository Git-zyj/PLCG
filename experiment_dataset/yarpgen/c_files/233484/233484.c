/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_7 ? ((((var_14 && var_7) >= var_7))) : (~1724545401))))));
    var_17 = (((6 ? 0 : (var_6 | 27608))) | -var_11);
    var_18 = ((var_13 ? ((((((2663311265 ? -1724545402 : 122))) ? (var_4 > 34358689792) : (var_9 > var_5)))) : (min((((var_5 ? 249 : var_7))), var_1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((-(min(2220889916, (arr_6 [i_2] [6] [i_0])))));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3 - 2] [15] = ((-1724545406 ? (-21793 >= -61) : (((arr_6 [i_0] [i_0] [i_0]) ? (min((arr_7 [i_4] [i_4] [i_4]), var_10)) : var_3))));
                            arr_14 [i_0] [9] [9] [i_2] [i_3] [9] = (max(var_11, (!240)));
                            arr_15 [i_0] [i_0] [0] [i_3] [i_4] = ((((var_1 && var_0) ? (arr_9 [i_0] [i_1] [i_2] [i_4]) : (~34358689792))) | 16807);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = (((((~(arr_1 [i_2 + 2])))) || (((arr_12 [i_5] [i_2] [i_2 - 1] [i_2] [i_2 - 2] [i_2]) && 35))));
                            var_20 ^= (arr_3 [i_0] [i_0]);
                        }
                        var_21 = ((251 / (min(var_11, (arr_8 [i_2])))));
                    }
                    for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_22 = var_4;
                        arr_23 [i_0] = (arr_17 [i_0] [i_2 + 1] [i_0] [i_6] [i_6 - 1] [i_2 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_27 [i_7] [i_7] [i_2 - 2] [i_1] [i_0] [i_0] = (arr_1 [i_7]);
                        var_23 = (((arr_4 [i_1] [i_2]) >= ((((((29 ? 18 : (arr_2 [i_1] [i_1])))) >= -34358689789)))));
                    }
                }
            }
        }
        arr_28 [6] [i_0] = var_11;
        var_24 *= 0;
        var_25 = (max(var_25, 3716473788));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_31 [i_0] [i_8] &= (((~250) && 250));
            arr_32 [i_0] [i_0] [i_0] = ((-2048 ? 376305511558697524 : 193));
            var_26 = ((-(var_12 * 148)));
            var_27 = var_3;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_35 [i_0] [i_9] [i_9] = (1689869161723754366 ? ((((((var_1 ? var_15 : 0))) && (arr_29 [i_9] [i_0])))) : 128);
            arr_36 [i_0] [i_0] [i_0] = (((53531 + (arr_34 [i_0] [2]))));
            var_28 = (max(var_28, ((max(((((((~(arr_6 [i_0] [i_9] [1])))) ? 252 : (arr_7 [i_9] [i_9] [i_9])))), (((max(1, -3583108533618087061)) - (((min(232, var_12)))))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_39 [i_0] [i_0] [i_0] = ((12004 ? (((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_4 [i_0] [2]))))) : 4202427272));
            arr_40 [i_10] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10]);
        }
    }
    for (int i_11 = 3; i_11 < 9;i_11 += 1)
    {
        var_29 = (arr_25 [i_11 - 1] [i_11] [i_11 - 3] [i_11]);
        arr_43 [i_11 + 1] = (min(((-var_0 ? var_5 : (arr_30 [i_11] [i_11 + 1] [i_11]))), (((5689837379031423273 ? (arr_25 [i_11] [i_11] [i_11] [i_11 - 2]) : var_0)))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 9;i_15 += 1)
                        {
                            var_30 = ((((31 * (arr_38 [12])))));
                            var_31 = (min(((((((var_12 ? var_1 : 57801))) ^ 3364862786))), (max(((var_10 ? 1705645538 : var_11)), ((min(var_13, (arr_44 [i_12] [i_12]))))))));
                        }

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_32 -= 19;
                            var_33 = var_13;
                            var_34 = (((-(arr_4 [i_11] [i_11]))));
                            arr_56 [i_11 - 1] [i_11 - 1] [i_14] [i_11 - 1] = (((arr_37 [i_12] [i_13] [i_12]) ? (arr_3 [i_12] [i_16]) : (max(957926817, (max(24, 3337040496))))));
                            var_35 = (max(var_35, ((min(31, (arr_2 [i_11] [i_11]))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            var_36 = ((576460752303423487 ? 225 : 15));
                            var_37 = (max(var_37, (arr_44 [i_11] [i_11])));
                            arr_59 [i_17] [i_14] [i_13] [i_12] [i_11] = 2589321760;
                            var_38 = (min(var_38, 31));
                            arr_60 [i_12] [i_12] [i_12] [i_12] [i_12] = ((var_0 ? (arr_4 [i_11 - 3] [i_11 - 2]) : -var_13));
                        }
                        var_39 = 231;
                        var_40 ^= (~-28219);
                    }
                }
            }
        }
    }
    var_41 = -var_11;
    #pragma endscop
}
