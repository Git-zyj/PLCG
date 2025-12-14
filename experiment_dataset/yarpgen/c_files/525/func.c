/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/525
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~((~(var_3)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_9))))) ^ (min((((/* implicit */unsigned long long int) (short)-20359)), (17650333986685704441ULL)))))));
    var_15 = ((/* implicit */short) (((_Bool)1) ? (((var_5) + (((11878601210119375218ULL) ^ (((/* implicit */unsigned long long int) var_0)))))) : ((+(((((/* implicit */unsigned long long int) var_0)) * (var_10)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)20352)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_5 [i_0] [i_2 - 2] [i_3] [i_4])))))) == (((unsigned int) arr_9 [i_2] [i_2] [i_2 + 1] [i_4] [i_2]))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((arr_5 [i_1] [i_1] [12ULL] [i_1]) / (((/* implicit */long long int) var_11)))), ((~(arr_5 [i_2] [i_2] [i_2] [i_3])))))) / (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 3] [i_1 + 1] [i_1] [i_1 + 4] [12ULL]))) : (arr_9 [i_2 + 1] [i_4] [(unsigned short)9] [i_4] [i_1 + 2])))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) 15508806572157582496ULL);
                arr_12 [i_0] [i_1] = ((((/* implicit */_Bool) (~(((unsigned long long int) (short)-20360))))) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (3893884995920694888ULL))))) : (((arr_8 [i_1 - 1] [i_1] [i_1] [i_0]) | (((((/* implicit */_Bool) (unsigned short)63166)) ? (16480063044176528216ULL) : (var_10))))));
            }
        } 
    } 
}
