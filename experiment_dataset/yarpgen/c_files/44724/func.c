/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44724
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
    var_13 = var_3;
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) && (((var_12) && (var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_15 = ((((/* implicit */int) var_7)) == (((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0 - 2]))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11)))))));
        var_16 = ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)236))));
    }
    for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122)))))));
        var_18 = ((/* implicit */_Bool) max((max((arr_1 [i_1 - 1]), (((/* implicit */unsigned char) arr_5 [i_1 + 1])))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_1 - 3])))))));
        arr_6 [i_1] = var_2;
    }
    for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_2 + 1])))) | (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (809047434U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 2])))))));
        arr_10 [(unsigned char)22] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1])))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [(signed char)18] [(signed char)18])))));
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) arr_9 [i_2] [(_Bool)1]);
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)217)))) - (((/* implicit */int) (_Bool)1))))) : (var_0)));
}
