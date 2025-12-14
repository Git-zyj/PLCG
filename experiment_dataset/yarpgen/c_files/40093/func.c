/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40093
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(-1021795929))))));
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_14))))))))), (min((min((776837838U), (((/* implicit */unsigned int) -1021795914)))), (((/* implicit */unsigned int) (short)-12586))))));
                                arr_12 [i_0] [(short)11] [21U] [(short)11] [i_2] [i_0] [(unsigned char)12] = ((/* implicit */unsigned char) ((3779131605U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [(signed char)2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)252))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */signed char) ((unsigned long long int) ((((4398046509056LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))))) / (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned short)27061))));
}
