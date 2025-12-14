/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30199
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
    var_20 += ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) / (var_2))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_21 = ((/* implicit */unsigned int) (signed char)75);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((short) arr_1 [i_0]));
                arr_6 [i_0] [i_1] &= ((/* implicit */short) 18446744073709551615ULL);
            }
        } 
    } 
}
