/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46281
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
    var_12 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (var_2))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))), (min(((-(var_7))), (var_10)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_5 [i_2 + 2] [i_1]), (var_9)))) * (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_1])) >= (((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_0))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((9542192914336729142ULL), (((/* implicit */unsigned long long int) 2175106982U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_3 - 2] [i_2] [i_3 - 2]))) : (var_5)))))))));
                    }
                    for (short i_4 = 4; i_4 < 20; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) 467103300)) <= (5397919438849601980LL))))));
                        var_16 *= ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((var_4) ? (1048290429U) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (-1416825430) : (((/* implicit */int) (signed char)-97))))) : (var_7))));
                    }
                    var_17 = min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */long long int) var_11)) : (arr_3 [i_2] [i_1] [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)64))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)21] [i_2]))) * (arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_9);
    var_19 = ((/* implicit */long long int) var_4);
    var_20 &= ((/* implicit */int) min((var_5), (((/* implicit */long long int) (+(4294967287U))))));
}
