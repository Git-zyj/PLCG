/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221759
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_3);
        var_11 = ((/* implicit */int) ((((int) arr_1 [i_0])) <= ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -1068263863)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) != (((int) arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (signed char)83))))), (max((((/* implicit */unsigned short) arr_1 [i_0])), (var_0))))))));
        arr_3 [i_0] = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_0)))) % (((/* implicit */int) arr_1 [i_0])));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((signed char) arr_0 [i_1]))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) (signed char)84))));
    }
    var_16 = var_1;
    var_17 = var_4;
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)78)) <= ((+(((/* implicit */int) (signed char)83))))));
}
