/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53398
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */short) arr_2 [i_0]);
        arr_3 [i_0] = arr_1 [i_0 - 2];
    }
    for (int i_1 = 4; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) var_16))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)99))))))) : ((~((~(-4272407047941276401LL))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            arr_10 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) ((min((arr_0 [i_1]), (arr_0 [i_1]))) & ((~(((/* implicit */int) (signed char)30))))));
            arr_11 [i_1] [i_2] = ((/* implicit */signed char) arr_6 [i_1]);
            arr_12 [i_2] [i_2 + 2] [i_1] = max((((((/* implicit */_Bool) ((signed char) var_18))) ? (((/* implicit */unsigned long long int) var_16)) : ((+(var_2))))), (((/* implicit */unsigned long long int) var_18)));
        }
        for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 4; i_5 < 9; i_5 += 3) 
                {
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_16 [i_1])))), (((/* implicit */int) arr_16 [i_1]))));
                    var_20 = ((/* implicit */unsigned int) ((((arr_4 [i_5 + 1] [i_1 - 4]) ? (((/* implicit */int) arr_18 [i_1] [i_3 + 2] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_3 - 3] [i_1] [i_5 - 3])))) < (((((/* implicit */_Bool) min((arr_17 [(unsigned char)1] [i_3 + 2] [i_1]), (((/* implicit */unsigned int) var_17))))) ? (arr_0 [i_4 - 1]) : ((+(((/* implicit */int) arr_2 [i_1 - 2]))))))));
                }
                for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                {
                    var_21 = max((var_9), (((/* implicit */unsigned int) arr_0 [i_3])));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((short) min(((+(var_7))), (arr_5 [i_1])))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        var_23 |= ((/* implicit */unsigned int) (unsigned char)61);
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_7] [i_3]))));
                        arr_28 [i_1 - 1] [i_1] [i_4] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                        arr_29 [i_1] [i_1] [i_3] [i_1] [(signed char)8] [i_7] = ((/* implicit */long long int) min((((unsigned int) ((long long int) var_6))), (max((((/* implicit */unsigned int) arr_4 [i_7 + 1] [i_3 - 3])), (var_13)))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 4; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_3] [i_8 + 1] [i_6] [i_6 - 2] [i_6 - 2] [i_1] [i_1]))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (-8675357671073530055LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))));
                    }
                    for (signed char i_9 = 4; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_1] [i_3] [i_4 - 1] = ((/* implicit */signed char) ((min((arr_19 [i_1 + 2]), (arr_19 [i_1 + 2]))) >> (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))));
                        arr_35 [i_1] [i_9] [i_4 - 1] [i_1] = ((_Bool) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_30 [i_3] [i_3 + 2] [i_3 + 2] [i_6 + 1] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) != (var_2)))) : (((/* implicit */int) ((unsigned short) var_14)))));
                        var_27 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_30 [i_1] [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_1])), (arr_27 [i_3 + 2] [4U] [i_1] [i_3] [i_3] [i_3 + 1] [0U])))) > (min((var_11), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6 - 1] [i_4] [(_Bool)1] [i_9])))))), (((arr_33 [i_6 - 1] [i_6 - 1] [i_1] [i_3 + 1] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_1] [i_6 - 1]))) >= (var_12)))))))));
                    }
                    arr_36 [i_1] [i_1] [i_3] [i_3] [i_1] [i_6 + 1] = ((/* implicit */_Bool) (-(arr_5 [i_6 + 1])));
                }
                var_28 = ((/* implicit */short) min((((signed char) arr_2 [i_1])), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(1798077847)))))))));
                arr_37 [i_1 + 3] [(unsigned char)4] [i_1 + 3] |= ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [2U]))) + (arr_14 [4ULL]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_26 [i_1 - 3] [i_1] [i_3 + 2] [i_3 + 2] [i_4 + 1] [0U] [i_4]))))));
            }
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 9; i_10 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_16 [i_1]))))), (((arr_24 [i_1 - 2] [i_1 - 2] [i_3 - 2] [i_10 + 3] [i_10 + 3]) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) var_18))))));
                arr_40 [i_1] = ((/* implicit */unsigned long long int) min((1798077847), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3184)) || (((17528921586868123701ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))))))));
            }
            arr_41 [i_1] = ((/* implicit */signed char) arr_24 [i_1] [i_1] [i_1 - 2] [i_1] [i_1]);
        }
        arr_42 [4LL] |= ((/* implicit */_Bool) max((arr_16 [(short)6]), (((/* implicit */unsigned short) arr_38 [i_1] [i_1] [i_1 + 1]))));
        arr_43 [i_1] = ((/* implicit */signed char) max((arr_31 [i_1 - 4] [i_1 - 2] [i_1] [i_1]), (((/* implicit */int) min((arr_13 [i_1 + 3]), (((/* implicit */short) var_17)))))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_9 [i_1 - 3] [4U]))));
    }
    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1882235965) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_4))))))))));
}
