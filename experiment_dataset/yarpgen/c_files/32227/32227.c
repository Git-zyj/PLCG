/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = ((!(((arr_9 [i_1] [i_3 - 1] [i_3] [i_3 - 1]) > (arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                                var_16 = 14803;
                                var_17 += -23825;
                            }
                        }
                    }
                }
                arr_15 [i_0] = (max(((var_12 ? var_4 : 1766128427)), ((var_9 ? -15099 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_18 = -15094;
                var_19 = (min(var_19, ((((arr_17 [i_5] [i_6]) / ((-(arr_17 [i_5] [i_6]))))))));
                var_20 -= (max(-15099, -15116));
            }
        }
    }
    var_21 = (min(var_21, (((var_5 > (min((((var_9 ? var_4 : -26690))), (max(6288571665948439771, 2805442210)))))))));

    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {
                    var_22 = (((((((max(26690, (arr_23 [i_7] [i_8] [i_9])))) ? (~58571) : (arr_16 [i_9])))) ? (((((max(24306, 15094)))) % (16786978573280325411 % 2949456550))) : ((((arr_26 [i_9 - 2] [i_9 - 1]) | var_2)))));
                    var_23 = (((~16052) * (((arr_21 [i_7 - 1]) % (arr_21 [i_7 - 1])))));
                }
            }
        }

        for (int i_10 = 3; i_10 < 14;i_10 += 1)
        {
            arr_32 [i_7] [i_7] = (arr_17 [i_7] [18]);
            arr_33 [i_7] [i_10] = (max(((-15099 | (arr_25 [i_7] [i_7 + 1]))), (var_5 > 12775258071781207621)));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_40 [i_7] [i_7] [i_11] [i_12] [i_13] = (~3823119732058580779);
                        var_24 = var_8;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_25 = var_0;

                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            arr_48 [i_16] [i_11] [i_14] [i_15] [i_16] [i_14] [i_15] = (arr_23 [i_7] [i_16 - 1] [i_14]);
                            arr_49 [i_7] [i_14] [i_15] [i_16] = (var_1 * 24620);
                            var_26 = (min(var_26, -15094));
                            var_27 = -26690;
                            var_28 += (15090 | -15099);
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_53 [i_7] [i_7] [i_7] [i_7] = arr_44 [i_7 - 1] [i_7] [i_7 + 1];
                            arr_54 [i_7] [i_11] [i_14] [i_15] [i_17] = -15091;
                        }
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_29 -= (27529 % 671840086785405099);
                            var_30 = (min(var_30, var_15));
                            arr_57 [i_18] [i_14] [i_11] [i_7] = (((arr_21 [i_7 - 1]) > (((-(arr_39 [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 21;i_19 += 1)
    {
        var_31 ^= ((-7421 ? (arr_58 [i_19] [i_19]) : (arr_58 [i_19] [i_19])));
        var_32 ^= ((-(arr_16 [16])));
    }
    #pragma endscop
}
