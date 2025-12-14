/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227476
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(494237765U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8495005048416856101ULL) < (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)22))))))))) : (var_15)));
                var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (min((((var_7) >> (((var_15) - (17922998476081136925ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) == (((/* implicit */int) (short)20795)))))))));
                var_18 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)15562)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)10758)) != (((/* implicit */int) (short)32767))))))) * ((-(((/* implicit */int) (unsigned short)15562))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_12);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
}
