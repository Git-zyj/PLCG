/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28613
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned long long int) min((-496707305), (((((/* implicit */int) (unsigned char)113)) ^ (((/* implicit */int) (unsigned char)60))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) >> (((((/* implicit */int) (short)32315)) - (32313)))))), (min((var_17), (((/* implicit */unsigned long long int) var_13))))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_3])))) : (arr_4 [i_3])));
        var_20 = ((/* implicit */short) (((-(arr_4 [i_3]))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_3])) + (arr_3 [i_3] [i_3]))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((arr_6 [i_3]) + (arr_6 [i_3])));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_8))));
        var_21 *= arr_2 [i_4] [i_4];
        arr_18 [i_4] [i_4] &= (~(((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_4 [i_4]) : (18446744073709551615ULL))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_29 [i_5] [i_5] [i_5] [(unsigned short)7] [i_5] [i_5] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) ((arr_23 [i_5] [i_5] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) ? ((-(arr_16 [i_9]))) : (((/* implicit */unsigned int) arr_10 [i_5]))));
                                var_23 |= ((/* implicit */unsigned char) max(((~(min((1ULL), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_7 - 1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_9])) > (((/* implicit */int) (unsigned char)113))))), ((+(var_2))))))));
                                arr_31 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_7]), (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned short)17589)) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_21 [9LL])))))))) : (arr_11 [i_5])));
                                var_24 -= ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_23 [i_9] [2U] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [(unsigned short)9]))))))))), (((((/* implicit */_Bool) (-(arr_7 [i_7])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_5])), (arr_30 [i_5] [i_5] [(short)10])))) : (min((((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_8] [i_9 - 1])), (arr_11 [i_5])))))));
                            }
                        } 
                    } 
                    arr_32 [0U] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)0)), (arr_15 [i_5]))), (((/* implicit */long long int) arr_30 [i_6] [i_7 - 1] [i_7 + 2]))))) ? (max((((arr_15 [i_7]) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))))), (((/* implicit */long long int) min((arr_5 [i_7] [i_6] [i_5]), (((/* implicit */unsigned int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_10))));
                                var_26 *= ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (max((arr_27 [i_5] [i_7 - 1] [i_5] [i_10] [i_11]), (arr_28 [i_6] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_11])))));
                                arr_39 [i_7] [i_10] [i_10] [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_27 [i_5] [i_6] [i_7] [i_10] [i_7 - 1]), (((/* implicit */unsigned int) arr_34 [i_5] [i_6] [i_7] [i_11]))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_19 [i_5])), (arr_27 [i_5] [i_6] [i_7] [(unsigned char)4] [i_6])))), (((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5] [i_5] [i_7] [i_5]))))))) : (min((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))));
                            }
                        } 
                    } 
                    arr_40 [i_7] [i_6] [i_7 + 2] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)143))));
                }
            } 
        } 
        var_27 = ((/* implicit */short) min(((-((-(arr_11 [i_5]))))), (((max((((/* implicit */unsigned int) (short)0)), (arr_7 [i_5]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_5])) : (var_5))))))));
    }
    for (unsigned char i_12 = 1; i_12 < 13; i_12 += 2) 
    {
        var_28 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_43 [i_12 + 1] [i_12 + 1]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(var_2))), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_44 [i_12])))), (((/* implicit */int) min((var_12), (((/* implicit */short) arr_44 [i_12 + 1]))))))))));
        var_30 ^= ((((/* implicit */_Bool) (unsigned char)96)) ? (2147483647) : (((/* implicit */int) arr_43 [i_12] [i_12])));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_43 [11U] [i_12 - 1]))));
        arr_45 [i_12] = ((/* implicit */unsigned long long int) var_12);
    }
}
