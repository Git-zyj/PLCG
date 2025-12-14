/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240576
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_3);
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) arr_2 [14ULL])) : (((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_3 [i_2] [i_4 + 1] [(signed char)6])))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_2] [12])))))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(arr_8 [i_4] [i_4 + 3] [i_4] [i_4])))), ((~(((/* implicit */int) arr_8 [i_4 - 1] [i_4 + 2] [i_4] [i_4]))))));
                                arr_16 [i_4] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_4 + 1] [i_1] [i_1] [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)226))))), (min((arr_1 [i_0 + 3] [i_0 + 3]), (arr_12 [i_0 + 2] [i_3 + 1] [i_1] [i_3]))));
                            }
                        } 
                    } 
                }
                arr_18 [3U] [(unsigned char)8] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 + 4] [i_1])) / (arr_14 [i_0] [17LL] [i_1] [i_0] [i_1] [i_1] [i_1]))) * (((/* implicit */unsigned long long int) min((-5), (((/* implicit */int) (unsigned short)5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [8U] [(unsigned char)24] [i_0 + 4] [(signed char)22] [i_1] [i_1])) ? (var_7) : (min((var_7), (((/* implicit */int) arr_8 [i_0] [14U] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_0] [i_1]))))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [i_1])) * (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-3988918597770746000LL))))))));
                arr_19 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_13 [i_0 + 1]), (arr_13 [i_0 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 - 1])) != (((/* implicit */int) arr_13 [i_0 + 1]))))) : (((/* implicit */int) max((arr_13 [i_0 + 1]), (arr_13 [i_0 + 3])))));
                var_17 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)226))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [15] [i_5])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_5])) | (((/* implicit */int) arr_22 [i_5]))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_5] [i_5])), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) & (arr_12 [i_5] [i_5] [i_5] [i_5])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_5])) | (((/* implicit */int) var_13)))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 8; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) (~(10LL)));
                        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 85873678)) ? (19U) : (2648176380U))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6 + 1] [2ULL] [i_8 - 2] [6ULL]))) == (arr_6 [i_6 + 1] [i_7]))))));
                        var_20 = ((/* implicit */signed char) arr_29 [i_6] [i_8 + 1] [i_8]);
                        /* LoopSeq 3 */
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [(_Bool)1] [i_6]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6]))) : (arr_1 [i_5] [i_6 + 1])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6]))));
                            arr_37 [i_6 + 1] [i_6] = ((((/* implicit */_Bool) 577774749U)) ? (3194363114U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (arr_8 [i_8 + 1] [i_8 + 4] [i_8 + 2] [i_8 + 2]))))));
                            arr_38 [i_10] [i_8 + 2] [i_6] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_6 + 1])) ? (arr_24 [i_6 + 1] [i_10]) : (arr_24 [i_5] [i_10])))));
                            arr_39 [i_8] [i_6] = ((/* implicit */signed char) var_9);
                        }
                        for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) >> (((2802648371U) - (2802648362U))))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_8 + 4] [i_8 + 2] [i_8] [i_8 - 1] [i_6])) != (((/* implicit */int) arr_36 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_6]))))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_6] [(short)2])), (arr_15 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1]))))));
                            var_26 ^= ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) arr_27 [i_8] [i_8])))) < (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))))))));
                            var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_11]))))) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned char)252)))) : (((((var_7) + (2147483647))) >> (((arr_5 [i_5] [i_6] [i_7]) - (1902848384U)))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_34 [(short)8] [i_6] [i_6] [i_6] [i_6] [i_6] [(short)8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_5] [i_7] [i_6]) <= (((/* implicit */unsigned int) var_5)))))) : (var_3)))));
                            arr_42 [i_5] [i_6] [i_7] [i_8] [i_11] = ((/* implicit */unsigned short) var_14);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_12] [i_14 + 1] [i_14 + 1] [i_12]))) : (arr_14 [i_5] [i_14 + 2] [i_14 + 1] [i_14] [i_14 + 2] [i_5] [i_14 + 1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 1) 
                        {
                            arr_53 [i_13] [(unsigned short)8] [i_12] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [24] [i_5] [i_14 + 2] [i_15]))) <= (var_12)))), ((-(((/* implicit */int) arr_8 [i_5] [3] [i_5] [i_5]))))))));
                            var_29 = ((/* implicit */signed char) arr_14 [i_5] [i_5] [15ULL] [19] [(unsigned short)9] [i_12] [i_5]);
                            arr_54 [i_12] [i_12] [i_13] [i_14 + 1] [i_15] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) arr_49 [i_5] [i_12] [i_14] [10ULL])), (var_11)))), ((~((~(((/* implicit */int) arr_35 [i_5] [i_5] [i_13] [(signed char)2] [6ULL]))))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) == (((/* implicit */int) arr_26 [i_12] [10U])))) ? (((/* implicit */int) arr_40 [i_14] [i_12] [i_14] [i_12] [i_14 - 1] [i_14 + 1] [i_14])) : (((arr_35 [i_15] [i_14] [(unsigned char)7] [i_12] [i_5]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((((/* implicit */_Bool) arr_31 [i_5] [i_12] [i_13] [i_13] [i_14] [i_15])) ? (arr_51 [i_5] [(signed char)7] [(short)5] [i_5] [(signed char)7] [i_5] [i_5]) : (arr_7 [i_5] [i_5] [i_12]))) - (563813983U)))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_45 [i_5] [i_14 + 1] [i_15 - 1]))))) | (arr_14 [17] [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_12] [i_15])))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((((((((/* implicit */_Bool) arr_14 [6U] [i_12] [22U] [i_14] [i_15 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned int) var_5)) : (var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) var_9)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_15]), (var_4))))) & (arr_7 [i_5] [i_5] [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_13] [i_15 + 1] [i_15 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2]))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [14ULL] [14ULL] [i_5] [14ULL] [18]))) : (var_12)))))))));
                        }
                    }
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_17 = 1; i_17 < 11; i_17 += 1) 
                        {
                            arr_60 [1] [i_12] [i_13] [(short)9] [i_17] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_5] [19] [19] [i_17 - 1] [3ULL] [i_5])) ? (((/* implicit */int) arr_11 [i_13] [2] [i_13] [i_17 - 1] [i_17] [i_13])) : (((/* implicit */int) arr_11 [i_5] [i_12] [i_13] [i_17 + 1] [i_17] [i_16])))) * (((/* implicit */int) arr_35 [i_17 + 1] [i_17] [i_17 + 1] [i_17 - 1] [i_13]))));
                            var_32 += ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) arr_0 [i_5] [(short)0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_56 [i_5] [i_12] [i_13] [i_16] [7U] [i_13]))))))));
                        }
                        arr_61 [i_12] [i_12] [i_12] [i_13] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_8)))) ? (arr_55 [i_13] [i_13] [i_13] [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [3])) & (((/* implicit */int) arr_43 [i_12])))))))) ? (((((1835929506) == (((/* implicit */int) (unsigned short)25917)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_12] [(signed char)0])))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_12] [i_12] [i_12])) < (((/* implicit */int) arr_52 [i_5])))) ? (arr_46 [i_5] [i_12]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_41 [8U] [9ULL] [i_12] [i_13] [i_16]))))))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_33 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [(unsigned short)3] [(unsigned short)3] [i_12] [i_13] [(signed char)1] [(_Bool)1]))))) ? (arr_28 [i_12] [i_13]) : (min((((/* implicit */unsigned int) arr_57 [(_Bool)1] [i_5] [i_5] [i_5] [i_5])), (var_12)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((var_7), (var_5)))) : (var_8)))));
                        var_34 *= ((/* implicit */unsigned long long int) max(((unsigned char)193), ((unsigned char)222)));
                        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [(unsigned char)11] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))) <= (max((arr_51 [i_18] [i_18] [i_13] [i_12] [i_5] [i_5] [i_5]), (arr_63 [i_13] [i_12] [i_5])))));
                        arr_65 [i_12] [i_5] &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)229))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) arr_36 [i_5] [i_12] [i_12] [(unsigned short)6] [i_19]))))));
                        arr_69 [i_5] [i_12] [i_13] [i_19] [i_5] [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_12] [i_5] [i_13] [i_19])) ? (((/* implicit */int) arr_40 [i_5] [i_12] [i_5] [i_5] [i_12] [i_13] [i_19])) : (((/* implicit */int) arr_40 [i_5] [i_12] [i_12] [i_12] [i_12] [i_13] [i_19]))));
                        var_37 = ((/* implicit */long long int) (~(arr_67 [i_5])));
                    }
                    arr_70 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)122)), ((short)12079)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_5])))))));
                    var_38 = ((/* implicit */unsigned int) min((var_38), ((((_Bool)0) ? (2018506382U) : (4294967290U)))));
                }
            } 
        } 
    }
}
