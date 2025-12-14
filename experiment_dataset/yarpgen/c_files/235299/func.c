/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235299
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
    var_17 = ((/* implicit */unsigned short) var_3);
    var_18 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-29))))));
                var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
                var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) 476928108655634968LL)))))), (18446744073709551615ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)63)) && (((((/* implicit */_Bool) -476928108655634969LL)) || (((/* implicit */_Bool) -2333539097256293850LL)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)22794)) || (((/* implicit */_Bool) var_14)))) ? (var_7) : (var_2)))))))));
}
