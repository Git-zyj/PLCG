/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241696
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), ((-((+(((var_17) + (var_15)))))))));
                    var_19 = max(((~(-1860733581234752677LL))), (((/* implicit */long long int) arr_2 [i_2] [i_1])));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) 2910379961U)), (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) min((var_17), (((/* implicit */int) (signed char)110)))))))) || (((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) min((-1630706114592505224LL), (((/* implicit */long long int) arr_1 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1936996413U)))) ? (min((var_10), (var_0))) : (((/* implicit */int) ((var_11) >= (var_9)))))))));
}
