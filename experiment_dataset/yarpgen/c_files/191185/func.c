/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191185
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_1 [i_2 - 2] [i_0])));
                                var_12 = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (unsigned short)27949)), (var_9))), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 508378748U)) ? (((/* implicit */int) (_Bool)1)) : (-1610289000)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4037079166U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27969)))))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (max((var_4), (((/* implicit */long long int) var_2))))))));
}
