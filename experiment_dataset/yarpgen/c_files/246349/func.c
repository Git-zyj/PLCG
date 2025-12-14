/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246349
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_1 [i_1 + 4])))) ? (((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)65529))))) : (((long long int) var_2))));
                            var_20 = ((/* implicit */unsigned short) (~(arr_9 [i_1] [i_1] [i_1] [(_Bool)1] [i_0 + 1] [i_1])));
                        }
                    } 
                } 
                arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4268240434U)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)7))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))));
                var_21 = ((/* implicit */unsigned int) (signed char)120);
                var_22 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_23 = var_10;
    /* LoopSeq 2 */
    for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_4]))))), ((+(arr_11 [i_4] [18U]))))), (min((arr_11 [i_4 - 2] [i_4]), (((/* implicit */unsigned int) (signed char)-118)))))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_2))));
        arr_14 [i_4] = ((/* implicit */unsigned short) arr_11 [i_4 + 1] [i_4 + 1]);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) (-(-239779441)));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
            {
                arr_20 [i_5] [i_5] [i_6] = ((/* implicit */short) arr_8 [i_6] [i_5] [i_6] [(_Bool)1]);
                arr_21 [i_4 - 2] [i_5] [i_5] [i_5] = ((/* implicit */int) (~((-(((var_13) / (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1060661145)) & (min((min((((/* implicit */unsigned int) arr_7 [i_7] [i_5] [i_7])), (var_10))), (1767366404U)))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_4] [(short)4] [(short)4] [(short)4] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_4] [(short)2] [i_4 - 3] [i_7] [i_8] [4LL]))))) : (((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) arr_27 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [(unsigned char)8])))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (unsigned short)7))));
            }
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
            {
                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (-(arr_16 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_30 [i_4] [i_5] [i_9] [(signed char)18])) ? (var_13) : (((/* implicit */long long int) arr_28 [i_5] [i_5] [i_9] [3ULL]))))))));
                var_29 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_0 [i_5]))));
            }
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_4] [i_5] [i_5] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (12U))))))))))));
                            arr_40 [i_4] [i_5] [i_10] [i_5] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(1639778219))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_4] [i_5] [8U] [(unsigned char)5] [i_4] [8U] [i_12]))) : (((((/* implicit */_Bool) 498797004U)) ? (465108182U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))))))));
                            var_32 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_36 [i_4] [i_5] [i_11 + 1] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_36 [i_11] [i_5] [i_11 - 1] [i_11] [i_5])) : (((/* implicit */int) arr_36 [i_4] [i_4] [i_11 + 1] [i_11] [i_4])))), ((~(((/* implicit */int) var_5))))));
                            var_33 = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
                var_34 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)15059))));
            }
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30510)) << (12U)))) ? (((((((/* implicit */int) arr_13 [i_4])) + (2147483647))) >> (((((/* implicit */int) arr_6 [(_Bool)1] [i_4 + 1] [i_4 - 1])) - (114))))) : (((/* implicit */int) min((arr_13 [i_4]), (arr_13 [17ULL]))))));
        }
        for (short i_13 = 1; i_13 < 16; i_13 += 4) 
        {
            var_36 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_42 [i_4 - 2] [i_13 + 3] [i_13 + 1])) ^ (((/* implicit */int) arr_39 [i_4 - 2] [i_4 - 1] [3U] [1U] [i_13 - 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 1; i_14 < 15; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    {
                        var_37 = ((/* implicit */int) arr_36 [i_4] [i_13] [i_4] [i_13] [i_15]);
                        var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)511)))))));
                        arr_50 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [i_14 + 2] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_4] [i_13] [i_14 - 1] [i_13] [i_15]))) : (var_0)))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (var_13)))) ? (((long long int) (unsigned short)61880)) : (((/* implicit */long long int) var_16))))));
                        var_39 = ((/* implicit */signed char) arr_1 [i_13 + 1]);
                        arr_51 [(unsigned short)14] [i_13] [i_13 - 1] [i_13] [(unsigned short)14] = ((/* implicit */short) 1639778219);
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            arr_55 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (unsigned short)35036);
            arr_56 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2136291688), (-1108393660)))) ? (((/* implicit */int) arr_47 [(short)1] [(short)1] [i_16] [i_16])) : (((/* implicit */int) ((-2174952027956008277LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 2; i_17 < 17; i_17 += 2) 
            {
                var_40 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_43 [i_4 - 2] [i_17 - 1])), (((unsigned int) arr_5 [i_4 - 1] [i_17 - 1]))));
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    for (unsigned short i_19 = 3; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_45 [i_4] [i_17 + 1] [i_17])) + (2147483647))) << (((((/* implicit */_Bool) (unsigned short)5404)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))))) / ((-((-(((/* implicit */int) var_6))))))));
                            arr_64 [(short)1] [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 239779441)) || (((/* implicit */_Bool) max((min((var_7), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) var_3)))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(16777215LL)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_14))))))));
                arr_65 [i_4] [i_16] [(signed char)7] = ((/* implicit */short) (-(arr_2 [i_17])));
            }
            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                arr_69 [i_4 + 1] |= ((/* implicit */int) arr_4 [i_4] [11LL]);
                arr_70 [i_4] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65529), (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)164)))))) : (max((var_7), (((/* implicit */long long int) var_0))))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) arr_25 [i_16] [i_20] [i_4 - 2] [i_16] [i_16] [i_4 - 2])) : ((+(((/* implicit */int) var_3)))))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) 
            {
                var_43 = (!(((/* implicit */_Bool) 886266153506461675LL)));
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_71 [i_4] [i_4] [i_16] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_37 [i_4 - 2] [0ULL] [i_16] [i_16] [i_16]))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_39 [i_4 - 1] [i_16] [(signed char)3] [i_21] [i_21])) : (((/* implicit */int) var_2)))))))) ? (min((15400931264099396210ULL), (((/* implicit */unsigned long long int) 498797018U)))) : (((/* implicit */unsigned long long int) max((arr_41 [i_21]), (((/* implicit */unsigned int) var_16)))))));
                /* LoopSeq 3 */
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 1) 
                {
                    var_45 = ((/* implicit */_Bool) var_9);
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_61 [i_4] [(unsigned char)11] [i_21] [(signed char)5] [i_22])))) ? (((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) arr_66 [i_4 + 1]))))) : (((/* implicit */int) var_17)))))));
                }
                for (unsigned short i_23 = 2; i_23 < 17; i_23 += 2) 
                {
                    var_47 *= ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_46 [i_4]))))));
                    var_48 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) min(((signed char)-119), (((/* implicit */signed char) (_Bool)1))))), ((short)-1)))) * (((((/* implicit */_Bool) ((signed char) arr_76 [i_23] [(signed char)15] [i_21] [i_16] [i_4]))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-1)))) : (((arr_44 [i_21]) - (((/* implicit */int) var_2))))))));
                }
                for (unsigned short i_24 = 0; i_24 < 19; i_24 += 3) 
                {
                    arr_80 [i_24] [i_24] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) arr_25 [i_4 - 2] [i_4 - 2] [i_4] [10ULL] [(_Bool)1] [i_4])), (var_0)))));
                    var_49 = ((/* implicit */unsigned int) (!(((_Bool) arr_68 [i_4 - 1] [i_21] [i_24]))));
                    var_50 = ((/* implicit */short) 123466835U);
                    arr_81 [i_24] [i_24] [i_21] [i_16] [i_24] = ((/* implicit */_Bool) ((int) var_11));
                }
            }
            /* LoopNest 3 */
            for (long long int i_25 = 1; i_25 < 17; i_25 += 3) 
            {
                for (short i_26 = 0; i_26 < 19; i_26 += 2) 
                {
                    for (unsigned char i_27 = 0; i_27 < 19; i_27 += 3) 
                    {
                        {
                            var_51 = ((/* implicit */_Bool) ((var_3) ? ((~(((/* implicit */int) (unsigned short)2735)))) : (((/* implicit */int) arr_66 [i_4]))));
                            arr_90 [i_27] [i_16] [i_27] [i_27] = ((/* implicit */int) arr_66 [14U]);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_28 = 0; i_28 < 12; i_28 += 4) 
    {
        arr_95 [i_28] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-21))))), (min((3099548902U), (((/* implicit */unsigned int) (short)-1))))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_23 [i_28] [i_28] [i_28] [7]) : (arr_23 [i_28] [i_28] [16LL] [i_28]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_28]))))) ? (arr_11 [i_28] [i_28]) : (min((313324236U), (((/* implicit */unsigned int) var_9))))))));
        arr_96 [i_28] = ((/* implicit */short) (~(((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) | ((~(var_18)))))));
        arr_97 [i_28] = ((/* implicit */unsigned char) arr_0 [(_Bool)1]);
    }
    var_52 = ((/* implicit */signed char) var_7);
}
