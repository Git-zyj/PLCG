/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208254
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (var_9) : (min((640068718U), (var_7)))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) 8495233139277631023LL)) ? (1365179116508523590LL) : (7621595897992875741LL))) : (((/* implicit */long long int) var_9)))));
    }
    var_12 = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 3654898578U)) : (1365179116508523590LL)))))))));
}
