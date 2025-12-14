/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207805
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
    var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)0] [i_1] [i_0] = ((/* implicit */short) var_4);
                arr_7 [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_3 [i_0] [i_0 + 1]))), (((/* implicit */unsigned long long int) max((var_2), (var_2))))));
            }
        } 
    } 
}
