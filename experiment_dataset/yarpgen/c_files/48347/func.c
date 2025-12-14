/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48347
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
    var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (unsigned short)26036)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)9981)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14938)))));
                        arr_9 [i_0] [i_1] [i_3 + 1] = arr_0 [i_0];
                        var_13 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)13] [(_Bool)1] [(unsigned char)13] [i_3])) ? (arr_1 [i_3]) : (arr_1 [i_1])))));
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_3 + 3] [i_3 - 1] [i_3] [i_3])) ^ (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 2] [i_3] [(unsigned char)9])))))));
                        var_15 = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61123)) || (((/* implicit */_Bool) 9666758120911107856ULL)))))) - (var_9))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            arr_16 [0U] [i_4] = ((/* implicit */unsigned long long int) (signed char)101);
            var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) max(((unsigned short)39469), (((/* implicit */unsigned short) (short)21094))))) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))))), (min((min((343048071U), (((/* implicit */unsigned int) arr_14 [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5])))))))));
            arr_17 [(short)6] [i_4] [(short)6] &= ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)112)), ((unsigned short)4412)));
            arr_18 [i_4] [0ULL] [i_5] = ((/* implicit */unsigned short) 343048055U);
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((short) ((min((17864963793661966374ULL), (((/* implicit */unsigned long long int) (unsigned char)2)))) * (((/* implicit */unsigned long long int) var_9))))))));
            arr_21 [(unsigned short)7] [i_6] [i_6] |= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned short)50597)), (17880742575685367467ULL))), (11590567839619205711ULL)));
            var_19 = ((/* implicit */int) var_6);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_27 [i_4] [i_4] = ((/* implicit */unsigned char) var_1);
                        var_20 = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) 3090698341U)), (11590567839619205707ULL))), (((/* implicit */unsigned long long int) arr_26 [(unsigned char)6] [i_7] [i_6] [i_4])))), (min((((/* implicit */unsigned long long int) arr_10 [i_6])), (arr_11 [i_8] [1ULL])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                arr_31 [i_4] [8LL] [i_9] = ((/* implicit */unsigned int) arr_0 [i_6]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_21 = ((((/* implicit */_Bool) arr_28 [i_4])) ? (arr_3 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6341))));
                    var_22 = ((/* implicit */unsigned int) ((((2726518423U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_6] [i_9] [i_10] [i_10] [i_9])))));
                    arr_35 [i_4] [(signed char)9] [i_4] = ((/* implicit */signed char) ((arr_22 [(signed char)1] [(unsigned short)12] [i_9]) ? (arr_11 [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)65535)))))));
                    arr_36 [i_4] [8] [(_Bool)0] [i_10] [i_9] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_10])) * (((/* implicit */int) (unsigned short)14938))));
                }
            }
        }
        var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (490635246342924035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10301)))));
        arr_37 [2ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_4] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3161030917979692884ULL)) ? (((/* implicit */unsigned long long int) -853502378)) : (2410798521242036342ULL)))) ? (min((arr_3 [i_4]), (((/* implicit */unsigned long long int) arr_25 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_41 [(_Bool)1] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_11])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_4] [7LL])))))));
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_24 = ((/* implicit */signed char) arr_26 [0ULL] [i_11] [i_4] [i_4]);
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_4 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_4] [i_4] [i_4]))) : (var_3))))));
                var_26 = ((/* implicit */unsigned long long int) var_4);
                arr_44 [i_12] = ((/* implicit */long long int) arr_6 [(short)17]);
            }
            for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4412)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))));
                        arr_53 [i_11] [i_13] [i_13 - 2] [i_14] [i_15 - 1] = ((/* implicit */short) arr_49 [i_14] [i_11] [i_11] [(_Bool)1]);
                    }
                    for (long long int i_16 = 1; i_16 < 13; i_16 += 1) 
                    {
                        arr_56 [i_16] [9U] [i_14] [i_13] [i_13] [(short)6] [i_4] = ((/* implicit */unsigned int) 4217660421448422941ULL);
                        arr_57 [i_16] [i_14] [i_13 + 1] [i_13] [i_11] [i_4] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4]))))) == ((~(((/* implicit */int) (short)-1)))));
                    }
                    var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_38 [i_13 - 2])) : (((/* implicit */int) arr_38 [i_13 - 1]))));
                    arr_58 [i_4] [4U] [i_13 - 1] [i_14] |= (!(((/* implicit */_Bool) arr_50 [i_14] [i_11] [7LL] [i_13 - 1])));
                }
                for (short i_17 = 2; i_17 < 11; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_47 [i_17 + 3] [i_13 + 1]))));
                        arr_65 [(signed char)0] [i_11] [i_13] [i_17 - 1] [i_18] &= ((/* implicit */short) ((arr_55 [i_13 + 1]) * (((/* implicit */unsigned long long int) 3301374199U))));
                        var_30 = ((/* implicit */unsigned char) var_3);
                    }
                    var_31 = ((/* implicit */long long int) (_Bool)0);
                }
                var_32 = ((/* implicit */unsigned short) arr_52 [i_11]);
            }
        }
    }
    var_33 = ((/* implicit */int) var_0);
}
