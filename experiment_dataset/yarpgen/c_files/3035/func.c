/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3035
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
    var_14 ^= ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (unsigned char)10)))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) || (((/* implicit */_Bool) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (var_5)));
        arr_4 [10U] = ((/* implicit */int) (short)24235);
        var_16 &= ((/* implicit */signed char) (~(((var_2) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
}
