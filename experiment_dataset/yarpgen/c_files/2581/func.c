/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2581
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
    var_19 = ((/* implicit */int) (unsigned short)4217);
    var_20 = ((/* implicit */short) (signed char)55);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) 1602462392U)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)35))) : (((long long int) (signed char)35)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (signed char)31))));
                var_23 += ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_24 = ((/* implicit */short) (~(var_3)));
    var_25 = ((/* implicit */int) max((var_25), (var_5)));
}
