/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240505
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(-1583296173)))) ? (var_4) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)19442)))))) + (((/* implicit */int) var_3))));
    var_11 = ((/* implicit */int) max((var_11), (1583296189)));
    var_12 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((unsigned short) -1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((unsigned short) arr_1 [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2053005701)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_1 + 1]))))) ? (((/* implicit */int) ((short) max((arr_7 [i_1 + 1]), (((/* implicit */unsigned short) var_0)))))) : (((/* implicit */int) ((short) arr_6 [i_1 - 1])))));
        var_15 = arr_5 [i_1];
    }
}
