/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = arr_1 [i_0];
        arr_2 [i_0] = ((!(((524287 ? -524287 : 242)))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [i_1 + 2] &= ((((((var_1 + var_12) + (arr_4 [i_1 + 3])))) || (((((arr_0 [i_0]) ^ var_11))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 -= ((+(max((arr_8 [i_3 - 1] [i_1 + 1]), var_6))));
                        var_20 = (min(var_20, ((min((arr_8 [i_3 - 2] [i_1 + 2]), (((!((min(var_17, var_11)))))))))));
                    }
                }
            }
            var_21 = ((var_11 + (((min((arr_6 [i_1 + 2] [6]), (arr_10 [i_1 + 2] [3] [i_0] [4])))))));
            arr_12 [i_1] = ((min((arr_8 [i_1 + 3] [i_1 + 2]), var_4)));
            var_22 = (min(var_22, ((((!var_13) >> (((arr_1 [i_1 + 1]) >> (((arr_0 [i_1 + 1]) - 500435276)))))))));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_23 = (((max(-27, var_10))));
            arr_15 [i_4] [i_4 + 3] = 659239660;
            var_24 -= (((((~(arr_13 [i_0] [i_4 + 3] [i_4 - 1])))) ? ((659239686 ? var_16 : 255)) : ((((arr_13 [i_0] [i_4 + 3] [i_4 + 1]) && (arr_13 [i_0] [i_4 - 1] [i_4 - 1]))))));
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_25 = (min(var_25, (((((arr_11 [9] [i_7 - 2] [4] [0] [i_6 - 2] [i_6 - 2]) ? (arr_11 [10] [i_7 - 2] [10] [6] [i_6 - 2] [i_0]) : var_3))))));
                            arr_26 [i_0] [i_5] [i_6] [i_5] [i_8] = 524266;
                            var_26 = (max(var_3, var_1));
                        }
                        var_27 = var_16;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_31 [i_0] [i_0] [i_10] = (arr_18 [i_9 + 1]);
                    var_28 -= (min((var_15 > var_5), var_10));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {
                    arr_43 [i_11] [i_12] |= ((((min((arr_33 [i_11]), (arr_35 [1] [i_12])))) << (((arr_33 [i_12 + 1]) - 50))));

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_29 = min((((arr_46 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) ? var_2 : (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]))), (arr_36 [i_11] [i_11]));
                        arr_48 [i_12] [i_11] [i_14] [i_13] [i_14] [i_14] = ((((min((arr_42 [i_14] [i_12 - 1]), (arr_42 [i_11] [i_12 + 1])))) & ((((min(var_14, (arr_35 [i_11] [i_13])))) ^ 50))));
                        arr_49 [1] [i_12] [i_12] [i_14] = var_15;
                    }
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_30 |= var_7;
                        var_31 &= ((((arr_39 [i_12 - 1] [i_12 + 1] [i_12 - 1]) ? (arr_39 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_39 [i_12 + 1] [i_12 + 1] [i_12 + 1]))));
                        var_32 = ((var_7 << ((((((var_6 ? var_9 : (arr_52 [i_11] [i_13]))) << (var_2 - 40))) - 315391))));
                        arr_53 [i_11] [i_11] [i_15] &= var_12;
                    }
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        arr_58 [i_12] [i_12] [i_12 + 1] = (97 > -1104181473);
                        arr_59 [i_16] [i_12] [i_12] [9] [i_12] [i_11] = ((((max(-var_15, ((0 ? (arr_47 [i_12] [i_12 + 1] [i_13]) : (arr_38 [i_13])))))) ? (((max(-2, 8787503087616)))) : (min((arr_52 [i_12 - 1] [i_12]), var_10))));

                        for (int i_17 = 3; i_17 < 14;i_17 += 1)
                        {
                            var_33 *= (((((min(var_9, var_5)))) >= (arr_57 [i_11] [i_11] [i_11] [i_11])));
                            arr_62 [i_12] [5] [13] [13] [i_17 + 1] [i_11] = (((arr_52 [i_16 + 1] [i_17 - 3]) ? (arr_52 [i_16 + 1] [i_17 - 3]) : ((var_7 ? (arr_52 [i_16 + 1] [i_17 + 2]) : (arr_52 [i_16 - 1] [i_17 - 1])))));
                            var_34 = (max((min((((var_14 > (arr_50 [i_17] [i_16])))), (arr_44 [i_16 - 1] [i_12] [i_16 - 1] [i_16 + 1]))), (!659239656)));
                            arr_63 [i_17] [i_12] [15] [15] [i_11] [i_12] = (max(-5789530720721299213, var_11));
                        }
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            var_35 = var_14;
                            var_36 -= var_17;
                            var_37 *= (((((+(((arr_55 [i_13] [i_16 + 1] [i_13] [i_11]) ? var_3 : var_0))))) || var_8));
                        }
                        arr_66 [0] [1] [i_12] = var_13;
                    }
                    var_38 = ((((-659239661 ? (min(-27, var_0)) : (arr_50 [12] [i_12 - 1]))) & (min(var_16, var_4))));
                    arr_67 [i_12] = var_4;
                }
            }
        }
    }
    var_39 -= var_9;
    #pragma endscop
}
