/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192385
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) ((short) var_13))))) : (max((((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned char)41)) - (29))))), (((/* implicit */int) var_8)))))))));
    var_15 = ((/* implicit */short) min((495339426U), (((/* implicit */unsigned int) (unsigned char)34))));
    var_16 = var_8;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [(short)22] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [(unsigned char)21] [i_1] [i_2])) ? (((/* implicit */int) (short)12181)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4780)) && (((/* implicit */_Bool) (short)32760)))))));
                    var_17 = ((/* implicit */unsigned char) (~(arr_6 [i_2] [i_1] [i_2])));
                    var_18 = ((short) ((arr_2 [i_0]) <= (min((2803078379U), (((/* implicit */unsigned int) var_7))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned char)5] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_11 [i_0] [i_2] [i_4]), ((short)12181))), (((/* implicit */short) ((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) || (((/* implicit */_Bool) (~(max((1491888917U), (((/* implicit */unsigned int) (short)12183)))))))));
                                arr_15 [i_4] = ((/* implicit */unsigned char) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_4 [i_4] [i_2]))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned short) (short)12201)))))))));
                                var_19 = ((/* implicit */unsigned int) (unsigned char)110);
                                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4]))) - ((((-(1491888917U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 2744623494U))))))))));
                                arr_16 [i_4] [i_3 - 2] [i_2] [22LL] [22LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((short) var_8)))) ? (((/* implicit */int) min((arr_5 [i_4 + 1] [i_1] [i_3 - 1]), (arr_5 [i_4 + 1] [i_1] [i_3 + 1])))) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_10 [i_0] [(short)1] [(short)15] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_0);
}
