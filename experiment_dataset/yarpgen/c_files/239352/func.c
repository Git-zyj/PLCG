/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239352
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (min((67108862), (((/* implicit */int) arr_1 [i_0]))))));
                var_14 = ((/* implicit */unsigned long long int) 144115188075855864LL);
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (max((var_2), (((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (max((min((var_6), (((/* implicit */long long int) 100663296)))), (((/* implicit */long long int) ((int) 16400640467470370753ULL))))))))));
    var_17 = var_8;
}
