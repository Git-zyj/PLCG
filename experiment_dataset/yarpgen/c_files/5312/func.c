/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5312
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_13)), (var_9)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [5LL] = ((/* implicit */unsigned long long int) 0U);
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)32)) >= (((/* implicit */int) (_Bool)1))));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65523)) + (min((((((/* implicit */int) (unsigned char)152)) - (((/* implicit */int) var_16)))), (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
}
