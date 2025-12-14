/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52564
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2])) && ((!(((/* implicit */_Bool) arr_5 [i_1 - 1] [5]))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((-7696111182815143289LL), (((/* implicit */long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7250561135311425727LL)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))))) : (arr_0 [i_1 - 2])));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned long long int) var_15))));
    var_22 = ((/* implicit */short) (+(var_12)));
}
