/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211454
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(min((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (11263422579055631876ULL))), (((/* implicit */unsigned long long int) var_14))))));
            arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)24))))) ? (((/* implicit */long long int) arr_4 [i_2] [i_2] [i_0])) : (arr_1 [i_2] [i_0])));
            arr_11 [i_0] [i_0] |= (unsigned short)0;
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)5708)))) <= (((/* implicit */int) ((_Bool) 3533330400U))))))));
            arr_14 [3ULL] [3ULL] = ((-1LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48828))) : (arr_12 [i_3])))));
            arr_15 [i_0] [i_3] [i_3] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0]))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_23 [i_0] [i_3] [2U] [i_5] |= (unsigned short)16132;
                        arr_24 [i_5] [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) -1)) : (28LL))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30311)))))));
                        arr_25 [i_5] [i_4] [(_Bool)1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [(unsigned short)2] [i_3] [i_4] [i_5 - 1]))));
                    }
                } 
            } 
        }
        var_16 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
        arr_26 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))) | (arr_21 [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) max((((signed char) arr_22 [i_0] [i_0])), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)31)))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 1185955086)) : (4521257210510088544ULL))) : (arr_3 [i_0] [i_0] [i_6])))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                var_18 = min((((/* implicit */long long int) ((_Bool) arr_19 [i_7 - 2] [9U] [(short)0] [i_7 - 2]))), ((-(arr_21 [i_7 - 2] [i_7] [i_7 - 1] [i_7 - 2]))));
                arr_32 [(unsigned short)10] [i_7 - 2] [i_6] [i_0] = ((/* implicit */unsigned char) var_4);
                arr_33 [i_7] [i_6] [i_0] = ((/* implicit */unsigned int) 599231682);
                arr_34 [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(4294967295U)))) * (((arr_21 [i_0] [i_6] [i_0] [i_0]) / (9223372036854775807LL)))))) ? (arr_9 [i_6] [i_7]) : (((((/* implicit */_Bool) arr_3 [i_6] [i_7 + 1] [i_7])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)30311))))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_7]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_6] [i_7]))))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_37 [i_0] [i_7 - 1] [i_7 - 1] [i_8]), (((/* implicit */short) var_5)))))));
                    var_20 -= ((/* implicit */signed char) 954114252);
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (25U)))) - (arr_3 [i_0] [i_8] [i_9]))))));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)54)) : (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8] [8U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967270U))))))) : ((+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_7]))))))));
                        arr_41 [i_0] [i_6] [i_7 - 2] [i_7 - 2] [i_9] [i_7 - 2] = ((/* implicit */unsigned char) ((arr_30 [i_9] [i_7 - 2] [i_6] [i_6]) - (min((max((5417957584215956127ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_13)))))))));
                    }
                    arr_42 [i_0] [i_6] [i_7 + 1] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1)) : (2147483621))), (((((((/* implicit */int) arr_36 [i_8] [i_7] [i_6] [i_0])) & (((/* implicit */int) var_5)))) & (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 4) 
            {
                arr_45 [i_10] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_39 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 3] [i_10] [i_6]), (arr_39 [i_10] [i_10 - 2] [i_10 + 2] [i_10 + 1] [i_10] [i_10]))))));
                arr_46 [i_0] [i_6] [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_13)))) - (arr_4 [i_10 + 2] [i_10 - 1] [i_10 - 3]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30311)))))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) arr_44 [(signed char)9])), (arr_28 [i_11] [i_0] [i_0])))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [5U] [i_0] [i_11] [i_11]))))))))));
            arr_49 [i_11] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)16133)) ? (((/* implicit */int) var_9)) : (arr_35 [i_0] [i_0] [i_0] [i_11])))))));
        }
        arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((max((((/* implicit */unsigned long long int) arr_18 [i_0])), (arr_30 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))));
    }
    for (signed char i_12 = 2; i_12 < 9; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(min(((!(((/* implicit */_Bool) (unsigned char)82)))), ((!(((/* implicit */_Bool) var_9)))))))))));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)47275), (((/* implicit */unsigned short) (unsigned char)43))))) ? (max((((/* implicit */unsigned long long int) arr_35 [i_12 - 2] [(short)3] [i_12 - 1] [i_13])), (((4624275000603849349ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21927))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21922))) : (2700928172U))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) > (722642462U)))))))));
                arr_58 [i_14] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_12 - 2] [i_13] [i_13])) ? ((~(((/* implicit */int) arr_56 [9] [i_14])))) : (((/* implicit */int) var_3))))) ? (min((min((-1LL), (((/* implicit */long long int) arr_55 [i_12 + 2] [(unsigned char)7] [i_14])))), (((long long int) arr_51 [i_12 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) var_6))))), (arr_17 [i_12] [i_13] [i_14])))) & (min((arr_2 [i_12 + 2]), (((/* implicit */unsigned long long int) var_6))))));
            }
            var_28 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) + (((((/* implicit */_Bool) 2147483622)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1594039123U)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_12 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_28 [i_12 + 2] [i_12 + 2] [i_13]) : (((/* implicit */long long int) 1)))))))))));
            arr_59 [i_12] [i_12] [i_13] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (((arr_12 [i_12]) * (4216029926U))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_13] [i_13] [i_13] [i_12 + 1] [i_12 + 1])))))));
        }
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            arr_63 [i_15] = ((/* implicit */unsigned char) max((((arr_61 [i_15] [i_12] [i_15]) + (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_13))));
            var_29 ^= ((/* implicit */_Bool) var_3);
        }
        arr_64 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_12] [i_12])) ? (((/* implicit */int) ((min((1478084734U), (((/* implicit */unsigned int) -1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-15215)))))) : ((+(((/* implicit */int) arr_37 [i_12 - 2] [i_12 + 1] [i_12 + 1] [i_12 + 1]))))));
    }
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_6))));
}
