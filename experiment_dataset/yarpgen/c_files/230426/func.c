/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230426
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
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)32746)) ^ (((/* implicit */int) var_2)))) >= ((~(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_3))));
        arr_3 [i_0] [(short)19] = ((/* implicit */signed char) (short)32731);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(_Bool)0])) && (var_1)));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_8 [i_1] [(signed char)8] = ((/* implicit */_Bool) max(((~((-(((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) var_11)) >> (((134209536U) - (134209505U))))) >> (((((((/* implicit */int) arr_0 [i_1 + 1])) + (((/* implicit */int) var_6)))) + (56574)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_0))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 ^= var_2;
        var_19 = ((/* implicit */_Bool) arr_11 [i_2]);
    }
}
