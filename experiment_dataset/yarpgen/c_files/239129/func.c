/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239129
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_14)))) || (((/* implicit */_Bool) ((short) var_19))));
                                var_22 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) * (var_15))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_2)) : (var_15))))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((unsigned long long int) var_15))));
                }
            } 
        } 
    } 
}
