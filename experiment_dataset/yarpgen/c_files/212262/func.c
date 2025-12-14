/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212262
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 &= ((/* implicit */signed char) ((((((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))) : (var_14))) & ((-(var_13)))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) > (((/* implicit */int) arr_0 [i_0] [i_0]))))) >> ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) + (21)))));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((var_4), (min((var_16), (var_0)))))) & (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) 2556816510U);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((204783994U) < (204783998U)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((4090183306U) & (arr_5 [i_1]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 204784007U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) var_17))));
        var_22 += ((/* implicit */signed char) arr_5 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((204784015U), (1738150772U))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_16)))))));
    }
    var_25 = max((var_2), ((+(((((/* implicit */_Bool) var_10)) ? (var_15) : (var_15))))));
}
