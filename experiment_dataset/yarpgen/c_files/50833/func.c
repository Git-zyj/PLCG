/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50833
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */signed char) 2776186647U);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((unsigned long long int) ((long long int) 9855338321928166546ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) ((short) (unsigned char)63))))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) (short)32742))));
            }
        } 
    } 
}
