/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28793
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
    var_20 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))));
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_9))) / (var_9)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (var_2) : (((var_10) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
}
