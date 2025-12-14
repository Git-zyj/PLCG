/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242192
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned short) var_7);
        arr_3 [i_0] = ((/* implicit */signed char) var_4);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
        arr_6 [i_1] [(short)8] = arr_0 [i_1] [i_1];
    }
    var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) + (39279007U)))), (var_5)));
}
