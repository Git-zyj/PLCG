/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194473
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) var_8))));
    var_18 = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) 9223372036821221376ULL);
                var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)-119)), ((short)-8308)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_4);
}
