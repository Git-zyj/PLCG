/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45881
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_15)));
    var_20 = ((/* implicit */int) var_9);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_4 - 2])) : (((/* implicit */int) (unsigned short)61497))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)61484)))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_1])))))))));
                                var_23 = ((/* implicit */unsigned char) -536870912);
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_4 [i_2] [i_0] [i_1] [i_2])), (arr_3 [i_2] [i_1]))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)254))))), (((2413159531U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                    var_25 = ((/* implicit */int) ((unsigned int) ((arr_8 [i_0] [i_0] [i_0]) / (((/* implicit */int) (unsigned short)61504)))));
                }
            } 
        } 
    } 
    var_26 = var_6;
}
