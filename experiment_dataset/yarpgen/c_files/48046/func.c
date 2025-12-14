/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48046
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
    var_19 = ((long long int) min((max((-8082775026828383433LL), (((/* implicit */long long int) var_0)))), ((+(var_14)))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(var_3))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_9))));
    var_22 = ((/* implicit */short) max((max((var_9), (23LL))), (((/* implicit */long long int) ((int) 50331648)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_23 = min((((((/* implicit */_Bool) var_8)) ? (max((var_8), (8082775026828383445LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (50331636) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((var_9), (((/* implicit */long long int) -1736364922)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))))))));
            }
        } 
    } 
}
