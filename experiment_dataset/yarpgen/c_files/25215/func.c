/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25215
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)1] = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) arr_0 [i_0 - 1]))), ((-(arr_0 [i_0 + 1])))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) > (max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) << (((arr_0 [i_0 + 1]) - (621709948402909408LL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
    var_20 = ((/* implicit */unsigned char) var_7);
}
