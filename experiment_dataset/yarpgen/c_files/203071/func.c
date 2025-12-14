/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203071
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */_Bool) var_13)) ? (var_5) : (var_17))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)17] [i_0] [i_1])))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_14))));
            }
        } 
    } 
    var_21 += ((/* implicit */_Bool) max((min((-1LL), (((/* implicit */long long int) (short)-21210)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))))));
    var_22 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)63)), (-7494210347125527818LL)));
    var_23 = ((/* implicit */_Bool) min((((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)65)), (var_16))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2648184928U) : (4294967295U))))))), (min((((((/* implicit */int) (short)14893)) ^ (((/* implicit */int) (unsigned short)14491)))), (((/* implicit */int) var_13))))));
}
