/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191282
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
    var_12 = (~(((((/* implicit */_Bool) -3337902869276032185LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) (signed char)-86)) + (113)))))) : (-3337902869276032184LL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)16486)), (9223372036854775807LL))), (((/* implicit */long long int) min((((short) arr_1 [i_0])), (((/* implicit */short) max((arr_2 [i_0]), (arr_5 [i_0])))))))));
                arr_8 [(_Bool)1] [i_1] = ((-5243692185330670334LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
}
