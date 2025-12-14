/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_8 [i_0] [i_2] [i_2]) ? ((-16383 ? (max(var_4, (arr_4 [i_0]))) : (((arr_9 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) ? 16379 : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (arr_0 [i_0 + 1] [i_3 + 1]))))));
                                var_19 = (min(var_19, var_10));
                                var_20 *= (4294950913 >> 1);
                                arr_13 [i_0] [i_1] [i_2] &= ((~(arr_10 [i_0] [i_1])));
                                var_21 = (min(var_21, (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((+(((((arr_4 [i_0]) ? (arr_2 [i_0]) : var_2)) | ((((arr_4 [i_1]) >> (((arr_0 [i_0] [i_1]) - 1921803753))))))))))));
                var_23 += ((~(((!(!var_8))))));

                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] &= (max((arr_11 [i_1] [i_5]), (((arr_3 [i_0 - 1]) >> (((arr_3 [i_1]) - 7077625109913577676))))));
                    arr_18 [i_0] [i_1] [i_5] [i_5] = 4294950912;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_6] [i_6] [i_6] |= (((arr_2 [i_0 - 1]) / (arr_2 [i_0 - 1])));
                    var_24 *= (4082067334 + 95);
                    var_25 |= arr_16 [i_0] [i_1] [i_6] [i_1];
                    arr_22 [i_0] [i_6] = (arr_14 [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = (((((((4294950913 > (arr_31 [i_0] [i_1] [i_9] [i_8]))) ? (((arr_23 [i_1]) ? (arr_10 [i_9] [i_1]) : (arr_8 [i_0] [i_0] [i_0]))) : 4294950908))) ? (min((4294950913 && 212899961), (max(1109548048089095497, 4294950913)))) : (((((min((arr_31 [i_0] [i_1] [i_7] [i_8]), (arr_5 [i_0] [i_7] [i_8] [i_9]))) == (((((arr_9 [i_0] [i_1] [i_7] [i_8] [i_8] [i_9]) >= (arr_15 [i_9])))))))))));
                                var_27 = (arr_25 [i_9] [i_8] [i_1] [i_0]);
                                var_28 += 0;
                                var_29 = (((arr_0 [i_1] [i_1]) & (min(((2 ^ (arr_27 [i_9] [i_8] [i_7] [i_1] [i_0]))), 1))));
                            }
                        }
                    }
                    var_30 = (max((!-7136842466006165411), ((2063924500 ? (!4082067328) : (-9108920610061879244 || 1048574)))));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    var_31 = (max(var_31, (arr_16 [i_0] [i_0] [i_0] [i_0])));

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_37 [i_0] [i_11] [i_0] [i_0] &= -1834427404;
                        var_32 *= (((arr_16 [i_0] [i_1] [i_10] [i_11]) & (arr_16 [i_0 + 2] [i_1] [i_10 + 1] [i_11])));
                        var_33 = ((~(arr_4 [i_0])));
                        arr_38 [i_0] [i_1] [i_10] [i_11] = (((((-(arr_8 [i_1] [i_10] [i_11])))) ? (((61572651155456 ? 24 : 167))) : ((2 ? var_13 : var_4))));
                        var_34 = (max(var_34, (~-16378)));
                    }
                }
                var_35 -= ((((((arr_2 [i_0 + 2]) ? (max(var_7, (arr_24 [i_0]))) : (arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1])))) > (min(((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_19 [i_1])))), (arr_3 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                var_36 = (max(var_36, ((max(var_14, (arr_44 [i_12 - 1]))))));
                arr_45 [i_12] = (min((((min(7136842466006165410, (arr_19 [i_12]))) >= ((var_6 ? var_14 : var_5)))), (arr_24 [i_12])));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_52 [i_14] [i_15] = (((((((min(4294950913, 0))) ? ((((arr_35 [i_12] [i_12] [i_16] [i_12]) ? (arr_23 [i_12]) : 16383))) : (arr_1 [i_12])))) ? ((+(max((arr_16 [i_12] [i_14] [i_15] [i_16]), (arr_10 [i_12] [i_15]))))) : var_0));
                                arr_53 [i_12] [i_13] [i_14] [i_15] [i_16] = max((((arr_29 [i_13] [i_13] [i_14] [i_15] [i_16]) ^ ((~(-127 - 1))))), var_11);
                            }
                        }
                    }
                }
                arr_54 [i_12] [i_13] [i_13] = (((-127 - 1) ? (((-(arr_47 [i_12 + 1] [i_12 + 1])))) : (((((arr_42 [i_12] [i_13]) >= (arr_4 [i_12]))) ? 843687739 : (727793508 & 1834427399)))));
            }
        }
    }
    var_37 = max(var_14, (((!var_0) ? ((min(var_9, var_15))) : 2813051392)));
    var_38 = (((~(!var_16))));
    var_39 += var_12;
    #pragma endscop
}
