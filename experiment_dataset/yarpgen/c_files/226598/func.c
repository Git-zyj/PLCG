/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226598
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (max((min((((short) var_11)), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))), (var_9)))));
        var_21 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))))))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1 + 1] [i_1 - 1] = max((((/* implicit */short) ((((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1 + 1]))) <= (((/* implicit */int) min((var_11), (arr_5 [i_1 + 1]))))))), (max((((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_18))))), ((short)-19478))));
        var_22 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_1 [i_1 + 1] [i_1 - 1]))) >= (((/* implicit */int) var_19))));
    }
    for (short i_2 = 3; i_2 < 15; i_2 += 4) 
    {
        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)25784)) ? (((/* implicit */int) (short)-24522)) : (((/* implicit */int) (short)-17690))));
        var_24 = ((/* implicit */short) min((var_24), (var_4)));
    }
    var_25 = ((/* implicit */short) min((var_25), (var_7)));
    var_26 = max(((short)17687), (var_18));
    var_27 = var_3;
}
