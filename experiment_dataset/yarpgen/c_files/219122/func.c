/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219122
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
    var_18 |= ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) var_5);
        arr_3 [12] &= ((/* implicit */long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned short) var_1);
        var_21 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2443581719U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_9))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */short) var_13)))))) < (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)12)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (1959295728U)))))));
}
