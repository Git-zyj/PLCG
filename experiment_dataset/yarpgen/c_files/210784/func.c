/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210784
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
    var_12 = ((/* implicit */_Bool) ((int) var_10));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = max((var_8), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_2])));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0]))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1608302718U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : ((-(7428090165133470219ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (max((7428090165133470211ULL), (((/* implicit */unsigned long long int) 1173136103U))))));
                    arr_9 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) 18446744073709551589ULL))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [12U] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [(_Bool)1] [(_Bool)1] [i_2]));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            var_16 = ((/* implicit */short) arr_0 [i_0]);
            arr_12 [i_0] [i_0] = arr_5 [i_0] [i_0] [i_3];
            arr_13 [i_0] [i_0] |= ((/* implicit */_Bool) arr_2 [i_0] [i_3]);
        }
        for (signed char i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), (var_3)))), (min((((/* implicit */long long int) (unsigned char)194)), (-1944304670757864286LL))))), (((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_17 [i_0] [i_0])))))))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (_Bool)1))));
            }
            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_15 [i_0] [i_4] [14ULL])), (((unsigned short) max((var_7), (arr_1 [i_8]))))));
                            var_19 = (unsigned short)65525;
                        }
                    } 
                } 
                arr_27 [i_0] [i_0] [i_4] [i_6 - 2] |= ((/* implicit */signed char) arr_5 [i_0] [i_4] [i_6]);
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_30 [i_9] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((arr_25 [i_9] [i_9] [(short)5] [i_9] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_9] [i_0] [i_0] [18LL])))))))) << (((((/* implicit */int) var_8)) - (5827)))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_4] [i_4]))));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (-5659596189807622545LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58623)))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (arr_16 [i_0])));
                    }
                    arr_37 [i_10] [i_6] [i_0] [i_0] [i_0] = ((max((-9219367281176537448LL), (((/* implicit */long long int) 285192194U)))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-2)))));
                }
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4 - 2] [i_0] [i_4])) ? ((-(arr_22 [i_4] [i_4] [i_4 - 2] [i_4 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_4 - 3] [i_4 - 3] [i_4 - 2]), (arr_3 [(unsigned short)14] [i_4] [i_4 - 2])))))));
            }
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_24 = ((((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_4] [i_12] [i_4])) ? (((long long int) arr_38 [i_0] [i_4] [i_12])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))));
                var_25 += ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_0] [i_4] [i_12])), (((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_11 [i_12] [i_0])))) ? (((/* implicit */int) min((arr_18 [i_0] [i_0] [i_12]), (arr_11 [i_0] [i_0])))) : (((/* implicit */int) arr_10 [i_0] [i_4] [i_12]))))));
            }
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((short)-30685), (arr_18 [i_4] [i_4] [i_4 + 1]))))));
                    var_28 = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) arr_43 [i_14] [i_4] [i_4] [i_0])) ? (arr_25 [i_0] [i_4] [16ULL] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_13] [i_14]))))))));
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_8))), ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)34534))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_4] [i_13] [i_4] [i_0])));
                    var_30 = ((/* implicit */short) var_9);
                }
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((unsigned char) -6377007150569790613LL)))));
            }
            /* vectorizable */
            for (long long int i_15 = 1; i_15 < 20; i_15 += 4) 
            {
                var_32 = ((/* implicit */long long int) arr_4 [i_4]);
                var_33 ^= ((/* implicit */short) arr_6 [i_4] [i_4 - 3] [i_4 - 2]);
            }
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-31)) % (((/* implicit */int) (_Bool)1)))))));
            arr_49 [(unsigned char)17] [i_4 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_0] [i_4] [i_4] [i_4 - 3] [i_0] [i_0] [i_4 - 3]))))) ? (((/* implicit */long long int) var_10)) : (arr_45 [i_0] [i_0] [i_0] [(signed char)7] [i_0] [17ULL])));
        }
        for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            var_35 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_16] [(_Bool)1]))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) arr_16 [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) * (((/* implicit */int) arr_4 [i_0])))))));
            /* LoopSeq 2 */
            for (unsigned char i_17 = 1; i_17 < 18; i_17 += 2) /* same iter space */
            {
                arr_55 [i_0] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8559206095774804692LL)) || (((/* implicit */_Bool) 237101575))));
                arr_56 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-237101566)))) ? (max((((/* implicit */long long int) ((arr_39 [(_Bool)1] [i_16] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))), (((long long int) var_8)))) : (((long long int) min((arr_43 [i_17] [i_16] [i_0] [i_0]), (((/* implicit */short) arr_15 [i_16] [13LL] [i_16])))))));
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) arr_23 [i_16]))));
                arr_57 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [(unsigned char)7] [i_16] [i_17 - 1] [19]))))), (arr_20 [i_17] [i_17 + 2] [i_17 + 4] [i_17])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_11))))) ? (((11018653908576081385ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_53 [i_0] [i_16] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned char i_18 = 1; i_18 < 18; i_18 += 2) /* same iter space */
            {
                arr_61 [i_0] [i_0] [i_16] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-9223372036854775800LL), (((/* implicit */long long int) (unsigned char)123))))) ? (((arr_54 [i_0] [(short)1] [i_18]) ? (((/* implicit */int) ((short) (unsigned short)8289))) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_19 [i_18 + 3] [i_18] [i_16] [(short)3])))))))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        {
                            arr_68 [i_16] = min((((/* implicit */long long int) arr_63 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])), (arr_39 [i_16] [i_0] [i_18] [i_16]));
                            var_38 = ((/* implicit */unsigned short) min(((-2147483647 - 1)), ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))));
                            arr_69 [i_0] [i_16] [i_0] [i_19] [i_20] = ((/* implicit */unsigned short) max(((~(9219367281176537452LL))), (((/* implicit */long long int) (short)(-32767 - 1)))));
                        }
                    } 
                } 
                arr_70 [i_0] [i_16] [i_16] [i_0] = ((/* implicit */long long int) var_8);
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) 
    {
        arr_73 [i_21] [i_21] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_39 [i_21] [i_21] [i_21] [(_Bool)1])) ? (arr_24 [i_21] [(short)0] [i_21] [i_21] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_21]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
        /* LoopSeq 3 */
        for (int i_22 = 1; i_22 < 9; i_22 += 4) /* same iter space */
        {
            var_39 = arr_43 [i_21] [21] [i_22] [i_22];
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_3))))))));
            var_41 = ((/* implicit */short) ((((/* implicit */long long int) 0U)) | (-8694498156226598151LL)));
            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((int) arr_20 [i_22 - 1] [i_22] [i_22] [i_21])))));
        }
        for (int i_23 = 1; i_23 < 9; i_23 += 4) /* same iter space */
        {
            var_43 = ((_Bool) (signed char)-1);
            arr_79 [i_23] = arr_34 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23];
        }
        for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 4) 
        {
            arr_83 [i_21] [i_24] [i_24] = ((/* implicit */short) (+(arr_52 [i_21] [i_24 + 1])));
            arr_84 [i_21] [i_21] [i_21] &= var_5;
            var_44 = ((/* implicit */unsigned short) (signed char)-81);
            var_45 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)113))) ? (arr_80 [i_21] [i_24]) : (((((/* implicit */_Bool) arr_63 [i_21] [i_21] [i_21] [i_24] [(unsigned short)10] [i_24])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_51 [i_21] [i_21]))))));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_24 - 1] [i_21])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)246)))))));
        }
        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7019)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_6 [i_21] [i_21] [i_21])))))));
    }
}
