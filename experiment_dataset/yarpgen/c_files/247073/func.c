/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247073
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
    var_10 = ((/* implicit */short) (unsigned short)48346);
    var_11 -= ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_4)) / (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_3))))) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_0] [5] [i_0] [i_3] = ((/* implicit */short) arr_13 [i_0] [i_2] [i_3]);
                        arr_16 [8ULL] [i_3] = -894851696;
                        var_12 = ((/* implicit */short) ((((max((arr_8 [i_0] [(short)8] [i_1] [i_0]), ((_Bool)0))) ? (max((((/* implicit */long long int) (_Bool)0)), (arr_7 [i_0] [14U] [(_Bool)1] [i_3]))) : (((/* implicit */long long int) var_1)))) * (((((/* implicit */_Bool) arr_7 [i_2 + 1] [(_Bool)1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */long long int) arr_11 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1])) : (arr_7 [i_2 - 2] [i_2] [(unsigned char)19] [i_2 - 2])))));
                        var_13 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_2 + 2]))))), (((arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 2])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_17 [10LL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((max((arr_12 [i_0] [i_1] [i_2 - 1] [i_4]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2 + 2] [i_2 + 2])))), (((/* implicit */unsigned int) var_5))))))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
                        var_16 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_8)), (arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (2147483520)))), (arr_18 [i_2 + 1] [i_1] [i_2] [i_4] [i_2]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */signed char) arr_14 [(_Bool)1] [i_2 - 2]);
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_20 [i_0] [i_0] [i_0] [(unsigned char)0] [i_2 + 1]) + (arr_20 [(_Bool)1] [1U] [(_Bool)1] [(_Bool)1] [i_2 + 1]))))));
                        var_19 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (arr_14 [i_0] [i_0])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) -870966144))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_0] [i_2 - 2] [i_2 - 2] [i_6]), (-870966144)))) ? (arr_12 [i_2] [20U] [i_2 - 1] [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_17 [i_1])) / (arr_11 [i_0] [i_1] [i_0] [12] [(short)18])))))))))));
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_6))) >> ((((-(arr_1 [5] [i_6]))) - (3021662625U)))));
                    }
                    var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */int) ((arr_21 [i_2] [i_2] [i_2 - 1] [i_2 + 2]) && (((/* implicit */_Bool) 546063703U))))) >= (((/* implicit */int) (((~(((/* implicit */int) var_2)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_0 [i_2])))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */int) ((_Bool) arr_1 [i_7] [i_7]))) >> (((((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (1115466675U) : (arr_1 [i_7] [i_7]))) - (1115466644U))));
        var_25 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_5 [i_7] [i_7])), (var_2))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_7] [i_7])) < (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1])))))));
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) (+(((arr_21 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7]))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (var_3)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = ((/* implicit */unsigned int) ((signed char) ((3232323065U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1115466682U) - (arr_12 [14] [i_8] [i_8] [i_8])))) ? (((unsigned int) 1777180229U)) : (((/* implicit */unsigned int) -870966144)))))));
        var_27 = ((/* implicit */unsigned short) ((arr_0 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) : (546063703U)));
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)84))));
        arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8] [0U] [i_8] [i_8])) || (((/* implicit */_Bool) var_4))));
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)84)) ? (1062644220U) : (((/* implicit */unsigned int) 2047958913))));
        var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) 1062644233U)), (arr_34 [i_9])))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (3337250173U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) <= (arr_12 [(_Bool)1] [i_9] [i_9] [i_9])))))))));
    }
}
