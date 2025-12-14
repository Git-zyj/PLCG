/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((65532 >= (min(var_16, var_6))))), -var_12));
    var_18 = ((+(((~var_11) % var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_0 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_19 = var_15;
            arr_7 [12] [6] [i_1] = (((-966834604298125352 >= var_5) ^ (65533 + var_0)));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (~-18111)));
                        var_21 = (max(var_21, var_3));
                    }
                }
            }
            arr_14 [1] [i_1 - 1] [12] = (arr_9 [i_0]);
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_18 [i_0] [i_4] [i_4] = (var_3 ^ (arr_2 [i_0]));
            var_22 = ((arr_13 [i_0] [i_0] [i_0] [5]) <= (var_1 + 2602355523190564342));
            arr_19 [i_4] [i_0] [5] = (6617349608006493785 >> 23);
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_25 [i_6] [i_4] [i_0] = -65529;

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_23 = (min(var_23, ((((((-986275705 ? var_11 : var_12))) && (arr_10 [i_7 + 1] [i_5 + 2]))))));
                            var_24 = var_14;
                            var_25 = (((arr_3 [i_5 + 1]) < (arr_3 [i_5 - 2])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_31 [i_0] [i_4] [i_5] [i_4] [i_0] = ((!(arr_23 [i_5 + 1] [i_5 + 1] [i_4] [i_5 + 2] [i_4] [i_5 + 2])));
                            var_26 = (33521664 || 4261445618);
                            arr_32 [i_0] [i_0] [i_4] = -1;
                            arr_33 [i_4] [i_4] [i_5] [9] [i_8] = var_7;
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_37 [i_0] [9] [i_4] [9] [i_0] = ((var_3 ? var_6 : var_8));
                            arr_38 [i_0] [i_4] [i_5] [i_4] [15] = (((arr_36 [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 2]) ? (arr_36 [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 2]) : var_5));
                            arr_39 [i_0] |= (((0 >= 152) == ((var_12 & (arr_9 [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_27 = var_13;
                            var_28 = (min(var_28, (!var_6)));
                            arr_42 [i_4] [i_4] [11] [2] = (-(arr_2 [i_5 + 2]));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_45 [12] = (((arr_43 [i_11] [i_11]) ? ((((((((arr_43 [i_11] [i_11]) > 4261445630)))) > -6617349608006493785))) : -31290));
        arr_46 [i_11] [i_11] = ((-(((!(var_2 != 2573997929963250941))))));
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        arr_59 [i_12 + 1] [i_13] [i_13] [i_14] [18] = 1;
                        var_29 *= 4;

                        for (int i_16 = 2; i_16 < 17;i_16 += 1)
                        {
                            arr_62 [i_13] [i_13] = (((((arr_51 [i_12 + 1] [i_16 - 1] [i_12 + 1]) < (arr_51 [i_12 + 1] [i_16 - 2] [i_13]))) ? (((arr_52 [i_12 + 1] [i_13]) % (arr_52 [i_12 + 1] [i_13]))) : -var_7));
                            var_30 = (max(var_30, ((((max(var_0, var_1)) - ((((!(arr_50 [17] [i_13]))))))))));
                            arr_63 [18] [i_13] [i_13] [i_15] [i_16 - 2] = (max(5922773556728574148, 18014398475927552));
                            arr_64 [i_13] [i_15] = 1;
                            var_31 *= ((-((((min(1, var_6)) != (max((arr_47 [1]), (arr_61 [i_12] [i_14] [i_14]))))))));
                        }
                        var_32 &= (((((-8610053529570385445 | (arr_61 [i_12 + 1] [i_13] [i_13])))) && -var_5));
                    }
                }
            }
        }
        arr_65 [i_12] = (((~var_5) > (((arr_54 [i_12 + 1] [i_12] [i_12 + 1] [i_12]) ^ 2438073986409337412))));
        var_33 = ((((max(1, 1))) ? (((-var_10 ? (1394869429 * 47) : ((var_5 & (arr_56 [i_12 + 1] [i_12 + 1])))))) : ((~(arr_61 [i_12] [i_12 + 1] [i_12])))));
    }
    var_34 = var_7;
    #pragma endscop
}
