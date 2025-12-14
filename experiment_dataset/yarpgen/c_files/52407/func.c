/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52407
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)114)))) : (((/* implicit */int) var_8)))) + (((/* implicit */int) (signed char)-115)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2515639489U)) ? ((-(((/* implicit */int) (!(var_7)))))) : (((/* implicit */int) arr_1 [(short)4] [(short)4]))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_19 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_0 [i_1 - 1])) % (((/* implicit */int) arr_0 [i_1 - 1]))))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ? ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [19U])) : (((/* implicit */int) (short)-30673)))) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */int) ((unsigned short) ((signed char) var_8)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 3])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_1 - 1])), (arr_1 [(signed char)5] [i_1 + 3]))))))));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29953)))))));
    var_23 = ((/* implicit */short) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))));
    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) / (1264777460U)));
    var_25 = ((/* implicit */_Bool) var_12);
}
