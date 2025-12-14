/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21786
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = var_7;
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((min((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) var_8)))) - (1980486490))))))));
            arr_6 [i_0] = max((((unsigned long long int) (+(var_12)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1)))))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65533)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) max((arr_1 [i_0]), (var_3))))))));
                            var_20 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (arr_10 [i_0] [i_1] [i_2])))), ((+(arr_0 [i_0]))))) / (arr_2 [i_0])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) min(((unsigned short)19037), ((unsigned short)19025)));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) & (var_4))) : (max((arr_11 [i_0] [i_5] [i_6] [i_0] [i_8]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)33631))))))))));
                            arr_23 [i_0] [i_7] [i_6] [i_7] [i_8] = arr_9 [i_8];
                        }
                    } 
                } 
            } 
            arr_24 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_7 [i_5] [i_5] [(unsigned short)15]))))) ? (min((arr_17 [i_0] [i_0] [i_5] [8ULL]), (var_0))) : (var_0))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_4 [i_5])))))))));
            arr_25 [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_5] [i_5])) | (((/* implicit */int) var_1))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_5]))) & (var_0)))))), (arr_0 [i_5])));
        }
    }
    var_23 |= ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) (unsigned short)19024)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)46499))))))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            {
                var_24 = min((arr_30 [i_9]), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10]))) + (arr_28 [i_9] [i_10] [i_9]))), (((((/* implicit */_Bool) arr_26 [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_28 [i_9] [i_9] [i_10]))))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_9] [i_9] [i_10] [i_11]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_9] [i_9]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_30 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) 1885550895165183590ULL)) ? (((/* implicit */int) (unsigned short)30527)) : (((/* implicit */int) (unsigned short)19752)))) : (((/* implicit */int) min((var_3), (max((var_14), (var_1))))))));
                    arr_33 [i_9] [i_10] [i_11] |= ((/* implicit */unsigned long long int) arr_29 [1ULL]);
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                arr_41 [i_13] [i_12] [i_12] [i_11] [i_10] [i_10] [(unsigned short)4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_12] [i_13])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_32 [i_13]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_31 [i_11 + 3] [i_12] [i_11 - 1] [i_12]))))) ? (((unsigned long long int) ((unsigned long long int) var_13))) : (((((/* implicit */_Bool) max((arr_35 [i_9] [i_12] [i_13]), (((/* implicit */unsigned long long int) arr_31 [i_9] [(unsigned short)16] [4ULL] [i_12]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [9ULL] [9ULL] [i_11] [(unsigned short)14])) ? (((/* implicit */int) arr_40 [i_9] [i_10] [i_11] [(unsigned short)8] [i_11 + 3])) : (((/* implicit */int) arr_39 [i_9] [i_11] [i_9]))))) : (((((/* implicit */_Bool) arr_29 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_30 [i_9]))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_34 [i_10] [i_12] [i_13])) ? (((arr_30 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9])))))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_32 [i_12])) ? (arr_28 [i_9] [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [12ULL] [12ULL] [(unsigned short)11]))))))))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((arr_35 [i_9] [i_10] [i_10]) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_9]))))))))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [(unsigned short)12] [(unsigned short)12])) != (((/* implicit */int) arr_31 [i_9] [i_9] [i_10] [i_10])))) ? ((+(arr_28 [i_10] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_0)))))))) ? ((-(((((/* implicit */_Bool) arr_34 [i_10] [1ULL] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_27 [i_10]))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_10] [i_10] [i_10])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) + (var_0)))))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) var_5)) + (((/* implicit */int) var_2)))), ((-(((/* implicit */int) arr_40 [i_9] [i_10] [i_10] [i_14] [i_14])))))), ((-(((/* implicit */int) arr_36 [i_9] [i_10] [i_14]))))));
                    var_30 |= ((unsigned short) max(((!(((/* implicit */_Bool) arr_32 [i_10])))), ((!(((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_14] [i_10]))))));
                    var_31 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((min((var_9), (var_1))), (arr_34 [i_9] [i_10] [i_14]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) arr_38 [i_15] [i_15] [i_14] [i_15] [(unsigned short)13] [i_10])) ? (((/* implicit */int) arr_29 [i_14])) : (((/* implicit */int) arr_42 [i_9] [i_10] [i_14] [i_15])))), (((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
                        var_33 = ((/* implicit */unsigned long long int) arr_40 [i_9] [i_15] [i_14] [i_15] [i_10]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45783)) | (((/* implicit */int) (unsigned short)31905))));
                        arr_48 [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9])) ? ((+(((/* implicit */int) arr_46 [i_16] [i_10] [i_14] [(unsigned short)10])))) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_29 [i_16]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                        {
                            arr_51 [i_9] [i_9] [(unsigned short)12] [i_14] [i_14] [i_14] |= ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) max((var_13), (arr_32 [(unsigned short)9])))), ((-(((/* implicit */int) var_16))))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_47 [i_9] [i_10] [i_16] [i_16] [i_17])))) ? (max((arr_35 [i_10] [(unsigned short)4] [i_14]), (((/* implicit */unsigned long long int) var_11)))) : (((4887964464614121289ULL) << (((7424475187332504834ULL) - (7424475187332504785ULL)))))))) ? (((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16702103328948092154ULL)) ? (((/* implicit */int) arr_46 [i_17] [(unsigned short)1] [i_14] [i_16])) : (((/* implicit */int) (unsigned short)31905))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_10] [i_10] [i_14] [i_16]))) : (arr_35 [i_9] [i_9] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [4ULL] [i_10] [(unsigned short)7] [i_16] [i_17] [i_10] [i_14])))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [(unsigned short)16]))));
                            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(arr_43 [i_14] [i_14] [i_14]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19037)) ? (((/* implicit */int) (unsigned short)19037)) : (((/* implicit */int) (unsigned short)29791))))) : (max((arr_43 [i_10] [i_14] [i_10]), (max((arr_45 [i_10] [i_14]), (arr_37 [i_18] [i_10] [i_14] [i_16])))))));
                        }
                        for (unsigned short i_19 = 1; i_19 < 16; i_19 += 3) 
                        {
                            var_38 |= ((/* implicit */unsigned short) min((11022268886377046781ULL), (1885550895165183590ULL)));
                            arr_56 [i_9] [i_10] [i_14] [i_16] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)51450))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)33631)))))));
                            arr_59 [i_16] [(unsigned short)10] = max((min((arr_28 [i_9] [i_10] [i_14]), (((/* implicit */unsigned long long int) max((arr_58 [i_20] [i_20] [i_16] [i_14] [i_9] [i_9] [i_9]), (var_1)))))), (((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (var_4))));
                            arr_60 [i_16] = (-(((((/* implicit */_Bool) ((arr_53 [i_9] [i_9] [i_20] [i_16] [i_20] [i_10] [i_9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_9] [i_9] [(unsigned short)10] [i_14] [i_16] [i_20])))))) ? (min((arr_35 [i_9] [i_10] [i_10]), (arr_45 [i_9] [i_10]))) : (((((/* implicit */_Bool) arr_43 [i_9] [i_10] [i_10])) ? (arr_50 [i_20] [i_16] [i_16] [i_14] [i_16] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                            var_41 *= max((((((/* implicit */_Bool) max((arr_50 [4ULL] [i_10] [i_14] [i_16] [i_14] [i_9] [i_16]), (arr_38 [i_9] [i_10] [i_14] [i_16] [i_20] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10]))) : (((arr_27 [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(unsigned short)10]))))))), (((((((/* implicit */_Bool) arr_28 [i_9] [i_10] [i_14])) ? (arr_45 [i_9] [i_9]) : (arr_53 [(unsigned short)4] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) - (arr_30 [i_9]))));
                        }
                    }
                }
                for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 2) 
                    {
                        for (unsigned short i_23 = 4; i_23 < 16; i_23 += 1) 
                        {
                            {
                                var_42 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_40 [i_23 + 1] [i_23 - 2] [i_23 + 1] [i_23 - 3] [i_23 - 4])))));
                                var_43 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_55 [i_22] [i_10] [(unsigned short)4] [i_22] [12ULL] [i_23]))))), (((arr_44 [i_9] [i_9] [i_22] [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_9] [i_10] [i_21] [i_22] [i_23] [i_9] [i_9]))))))) < (((min((((/* implicit */unsigned long long int) var_14)), (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_21] [i_22])))))))))));
                                arr_69 [i_9] [i_10] [2ULL] [i_22] [i_10] [i_22] [i_9] = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) arr_63 [i_9] [i_10] [(unsigned short)14])))) & (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_31 [i_9] [i_10] [i_21] [i_22])))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_45 [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) != (((((/* implicit */_Bool) arr_44 [i_23 - 3] [i_22] [i_10] [i_9])) ? (arr_28 [i_9] [i_9] [(unsigned short)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [(unsigned short)3] [i_9] [i_9]))))))))));
                            }
                        } 
                    } 
                    var_44 = max((max((((/* implicit */unsigned long long int) max((var_11), (arr_54 [i_9] [i_9] [(unsigned short)7] [i_21] [i_21] [i_21] [i_21])))), (max((arr_50 [i_9] [i_9] [i_10] [i_21] [i_21] [i_10] [i_21]), (arr_62 [i_9] [i_9] [i_21] [i_9]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_9] [i_10]))) & (var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_53 [i_9] [i_9] [i_10] [i_21] [i_21] [i_21] [i_21])))))))));
                    arr_70 [i_9] [i_10] [i_21] [i_10] = arr_26 [5ULL] [i_10];
                }
            }
        } 
    } 
}
