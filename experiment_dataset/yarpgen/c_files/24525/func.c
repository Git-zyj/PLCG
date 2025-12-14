/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24525
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 *= ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (4294967290U))) : (max((1494176677U), (((/* implicit */unsigned int) (short)-2403)))));
        var_15 &= ((/* implicit */unsigned int) ((min((17688242982005523771ULL), (((/* implicit */unsigned long long int) (short)15923)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15924)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-23126)))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(3152649552U)))) ? (((((/* implicit */_Bool) (short)32767)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-15923), ((short)15944)))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((241446145228203675ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) max((var_10), ((short)23125)))) : (((/* implicit */int) ((arr_3 [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-3626))))))));
    }
}
