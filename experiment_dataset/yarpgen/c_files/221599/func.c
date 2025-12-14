/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221599
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
    var_15 ^= min((1151795604700004352ULL), (((/* implicit */unsigned long long int) (signed char)123)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (var_3))))));
                    arr_9 [i_1] [(unsigned short)12] [i_2] &= ((/* implicit */short) min((var_13), (max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) max((var_4), (var_5))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_12))))))))));
    var_18 = ((/* implicit */_Bool) max(((+(max((var_11), (var_0))))), (((/* implicit */unsigned long long int) var_10))));
}
