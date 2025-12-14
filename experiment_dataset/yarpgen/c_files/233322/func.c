/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233322
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)59))))) + (var_2)))), (((((/* implicit */_Bool) max(((unsigned short)11899), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20163))) * (var_11)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) (~(arr_0 [i_1])));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_3))))));
                        var_18 = ((((/* implicit */_Bool) arr_7 [i_0 + 4] [i_0 + 4] [i_2] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [11LL] [i_0 - 1] [(unsigned short)0] [i_3 - 1]))) : (arr_2 [i_3 - 1]));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) var_3);
                            var_20 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_1]);
                            var_21 += ((((/* implicit */int) (short)9469)) % (((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_3 - 1] [i_3])));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (signed char)-40)) : ((-2147483647 - 1)))) : (((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 1) 
                        {
                            var_23 += ((/* implicit */signed char) arr_0 [i_0 + 4]);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 5053121999776035159ULL)) ? (2746469472U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8894))))))))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) << (((2113058078) - (2113058075)))))));
                            arr_18 [i_3] [i_3] [i_3] [i_6] [i_6 - 1] [i_6] = var_1;
                            var_26 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))));
                        }
                        arr_19 [i_3] [i_1] [3U] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (short)511))));
                    }
                } 
            } 
            var_27 |= ((/* implicit */short) (+(var_4)));
            arr_20 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0 + 2]);
        }
        var_28 = ((/* implicit */unsigned int) arr_3 [5ULL]);
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_0))));
                    arr_27 [i_0] [i_7] [(signed char)11] [i_7] |= ((/* implicit */unsigned short) (((+(var_11))) % (((/* implicit */unsigned long long int) ((arr_14 [1ULL] [i_0 + 1] [i_8] [i_0] [i_7] [(_Bool)1]) ? (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_8] [i_7] [i_8] [i_8])) : (((/* implicit */int) arr_14 [i_7] [i_0 + 2] [i_8] [i_7] [i_7] [i_7])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_9 + 3] [i_0 - 1])) ^ (((/* implicit */int) (signed char)60)))))));
                    arr_32 [i_0] [i_10] [i_10] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0 + 3]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14761))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_0] [3U] [i_10])))))) : (((var_11) | (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-20425))))) ? (arr_2 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_11 + 1] [(unsigned char)13] [i_10]))))))));
                        var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_33 [(unsigned char)0] [i_9] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))) * (((/* implicit */int) ((arr_0 [i_9 + 3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) var_8)) ? (var_10) : ((+(8079462815370415442LL)))))));
                        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1598935302))) ? (((/* implicit */int) arr_12 [(short)4] [i_12] [(short)4] [i_12])) : ((-(((/* implicit */int) arr_7 [i_15 - 1] [i_0 + 4] [i_14 + 1] [i_0]))))));
                                var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((1270767705) == (((/* implicit */int) (unsigned short)58399)))))));
                            }
                        } 
                    } 
                    arr_45 [i_0] [i_12] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [14] [i_13] [i_13] [(unsigned char)15] [i_0])) < (((/* implicit */int) var_3))))) % (((/* implicit */int) arr_37 [i_0] [i_13] [i_13])))) > ((~(2039152401)))));
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_16]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [(unsigned char)10] [i_16] [9U] [(signed char)12]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_13))) : ((+(var_8))))))))));
        var_37 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_43 [i_16] [i_16] [i_16] [i_16])), (((((/* implicit */unsigned long long int) arr_13 [i_16] [5ULL] [i_16] [i_16])) + (var_11)))))));
        var_38 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_16] [i_16] [i_16] [i_16])))))));
        /* LoopSeq 4 */
        for (int i_17 = 2; i_17 < 13; i_17 += 3) 
        {
            var_39 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [7U] [(short)2]))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_39 [i_16] [i_17])) : ((~(((/* implicit */int) (short)8160))))))));
            var_40 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (260046848U)))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            var_41 += ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_4 [i_18] [i_16])) ? (((/* implicit */unsigned long long int) arr_46 [i_18])) : (var_9))) ^ (((/* implicit */unsigned long long int) ((6LL) & (((/* implicit */long long int) ((/* implicit */int) arr_39 [(_Bool)1] [(_Bool)1]))))))))));
            var_42 = ((/* implicit */short) (-((-(arr_25 [(unsigned short)8] [i_18] [(unsigned short)8] [i_16])))));
            /* LoopNest 2 */
            for (short i_19 = 1; i_19 < 15; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                {
                    {
                        var_43 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_18] [i_19]))))) : (4468530991139379702ULL)));
                        var_44 += ((/* implicit */signed char) arr_2 [i_19 - 1]);
                    }
                } 
            } 
        }
        for (int i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
        {
            arr_63 [i_16] [i_21] = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8455316240010705136ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_16] [i_21] [i_16] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_16] [i_16] [i_21] [i_21]))) : (var_12)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                arr_66 [i_21] [i_16] = ((/* implicit */signed char) (!((_Bool)1)));
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_13 [i_16] [i_21] [i_22] [i_16]) > (((/* implicit */int) (unsigned short)14336)))))));
                /* LoopSeq 2 */
                for (long long int i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_14))));
                    arr_69 [10LL] [i_21] [10LL] [i_23] [10LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_22] [i_23]))));
                    var_47 = ((/* implicit */int) (+(var_9)));
                    var_48 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(arr_14 [i_16] [i_21] [i_22] [i_22] [11ULL] [i_22])))), (arr_52 [i_16])));
                    var_49 = min((((/* implicit */unsigned long long int) (unsigned char)228)), (max((18446744073709551615ULL), (14303102042756136929ULL))));
                }
                for (long long int i_24 = 0; i_24 < 16; i_24 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)116)), (-5971271015885044469LL))))));
                    arr_73 [i_21] [i_21] [i_22] [i_16] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_61 [i_22] [i_21] [i_22]))))));
                }
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) arr_4 [i_16] [i_16])) ? (arr_4 [i_16] [i_16]) : (arr_4 [i_16] [i_16])))));
                /* LoopNest 2 */
                for (unsigned int i_26 = 1; i_26 < 12; i_26 += 3) 
                {
                    for (int i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10000)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29456)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((unsigned short) -992921153)))))) : (16665441583888494198ULL)));
                            var_53 = ((/* implicit */int) 35150012350464ULL);
                        }
                    } 
                } 
                arr_84 [i_16] [i_16] [i_25] = ((/* implicit */int) ((unsigned long long int) var_6));
                var_54 += ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_25] [i_25]))) | (var_9)))));
            }
            arr_85 [i_16] [i_21] [i_21] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -1866241675)) ? (((/* implicit */long long int) 4226975757U)) : (0LL))));
        }
        for (int i_28 = 0; i_28 < 16; i_28 += 3) /* same iter space */
        {
            var_55 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_11))) - (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_38 [i_16] [i_16] [i_28]) : (arr_38 [i_16] [i_16] [i_16]))))));
            /* LoopNest 3 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (long long int i_30 = 1; i_30 < 15; i_30 += 3) 
                {
                    for (long long int i_31 = 0; i_31 < 16; i_31 += 4) 
                    {
                        {
                            var_56 = ((/* implicit */long long int) 1704911234U);
                            var_57 |= ((/* implicit */short) (-((-(arr_68 [i_30 - 1] [i_28] [i_29] [i_30 + 1])))));
                            var_58 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */long long int) ((-215225152) - (arr_15 [i_16])))) : (((var_4) >> (((((/* implicit */int) arr_67 [(_Bool)1] [i_28] [i_28] [(_Bool)1] [i_30] [i_30])) - (55666)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7010604533039162991ULL)) ? (-1649409569) : (((/* implicit */int) (signed char)-1))))) + (arr_83 [i_30 - 1] [i_30 + 1] [i_29] [i_28] [i_31])))));
                        }
                    } 
                } 
            } 
        }
    }
}
