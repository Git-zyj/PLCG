/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217798
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-2564)))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((unsigned int) max((var_10), ((short)2578)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2047))))), ((+(((/* implicit */int) (unsigned short)2051)))))) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
}
