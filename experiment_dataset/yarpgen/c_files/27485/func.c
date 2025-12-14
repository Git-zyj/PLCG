/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27485
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
    var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (short)28232)), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_13)))))), ((+(((/* implicit */int) (unsigned short)54736))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28239)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (var_11)))));
        var_19 = ((((/* implicit */_Bool) min((((arr_0 [i_0] [(unsigned char)9]) | (1525425542U))), (((/* implicit */unsigned int) ((var_13) && (((/* implicit */_Bool) var_0)))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned char) var_6))))));
        var_20 &= ((/* implicit */_Bool) (+(max((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_3 [17] = ((/* implicit */signed char) ((var_7) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)37468)))) : ((~(min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_5))))))));
    }
    var_21 = var_15;
}
