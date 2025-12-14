/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53501
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (-(11441939010945112361ULL))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-14))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32767)) ? (333939696U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (var_12)))))));
}
