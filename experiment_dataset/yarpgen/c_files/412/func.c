/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/412
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 4] [i_0 - 1])))) >> (((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3] [i_0 + 3]))) - (65510)))));
        arr_2 [i_0] = ((/* implicit */short) (signed char)-64);
        var_13 &= ((/* implicit */signed char) var_6);
        var_14 = ((/* implicit */unsigned long long int) (signed char)-46);
    }
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min(((signed char)-62), ((signed char)-46))), (((/* implicit */signed char) ((var_6) < (var_6))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-3701))));
}
