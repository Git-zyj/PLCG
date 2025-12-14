/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19159
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
    var_17 = ((((/* implicit */_Bool) ((min((2339721019U), (((/* implicit */unsigned int) var_3)))) << (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_2)))))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_6), (((/* implicit */unsigned int) var_15))))))));
    var_18 &= ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_11))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((1955246278U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
        var_20 = max((((((/* implicit */_Bool) 1089974555U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) var_10)));
        arr_2 [i_0 + 2] = ((/* implicit */unsigned char) var_16);
        var_21 = var_0;
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1 + 2]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > ((+(var_11)))));
        arr_6 [i_1] [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(2727904255U))), (arr_4 [i_1])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
        arr_8 [i_1 + 1] [i_1] = arr_4 [i_1];
    }
    var_23 = ((/* implicit */_Bool) var_6);
    var_24 = ((/* implicit */_Bool) var_12);
}
