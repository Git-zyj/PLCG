/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220008
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
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) ((signed char) var_11))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)156))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_0))));
            }
        } 
    } 
    var_22 += var_6;
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(9223372036854775807LL))), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */long long int) 1883938686)) % (-9223372036854775796LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) var_11))))))));
}
