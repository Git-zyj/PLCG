/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54463
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
    var_11 = ((/* implicit */unsigned int) var_4);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((~(((/* implicit */int) ((unsigned char) (signed char)2))))) : (min((var_0), (var_1)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        var_13 *= ((/* implicit */short) ((unsigned int) arr_2 [i_0 - 1] [i_0 - 3]));
        arr_4 [i_0] = ((/* implicit */signed char) min(((-(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0 - 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
    }
}
