/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243203
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
    var_18 |= var_14;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_1))));
                                var_20 ^= (_Bool)1;
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_22 = -131450474;
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1071295442U)));
}
