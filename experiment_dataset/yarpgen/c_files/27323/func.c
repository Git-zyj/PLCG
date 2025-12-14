/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27323
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */unsigned long long int) var_12);
                var_18 *= ((/* implicit */unsigned char) var_0);
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (signed char)-19)))));
            }
        } 
    } 
}
