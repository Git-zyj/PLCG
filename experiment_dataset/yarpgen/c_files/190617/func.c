/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190617
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
    var_11 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((signed char) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) << (((((var_8) + (294720504))) - (7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (arr_1 [5])))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_5)), (var_6))) + (max((((/* implicit */long long int) var_4)), (var_6)))))) ? ((((+(((/* implicit */int) var_0)))) % (min((((/* implicit */int) var_0)), (var_7))))) : (((((/* implicit */int) var_10)) << (((var_7) - (1777236635)))))));
}
