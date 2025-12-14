/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52466
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_15);
        var_17 |= ((/* implicit */long long int) (_Bool)1);
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */unsigned long long int) var_4)) - (var_12)))))) ? (max(((-(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8))))))) : (var_13)));
}
