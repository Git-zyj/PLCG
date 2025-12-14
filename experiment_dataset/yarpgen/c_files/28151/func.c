/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28151
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (18446744073709551602ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (min((var_9), (12ULL))))), (((7328643186472547660ULL) + (((/* implicit */unsigned long long int) 4294967294U)))))))));
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
            {
                var_17 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (3660436302268922135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2] [i_2 + 1])))))));
                var_18 = ((/* implicit */unsigned char) var_6);
            }
            for (short i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
            {
                var_19 += ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_8)))) ? (((4294967295U) % (598274540U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3 + 1]))))))) <= ((+(((((/* implicit */_Bool) 3696692755U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29990))) : (3445403493U))))));
                var_20 &= ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
            for (short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
            {
                arr_13 [i_4] [i_1] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-78)) ? (var_6) : (((/* implicit */unsigned long long int) 126976)))) % (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_4 - 1]))))) ? (((/* implicit */unsigned long long int) min((12U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) / (13489077903860199697ULL)))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_10 [i_0] [i_1] [i_4 + 1]) : (arr_10 [i_0] [i_0] [i_4])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_4 - 1])), (arr_12 [i_4] [i_1] [i_0])))) : (max((((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_4 + 1])) + (arr_4 [i_0]))), ((+(var_9)))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_22 &= ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_0] [20U] [i_0] [i_5 - 1] [i_6] [i_4 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115)))))))));
                        arr_18 [i_4] = ((/* implicit */long long int) var_14);
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_23 *= ((/* implicit */long long int) arr_0 [i_7]);
                        var_24 = ((/* implicit */long long int) var_11);
                    }
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        arr_23 [i_0] [i_4] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) max((12U), (2600019105U)));
                        arr_24 [i_4] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) -2964103841984472469LL)) && (((/* implicit */_Bool) (signed char)-36)))))))) ? (((unsigned int) ((int) var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    }
                    var_25 -= ((/* implicit */long long int) arr_16 [i_5 - 1] [i_4 - 1] [i_4 - 1]);
                }
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_29 [i_0] [i_10 + 1] [i_4 - 1] [i_9] [i_10])) ? (((/* implicit */int) arr_29 [i_9] [i_10 - 1] [i_10 - 1] [i_9] [i_10])) : (((/* implicit */int) arr_29 [i_0] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))), (((((/* implicit */_Bool) arr_29 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_2 [i_4 + 1])) : (((/* implicit */int) var_2))))));
                        var_27 = ((/* implicit */int) min((598274541U), (((/* implicit */unsigned int) (_Bool)1))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) ((int) arr_26 [i_0] [i_0] [i_0] [i_4] [i_0] [i_10]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) >> (((((/* implicit */int) (unsigned char)40)) - (21)))))) : (((((/* implicit */_Bool) 1613792881U)) ? (13489077903860199714ULL) : (((/* implicit */unsigned long long int) 2681174415U)))))) : (((/* implicit */unsigned long long int) ((arr_27 [i_0] [i_9] [i_9] [i_9] [i_0] [i_0] [i_0]) >> (((min((var_5), (((/* implicit */long long int) arr_19 [i_0] [i_9] [i_4 + 1] [i_9] [i_9])))) - (3248636508LL)))))))))));
                    }
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_6 [i_0]))));
                    var_30 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 1])) ? (arr_5 [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]))))));
                }
                for (signed char i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    var_31 += ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_0] [i_1] [i_4 + 1] [i_11 + 3]))));
                    arr_32 [i_11 + 1] [i_11 + 1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_0] [i_1] [i_0] [i_11 + 1])) != (((((/* implicit */_Bool) (-(2880826489672025900ULL)))) ? (((/* implicit */int) ((arr_25 [i_4] [i_4] [i_4] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_20 [i_4] [i_11 - 1] [i_11 - 1] [i_11 + 3]))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                {
                    var_32 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (signed char)116))))) ? (((var_9) ^ (((/* implicit */unsigned long long int) arr_3 [i_12 + 1] [i_12 + 3] [i_4 - 1])))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))) : (((((/* implicit */_Bool) 8191U)) ? (883219736156047927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((var_3), (((/* implicit */int) var_7)))))));
                    arr_37 [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_4 + 1])) : (((/* implicit */int) (signed char)121))))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-16)))) : ((-((~(((/* implicit */int) arr_28 [i_0] [i_0] [i_4] [i_4]))))))));
                    arr_42 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)67)))), (var_14)))) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (arr_19 [i_0] [i_4] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
                    var_35 = ((/* implicit */signed char) (((+(var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)-115)))))));
                }
            }
            arr_43 [i_0] = ((/* implicit */unsigned int) var_1);
        }
        for (long long int i_14 = 3; i_14 < 20; i_14 += 2) 
        {
            arr_46 [i_14 + 1] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(signed char)6]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-10572)) : (((/* implicit */int) (_Bool)1))))))));
            var_36 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_19 [(unsigned char)2] [(unsigned char)2] [i_14 - 3] [(unsigned char)2] [i_14 - 2])) ? (arr_19 [i_14 - 1] [(signed char)14] [i_14 - 3] [(signed char)14] [i_14 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14 - 1])))))));
            arr_47 [i_0] [i_0] [i_14 - 1] = ((/* implicit */short) arr_5 [i_0] [i_0]);
            arr_48 [i_14 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)14263)) >= (((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) ((arr_12 [i_14] [i_14] [i_14 - 2]) + (arr_5 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_14])) >> (((((/* implicit */int) var_15)) + (27852)))))) : (var_11))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0]))))) & (((/* implicit */long long int) ((unsigned int) arr_34 [i_14] [i_14] [i_14 - 3] [i_14] [i_14] [i_14]))))))));
            var_37 = ((/* implicit */unsigned short) ((8173U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        var_38 += ((/* implicit */signed char) var_6);
        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_14)))) ? (var_3) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_38 [(signed char)12] [(signed char)12])))))) : (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_7), (arr_35 [i_0] [i_0] [i_0] [i_0]))))))));
        var_40 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)144))));
    }
    for (signed char i_15 = 3; i_15 < 12; i_15 += 2) 
    {
        var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) var_10)) / (min((((/* implicit */long long int) (unsigned short)57343)), (((long long int) var_9))))));
        arr_51 [i_15] = ((/* implicit */short) arr_33 [i_15 - 1] [(unsigned char)0] [(unsigned char)0] [i_15] [i_15] [(unsigned char)0]);
    }
    for (short i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)65408)), (min((arr_7 [i_16] [i_16] [i_16] [i_16]), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_17] [i_17] [i_17])) >> (((/* implicit */int) var_13)))))))));
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6598)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23295))) : (var_11)));
            var_44 = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)7596)))), (((/* implicit */int) (_Bool)1))))) ? (max((2621793117U), (((/* implicit */unsigned int) (unsigned char)37)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))));
        }
        arr_57 [i_16] [i_16] = ((/* implicit */signed char) var_10);
        var_45 = ((/* implicit */signed char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27084))) > (arr_40 [i_16] [i_16] [i_16] [i_16]))) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (7042432420347101713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))))))));
    }
    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((min((((/* implicit */unsigned long long int) var_15)), (var_6))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))) ? (var_3) : (((/* implicit */int) var_4)))))));
    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)117)))))));
    /* LoopSeq 1 */
    for (int i_18 = 2; i_18 < 20; i_18 += 2) 
    {
        var_48 &= ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) (short)7584)) ? (((/* implicit */int) arr_29 [i_18 - 2] [i_18 - 2] [i_18] [i_18] [i_18])) : (((/* implicit */int) var_7)))) >> (((((((/* implicit */_Bool) var_14)) ? (arr_12 [i_18] [i_18 - 2] [i_18]) : (var_10))) - (2775854555U))))));
        var_49 ^= ((/* implicit */signed char) (short)2681);
    }
}
