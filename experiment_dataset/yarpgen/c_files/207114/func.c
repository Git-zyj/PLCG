/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207114
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((((/* implicit */int) arr_2 [6LL])) + (2147483647))) >> (((((/* implicit */int) arr_2 [2])) + (101)))))));
        var_12 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    }
    var_13 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */signed char) var_8);
}
