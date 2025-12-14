/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211030
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
    var_19 = ((/* implicit */unsigned int) max((max((min((((/* implicit */unsigned long long int) (_Bool)1)), (3667033489734344047ULL))), (((/* implicit */unsigned long long int) 2147483647)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14779710583975207569ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) : (var_14)))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (signed char)48))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_9 [i_1] [i_0] [i_1])))) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 4] [i_1 - 3] [i_1] [i_3 - 1] [i_3])) : ((-(((/* implicit */int) arr_2 [i_1]))))))))));
                        var_22 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_3]);
                        var_23 = arr_7 [i_0] [i_1 - 1] [i_0];
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_4] = ((/* implicit */signed char) max((arr_3 [i_0 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) -2147483637)))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (11789374968784928823ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)11938))) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)165))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((arr_0 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) < (max((arr_8 [i_5] [i_0] [i_0] [i_0]), (arr_4 [i_2]))))))));
                        var_25 -= ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_11 [i_5] [i_1 + 2] [i_0])), (arr_4 [i_0 + 1]))) <= (((((((/* implicit */int) arr_2 [i_5])) == (((/* implicit */int) arr_11 [i_2] [i_0 + 1] [i_0 + 1])))) ? (arr_1 [i_5]) : (arr_0 [i_0])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_20 [i_0]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), ((unsigned char)218)))) ? (((/* implicit */int) arr_10 [i_6] [i_2] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 4] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 4] [i_0 - 1])))))))));
                        var_27 = ((/* implicit */unsigned short) (short)-10407);
                    }
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1 - 3]))));
                    arr_21 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)91))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65413)), (6657369104924622809ULL)))) ? (((/* implicit */long long int) arr_9 [i_1] [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) var_7)) ? (5344050196019325962LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))))));
                }
            } 
        } 
    } 
}
