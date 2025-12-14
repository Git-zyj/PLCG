/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200362
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
    var_15 = var_6;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((((((/* implicit */int) var_12)) * (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (short)32760)))))), (((/* implicit */int) max(((short)4349), ((short)26116))))));
        arr_2 [i_0] [i_0] = ((short) min((((/* implicit */int) min(((short)-4910), (var_4)))), (((((/* implicit */_Bool) (short)13782)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 ^= var_6;
        arr_3 [i_0] = ((/* implicit */short) ((max((((/* implicit */int) min((var_2), (arr_0 [i_0])))), (((((/* implicit */_Bool) (short)-21515)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13)))))) > (((/* implicit */int) ((((/* implicit */int) min(((short)26750), (arr_0 [i_0])))) < ((+(((/* implicit */int) var_11)))))))));
    }
}
