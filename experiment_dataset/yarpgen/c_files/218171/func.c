/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218171
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_16 |= max((((/* implicit */short) arr_0 [i_2 - 1] [i_2 + 2])), (min((((/* implicit */short) ((3055027377U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2])))))), (arr_4 [i_2 + 2]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) arr_0 [i_0] [i_3]);
                        var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)16590))))));
                        var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16590))))) ? (((((/* implicit */_Bool) 1239939919U)) ? (12605707001847097869ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16590))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2] [i_2 + 2] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0] [i_2])))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3]))))) ? (((((/* implicit */int) (unsigned short)50069)) + (((/* implicit */int) arr_3 [i_0] [i_3] [i_0])))) : (((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned short)16593))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (arr_14 [i_1] [i_4]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                    }
                    var_23 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2])))));
                }
                for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) var_4);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3055027374U)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_5 - 2] [i_0]);
                        var_26 += ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_5 + 2] [i_1] [i_5 - 1] [i_5]))));
                        arr_24 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7])) ? (1239939921U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(3055027380U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_7] [i_5 + 1] [i_0] [i_0]))))) <= (arr_7 [i_5 + 1])));
                    }
                    arr_25 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_5 - 2]))));
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 2] [i_5 - 2] [i_5 + 2] [i_5 + 2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (3055027402U))))))));
                        var_29 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_21 [i_5])), (arr_10 [i_8 + 3] [i_8 + 2] [i_8 + 2] [i_8 + 2]))), (arr_7 [i_5 - 1])));
                        arr_29 [i_5] [i_8 - 3] [i_5] [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1239939900U)) ? (min((((/* implicit */int) arr_20 [i_5] [i_1] [i_8])), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)48949)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((11694029145564138332ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
                    }
                }
                arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_23 [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((unsigned int) 3055027385U))) : (max((var_15), (((/* implicit */unsigned long long int) var_13))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((arr_33 [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9])))))))) ? (((/* implicit */unsigned long long int) (+(3055027391U)))) : (((((/* implicit */_Bool) arr_32 [i_9])) ? (((unsigned long long int) 3055027385U)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_2)))))))));
        var_31 = var_10;
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_7)))))) ? (var_12) : (((((/* implicit */_Bool) min((18396968904956276925ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)16585)) ? (1239939922U) : (var_3))) : (var_4)))));
    var_33 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) (_Bool)0)));
}
