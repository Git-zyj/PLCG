/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220626
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
    var_11 &= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0]))));
        var_12 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (arr_1 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)19783)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1]))))), ((+(max((var_3), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))))));
        arr_8 [(short)15] = ((/* implicit */signed char) ((((min((1695226154U), (((/* implicit */unsigned int) -748209097)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))) == (min((((((/* implicit */unsigned int) 7)) / (1695226154U))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_3) : (((/* implicit */unsigned int) var_6))))))));
    }
}
