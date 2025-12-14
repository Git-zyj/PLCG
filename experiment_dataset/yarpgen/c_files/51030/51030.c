/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [4] [i_0] [i_0] = ((max(-1684587545, -55)));
                var_14 = (arr_2 [i_0]);
                var_15 |= (max((arr_4 [i_0] [i_1]), ((max(var_12, (max(29966, var_7)))))));

                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    var_16 = (((((-(arr_3 [i_0] [i_1] [i_2])))) ? ((-(arr_3 [i_0] [i_0] [i_2 + 3]))) : (arr_3 [i_0] [i_1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_17 = var_7;
                                var_18 = (arr_7 [i_4] [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((max(((var_12 ? var_13 : var_3)), (max(var_13, var_8))))) ? var_12 : 57));
    var_20 = (min(var_20, -124));

    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_21 += (((arr_20 [i_8 + 2] [i_6] [i_6] [i_5 + 3]) ? (((arr_20 [i_8 - 3] [i_6] [i_7] [i_5 - 3]) ? var_8 : (arr_19 [i_5] [i_8 - 2]))) : (((-27 == (arr_20 [i_8 + 1] [i_6] [i_6] [i_5 + 1]))))));
                        arr_24 [i_5] [i_5] [i_7] [i_7] = 21547;
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_22 ^= 7;
            var_23 = (max((max(58, var_1)), (arr_16 [i_9] [14])));
        }
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            var_24 += var_10;
            arr_30 [0] [i_5] [i_5] = (((((var_10 ? (((arr_27 [i_5] [i_10] [i_5]) ? (arr_22 [i_5] [i_5]) : var_3)) : (((arr_27 [i_5] [i_10] [i_5]) / (arr_19 [i_5] [i_10])))))) ? (arr_14 [i_5 + 3]) : var_2));
            arr_31 [i_5] = (((((arr_19 [i_5 + 3] [i_10 - 1]) ? var_3 : 44))) || ((max((arr_23 [i_5] [i_5] [20]), (((arr_19 [i_5] [i_10]) ? var_8 : (arr_26 [i_5 - 3] [i_10] [i_10])))))));
            arr_32 [i_5] = ((((var_5 ? ((var_13 ? var_3 : (arr_14 [i_5]))) : ((((arr_25 [1] [i_5]) ? (arr_21 [i_5] [i_5]) : var_4))))) | (((var_7 ? (arr_26 [i_10 + 3] [i_10] [i_10 + 3]) : (arr_18 [i_10 + 4] [i_10 - 1]))))));
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            var_25 = ((-(arr_18 [8] [i_11])));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    {
                        var_26 = var_9;
                        arr_42 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_12] [i_5] = (arr_20 [i_5 - 3] [i_11] [i_5] [20]);
                        arr_43 [i_5] [i_5] [i_5] [i_13] [i_13 - 1] = ((805306368 ? (arr_39 [i_11 + 3] [i_11] [i_11] [i_5]) : (((arr_15 [i_5]) % (arr_20 [i_5 + 1] [i_5 + 1] [i_5] [i_13])))));
                        arr_44 [i_5] [i_5] = (((((var_8 ? (arr_35 [13] [i_5]) : 36864))) ? ((var_12 ? (arr_29 [i_5] [i_5]) : var_13)) : (arr_40 [10] [i_5] [i_12] [i_5] [i_13])));
                    }
                }
            }
        }
        var_27 = ((-31 / 1015409711) ? -56 : 45187);
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_28 = (((arr_37 [i_14] [i_14] [i_14]) ? ((((((arr_27 [i_14] [i_14] [i_14]) ? (arr_29 [i_14] [i_14]) : (arr_40 [i_14] [i_14] [i_14] [0] [i_14])))) ? (var_5 % var_9) : (arr_27 [i_14] [i_14] [i_14]))) : (((arr_41 [i_14] [2] [i_14]) ? ((max(var_11, var_5))) : ((max(-8, var_11)))))));
        var_29 = ((+(((((var_11 ? (arr_16 [i_14] [i_14]) : (arr_45 [i_14])))) ? (max(var_9, 1362587266)) : (max(4, (arr_22 [14] [14])))))));
    }
    for (int i_15 = 1; i_15 < 23;i_15 += 1)
    {
        var_30 = ((var_2 ? (((-(arr_47 [i_15])))) : ((-50 ? ((max((arr_47 [i_15]), -32))) : (-21 & 31)))));
        arr_51 [i_15] = var_7;
    }
    var_31 = max((max(var_11, (max(var_11, var_3)))), (((((max(var_0, 12))) < var_1))));
    #pragma endscop
}
