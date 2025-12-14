/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242793
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) || (((/* implicit */_Bool) ((short) (short)8925))))))));
        var_21 = ((/* implicit */short) min((((((/* implicit */int) arr_0 [i_0] [i_0])) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))), (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))));
        var_22 = ((/* implicit */short) ((min((((/* implicit */int) (short)32748)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0])))))) - (((/* implicit */int) ((short) min((var_6), ((short)-21450)))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((arr_3 [i_0] [i_0]), (var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) (short)-13909))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)18608)) ? (min(((+(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (short)18620)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-4570)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))));
        var_24 = ((/* implicit */short) max((var_24), (((short) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_6 [i_1])))))));
    }
    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (short)-18610)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) (short)18608)))))) > (((((/* implicit */_Bool) (short)-4050)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_3))))));
}
