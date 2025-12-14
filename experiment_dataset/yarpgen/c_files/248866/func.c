/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248866
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
    var_17 = (((~(((/* implicit */int) ((((/* implicit */_Bool) -2916199331872190780LL)) && (((/* implicit */_Bool) 10828442419609129440ULL))))))) < (((/* implicit */int) var_16)));
    var_18 = ((/* implicit */int) ((((-2916199331872190780LL) + (9223372036854775807LL))) << (((((-1) + (25))) - (24)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) (~(1207483064)));
                var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1])) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (var_11)))))))) % (((arr_1 [i_1 - 1]) ? (min((((/* implicit */long long int) (_Bool)1)), (-7803055754147736725LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_5))));
}
