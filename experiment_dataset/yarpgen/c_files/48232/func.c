/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48232
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)1]))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_1 [i_0])))))))))));
        arr_2 [i_0] = (~(var_0));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_0 [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)57153))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_10)))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1]))))))) ? (max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))) : (arr_0 [i_1])));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((/* implicit */int) arr_1 [i_1])) : (((arr_1 [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (arr_6 [5U]))))))));
        var_14 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) - (0LL)))) ? (var_7) : (arr_0 [i_1])));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [(unsigned char)5] [i_1])), (max((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_10))))), (arr_0 [i_1])))));
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_16 = var_9;
            var_17 -= ((/* implicit */unsigned char) arr_5 [i_1] [i_2]);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) (!(arr_12 [i_3 + 3] [i_2])))))) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [(unsigned char)4])) : (((/* implicit */int) arr_8 [i_1])))) == (((/* implicit */int) arr_4 [i_1] [i_2])))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (1603089550U) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2]))))) + (arr_6 [i_3]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((arr_15 [i_3 + 1]) * (arr_15 [i_3 + 2]))) / (arr_15 [i_3 + 3])));
                    var_21 = ((/* implicit */signed char) arr_1 [i_3 - 1]);
                }
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) (short)-32757);
                arr_20 [(unsigned short)3] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_5] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_2])))) > (((/* implicit */int) ((short) arr_9 [i_1] [i_1])))));
                var_23 &= ((/* implicit */short) ((((((/* implicit */unsigned int) -263689157)) | (11U))) * (((/* implicit */unsigned int) max((arr_18 [i_1] [i_1] [(unsigned char)7]), (arr_18 [(unsigned char)8] [i_5] [(unsigned char)8]))))));
            }
        }
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_24 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_16 [i_7])))) <= (((/* implicit */int) ((_Bool) var_11)))));
                arr_25 [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (~(((/* implicit */int) arr_19 [i_1])))))) & (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (unsigned char)110)), (arr_0 [i_7])))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_6])) / (arr_18 [(unsigned short)6] [i_6] [i_6])))) || (((/* implicit */_Bool) arr_24 [(unsigned short)10] [i_6] [i_6] [(_Bool)1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)132)))))))) : (((((/* implicit */_Bool) ((unsigned char) (short)-32757))) ? (((((/* implicit */_Bool) arr_13 [i_7] [i_6] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_6] [i_7] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1]))))))))));
                var_26 = ((/* implicit */unsigned short) ((((min((arr_6 [i_1]), (((/* implicit */int) var_1)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1])))) - (232)))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_27 = ((/* implicit */short) ((((var_11) && ((!(((/* implicit */_Bool) arr_9 [i_1] [i_8])))))) || (((/* implicit */_Bool) (signed char)57))));
                arr_28 [i_1] [i_6] [i_1] [i_6] = ((/* implicit */int) arr_0 [i_8]);
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_28 = ((/* implicit */long long int) arr_23 [i_1] [(short)2] [(unsigned short)1] [i_9]);
                arr_32 [i_6] [(unsigned short)8] [(unsigned short)8] [3] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_9] [(short)2]))));
            }
            var_29 += ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_39 [i_1] [i_10] [i_11] |= ((/* implicit */unsigned short) arr_15 [i_1]);
                        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) != (((/* implicit */int) (unsigned short)42443)))))));
                    }
                } 
            } 
            arr_40 [i_1] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_19 [i_1]), (arr_19 [i_1])))), (((unsigned long long int) arr_19 [i_6]))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_37 [i_1] [(unsigned short)4] [(unsigned short)4] [i_1] [i_1]))));
        }
        for (short i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_32 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_6))))));
            arr_43 [(unsigned char)6] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_1] [i_1] [i_1] [i_12])), (arr_9 [(unsigned char)1] [i_12])))) <= (((/* implicit */int) min((arr_24 [i_1] [i_1] [(unsigned char)5] [i_12]), (((/* implicit */unsigned short) (unsigned char)29))))))), (arr_12 [i_1] [i_12])));
        }
        for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)204)), (var_3)))) + (((arr_11 [i_1]) ? (((/* implicit */int) (unsigned char)128)) : (((((/* implicit */_Bool) arr_18 [i_1] [6LL] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_14] [(unsigned char)1])) : (((/* implicit */int) var_2)))))))))));
                var_34 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    arr_51 [10U] [10U] [i_15] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_45 [2] [i_13 + 1])))) / (((/* implicit */int) var_4))));
                    arr_52 [i_15] [(_Bool)1] [i_1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(unsigned char)5] [i_13] [4U] [i_13 - 1] [(unsigned char)3])) ? (((/* implicit */int) (unsigned char)255)) : (arr_18 [i_13 - 2] [i_13] [(_Bool)1])))) ? (((/* implicit */long long int) 3485467965U)) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_15])) ? (var_8) : (((/* implicit */int) var_4))))), (-9223372036854775798LL)))));
                    var_35 -= ((/* implicit */_Bool) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_8 [i_13 - 1]))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) == (((/* implicit */int) arr_12 [i_13] [i_14]))))) != (((((/* implicit */int) arr_49 [i_14] [i_14] [i_13 + 1] [i_13] [i_13] [i_13])) / (((/* implicit */int) arr_9 [i_13] [i_13 - 1])))))))));
                    var_37 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_31 [i_13 - 2] [i_13 - 2] [i_13])))));
                    arr_56 [i_1] [i_13 - 1] [i_13 - 1] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_13 + 1] [i_13 - 1])) | (((/* implicit */int) arr_4 [i_13 - 2] [i_13 - 2])))) >= (((/* implicit */int) arr_10 [i_14] [i_14]))));
                }
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) (((((+(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) arr_50 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13 + 1])))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_37 [i_1] [i_13] [(_Bool)1] [i_17] [i_17])) <= (((/* implicit */int) var_4))))), (((((/* implicit */int) arr_33 [i_1])) / (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_13] [i_14] [i_17])))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) arr_58 [i_13] [(short)9] [i_13 - 3]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_61 [8U] [i_13] [(_Bool)1] [i_13] [i_13] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_17] [i_14] [i_13 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_17])))) : ((+(arr_59 [i_1] [i_13] [i_14] [i_17] [i_1]))))));
                        var_39 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [2U] [i_13 + 1] [2U]))));
                        var_40 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)208))));
                        var_41 |= ((/* implicit */long long int) ((((arr_34 [i_14] [i_14] [i_13 - 1]) ? (((/* implicit */int) arr_34 [0ULL] [0ULL] [i_13 - 1])) : (((/* implicit */int) arr_34 [i_1] [i_1] [i_13 - 1])))) >> (((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)0))) <= (((/* implicit */int) (unsigned char)118)))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_12 [i_13] [(unsigned short)2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_13])) && (((/* implicit */_Bool) var_9)))))))));
                        var_43 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_1] [i_13] [i_13] [i_19]))))))))) & ((-(max((((/* implicit */unsigned int) (unsigned short)60642)), (arr_63 [i_14] [(unsigned short)9]))))));
                        var_44 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1] [i_13]))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) arr_11 [i_17]))));
                        arr_65 [i_1] = ((/* implicit */unsigned char) (-(arr_29 [i_1] [i_1])));
                    }
                }
                var_45 *= ((/* implicit */unsigned short) max((arr_29 [i_13 - 3] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) 4294967284U)))))));
            }
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                arr_68 [i_20] [i_13 - 3] [i_1] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_1] [i_13] [i_20] [i_1])) : (var_8))), (((/* implicit */int) arr_47 [i_20] [i_1] [i_20] [i_1]))))));
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_1] [(_Bool)1] [(_Bool)1] [i_13 - 1] [(signed char)5]))))) << (((((/* implicit */int) arr_31 [i_1] [i_1] [i_1])) - (28492))))))));
            }
            var_47 = ((/* implicit */unsigned char) arr_58 [9] [9] [(unsigned char)8]);
            /* LoopNest 3 */
            for (long long int i_21 = 1; i_21 < 7; i_21 += 2) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    for (unsigned char i_23 = 3; i_23 < 9; i_23 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_69 [i_1] [i_23] [i_21])) >= (((/* implicit */int) ((short) arr_64 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1]))))) | (((/* implicit */int) var_6))))));
                            var_49 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_55 [i_21] [i_21] [i_21] [4U] [i_21] [i_21 - 1]) && (((/* implicit */_Bool) arr_76 [(short)4] [i_13] [i_21 - 1] [i_21] [i_23])))))));
                            arr_79 [i_1] [i_1] [i_1] [i_21] [6LL] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) arr_1 [i_22])))), (((((/* implicit */int) arr_1 [i_13 - 2])) & (((/* implicit */int) arr_1 [i_1]))))));
                            var_50 = ((/* implicit */unsigned short) arr_33 [i_1]);
                            arr_80 [i_1] [i_1] [i_1] [i_21] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_22 [i_21 + 2] [i_21 + 2] [i_21])));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_24 = 0; i_24 < 11; i_24 += 2) /* same iter space */
    {
        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_26 [4U] [i_24] [i_24])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_24] [3] [i_24]))))))))));
        arr_83 [(signed char)3] = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)107)), (arr_8 [i_24])))) - (((/* implicit */int) arr_50 [i_24] [(_Bool)1] [i_24] [i_24] [i_24]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) arr_24 [i_24] [i_24] [i_24] [i_24]))) : (((/* implicit */int) (short)-27678)))) : (((/* implicit */int) ((unsigned char) ((arr_12 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) arr_26 [i_24] [i_24] [i_24])) : (((/* implicit */int) (unsigned char)128)))))));
    }
    var_52 = ((/* implicit */unsigned char) var_6);
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)13291)))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_5)))))))));
}
