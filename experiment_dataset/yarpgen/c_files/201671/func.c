/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201671
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */short) var_5)), (max((max((((/* implicit */short) (signed char)-115)), ((short)23112))), (((/* implicit */short) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1]))))), (arr_4 [i_0] [i_1] [i_1])));
                arr_5 [6LL] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_1 - 1])) - (195)))));
            }
        } 
    } 
}
