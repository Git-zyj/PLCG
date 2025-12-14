/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-30842 & 30842);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 &= ((var_5 >= ((((((-73 ? var_6 : var_4))) ? ((-17888 ? 83 : 80)) : 0)))));
                    var_22 &= ((+((((arr_3 [i_1 + 2]) ? var_2 : var_19)))));
                }
            }
        }
        var_23 = var_15;
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_24 = (~30841);

        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            var_25 = (((min((arr_4 [i_3 + 2] [6] [i_3 + 1]), var_12)) + (arr_7 [13] [i_4])));
            var_26 = (((((~(((arr_6 [i_3] [i_3 + 2] [i_3] [6]) | var_4))))) ? (var_17 / var_8) : (((-(var_8 || -66))))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_27 = (arr_7 [i_3] [i_3]);
            var_28 = (arr_6 [i_3] [i_3 + 1] [i_3 + 2] [i_5 - 3]);
            var_29 = (((arr_3 [i_3 + 1]) ? var_2 : var_4));
        }
        var_30 = (max((((var_15 ? 1 : (arr_12 [i_3])))), ((~(arr_2 [i_3 + 2] [i_3 + 2] [i_3])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_31 = 119;
                    var_32 = var_15;
                    var_33 &= max(((17887 ? ((var_11 ? (arr_4 [i_6] [i_6] [i_8]) : (arr_17 [i_8]))) : var_9)), (((var_6 + (((arr_5 [10] [i_6] [i_7] [i_7]) ? -30866 : var_11))))));
                    var_34 = (((arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 2]) ? var_4 : (((-30837 + 2147483647) >> (arr_19 [i_8 + 1] [i_8 - 1] [i_8 - 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_35 = var_19;
                            arr_31 [i_9] [i_12] [i_9] [i_10] [i_9] [10] [i_9] = ((!((((~1) / ((var_16 * (arr_4 [i_6] [1] [i_10]))))))));
                            var_36 = (arr_19 [i_6] [i_9 + 1] [i_12]);
                            var_37 = (((((var_3 ? 13462 : (arr_6 [i_6] [i_6] [i_6] [17]))))));
                        }
                        var_38 = (max(var_16, 6351));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_35 [i_9] [i_9 + 1] [i_9 + 1] [6] [i_13] = (~var_5);
                            var_39 = (arr_33 [i_6] [i_9] [16] [16] [16]);
                            var_40 ^= ((-2093817462 == (arr_20 [i_9 + 1] [i_9 + 1] [i_11])));
                            var_41 = var_11;
                            var_42 = ((((var_8 ? (arr_17 [i_6]) : var_3)) & (var_10 / var_9)));
                        }
                        var_43 = (var_17 + var_7);
                    }
                }
            }
        }
        var_44 = var_13;
    }
    var_45 = (((11463039686791745607 ? (48 - var_9) : 119)));
    var_46 = ((!((((((var_5 ? var_19 : var_11))) ? (var_16 || var_10) : ((var_4 ? var_9 : var_8)))))));
    #pragma endscop
}
