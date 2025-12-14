/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229378
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))) : (((arr_1 [i_0]) - (((/* implicit */unsigned long long int) var_0))))))));
        var_20 = ((/* implicit */int) (unsigned char)0);
        var_21 = ((/* implicit */signed char) var_9);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_22 -= ((/* implicit */_Bool) (-(1632869919U)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_4))));
    }
    var_23 = (-2147483647 - 1);
}
