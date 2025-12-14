/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220725
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (3213269228U) : (3213269232U)));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((signed char) 3213269237U)))));
            }
        } 
    } 
    var_14 += ((/* implicit */_Bool) ((unsigned long long int) 3213269237U));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_10)))))))) ? (min((1081698058U), (1081698068U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
