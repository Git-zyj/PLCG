/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5338
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
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) || (((/* implicit */_Bool) var_4)))))) | (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (((-(((/* implicit */int) (short)32250)))) | (((/* implicit */int) (short)-28235)))))));
        var_15 ^= ((/* implicit */unsigned char) var_1);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_3 [(short)5] [(short)5]))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((((/* implicit */int) (short)-23130)) != (((/* implicit */int) (short)-28235)))))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), ((-(3537398156U)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [(unsigned char)11])))) <= (((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) < (((/* implicit */int) var_10)))))));
        arr_5 [i_1] |= ((/* implicit */unsigned char) (-((~(4013200821U)))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), (min((4013200821U), (4013200833U)))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-5641)) && (((/* implicit */_Bool) (unsigned char)246)))))));
    }
}
