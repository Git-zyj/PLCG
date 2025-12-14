/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222313
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
    var_19 -= ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_16))))))));
        var_21 = ((/* implicit */int) ((arr_1 [3] [i_0]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (signed char)17);
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
}
