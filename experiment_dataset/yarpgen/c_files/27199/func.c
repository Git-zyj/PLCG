/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27199
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+(var_5)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (arr_1 [i_0])));
        var_12 = ((/* implicit */int) var_9);
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_9) : (var_5))), (min((var_9), (((/* implicit */long long int) var_6)))))))));
}
