/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239874
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
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [(unsigned char)6] [i_1] [i_2 + 3] [i_2] [i_2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_2 [i_1])))) * (((/* implicit */int) var_13))))) : (7660583142585649355ULL));
                    arr_12 [i_0] [(unsigned short)4] [(unsigned short)4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [(unsigned short)4] [i_1]);
                }
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_17 [i_5] [(signed char)2] [(signed char)10] [i_5] [10ULL] |= ((/* implicit */unsigned char) arr_15 [11ULL]);
                            arr_18 [8ULL] [8ULL] [(unsigned char)6] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-101)) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54624)) ? (arr_21 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7))))))))) ? (max((((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [(unsigned short)3] [i_1] [i_1])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_6])))))))));
                    var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_13)))))))));
                    arr_25 [i_7] &= ((/* implicit */signed char) var_12);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 14990856442675385057ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_18) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73)))))) == (((((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_6])) | (((/* implicit */int) arr_14 [(unsigned short)2] [i_6] [i_1] [i_0] [i_0])))))))) : (12987944240475841827ULL)));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((34359737856ULL) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_8] [i_0] [i_0] [(unsigned short)4] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_16)))))));
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    arr_31 [(unsigned char)7] [i_1] [(unsigned char)11] [(signed char)9] [i_1] [6ULL] = ((/* implicit */_Bool) (signed char)-33);
                    arr_32 [i_0] [i_0] [i_9] [4ULL] [i_0] [(unsigned char)8] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_6 - 1] [i_6] [i_6] [(_Bool)1] [i_6 + 1] [i_6 - 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [(unsigned short)7] [(unsigned short)7] [i_1] [i_6] [i_9]))));
                }
                for (unsigned short i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6 + 1] [i_6]))))))));
                        var_25 = ((/* implicit */_Bool) ((arr_5 [i_6 + 1] [i_6 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_11] [i_6 - 1]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_40 [(unsigned char)8] [(unsigned char)8] [6ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_0]))) ? (((/* implicit */int) arr_27 [i_6] [i_6 + 3] [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) var_3))))) < (((((var_18) % (var_14))) & (arr_30 [i_12] [8ULL] [(_Bool)1] [(_Bool)1])))));
                        var_27 *= ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_6 [i_1] [i_6] [i_1]);
                        arr_43 [i_1] [(signed char)4] [i_6] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */_Bool) (signed char)-33);
                        arr_44 [i_13] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_15 [i_6 - 1]);
                        var_29 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_10 - 2] [(_Bool)0]))) & (arr_39 [i_6 + 1]))));
                    }
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
                var_31 = ((/* implicit */_Bool) var_12);
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)93)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) * (var_12)))))));
                arr_45 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) arr_7 [(unsigned char)7] [i_6] [i_6 + 3])))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                arr_49 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)90))));
                arr_50 [i_0] [i_1] [i_1] = arr_37 [i_14] [i_1] [i_14] [i_1] [i_1] [i_1] [6ULL];
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_1), (arr_34 [i_14] [i_1] [i_1] [(unsigned char)8]))))));
            }
            var_34 = ((/* implicit */unsigned short) min((var_34), (arr_37 [i_1] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])));
        }
        var_35 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)65521))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_4))));
                                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) var_15))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] &= ((/* implicit */unsigned long long int) (((((+(136339441844224ULL))) >= (var_12))) ? (((/* implicit */int) ((var_4) > (var_12)))) : (((/* implicit */int) var_7))));
                                arr_61 [i_17] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_53 [(unsigned short)1] [i_17] [i_16] [i_15])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_58 [i_18] [i_17] [i_17] [(unsigned short)5])) : (((/* implicit */int) arr_58 [9ULL] [i_17] [i_17] [i_18]))))));
                            }
                        } 
                    } 
                    var_38 *= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)190), (((/* implicit */unsigned char) (signed char)-113)))))) ^ ((-(var_14))))) : (((((((/* implicit */int) var_17)) < (((/* implicit */int) (signed char)31)))) ? (((((/* implicit */_Bool) arr_19 [i_0] [(_Bool)1] [(unsigned short)4])) ? (15472139756818493729ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2974604316891057886ULL)) || (((_Bool) (signed char)29))));
                }
            } 
        } 
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)8)) % (((/* implicit */int) max((arr_13 [i_19] [i_19] [i_19] [(_Bool)1] [i_19] [(_Bool)1]), (arr_13 [(_Bool)0] [i_19] [i_19] [i_19] [i_19] [i_19]))))));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                {
                    arr_68 [i_21] = ((/* implicit */_Bool) ((signed char) ((min((var_18), (((/* implicit */unsigned long long int) var_7)))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
        arr_69 [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_56 [i_19] [(signed char)7] [i_19] [(signed char)11] [i_19])) ? (((/* implicit */int) arr_56 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_19 [i_19] [i_19] [i_19]))))));
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                {
                    var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % ((-(((/* implicit */int) ((unsigned short) var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        for (signed char i_25 = 0; i_25 < 12; i_25 += 2) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((arr_76 [i_25] [(unsigned char)3] [(unsigned char)8] [i_22]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_22] [i_24] [i_25])) >> (((12987944240475841827ULL) - (12987944240475841821ULL)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_37 [i_19] [i_24] [(signed char)10] [i_23] [i_23] [i_24] [i_23])))))))))))));
                                arr_79 [i_19] [i_19] [i_19] [11ULL] [(unsigned short)6] [i_19] [i_19] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (signed char i_27 = 0; i_27 < 12; i_27 += 1) 
                        {
                            {
                                arr_86 [i_27] [i_26] [i_23] [(unsigned short)0] [i_26] [i_19] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_27] [i_22] [i_22] [i_19]))) * (arr_74 [i_27] [i_23] [i_22]))) > (var_18));
                                arr_87 [i_19] [i_23] [i_19] |= ((/* implicit */signed char) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_10 [i_27] [i_23] [i_22] [i_19])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_71 [i_19] [4ULL])) * (((/* implicit */int) (unsigned char)31)))))) : (((/* implicit */int) var_5))));
                                var_44 -= ((/* implicit */signed char) max((min((arr_58 [i_19] [i_23] [i_19] [i_19]), (((/* implicit */unsigned char) arr_15 [i_19])))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_71 [i_22] [i_27])) >= (((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    arr_88 [i_22] [i_22] [i_22] [4ULL] = min((((/* implicit */unsigned short) var_17)), (max((((/* implicit */unsigned short) ((arr_21 [i_19]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))))), (((unsigned short) var_4)))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) 18446607734267707410ULL))));
    var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)29))));
}
