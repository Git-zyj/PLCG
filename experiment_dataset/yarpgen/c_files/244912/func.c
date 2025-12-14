/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244912
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [15] = ((unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) (short)19840)) : (((/* implicit */int) arr_2 [i_0]))));
        var_11 &= ((/* implicit */int) var_5);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_12 = ((arr_2 [i_1]) ? (((arr_2 [i_1]) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (var_7))) : (((((/* implicit */_Bool) (signed char)107)) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (short)16861)) : (((/* implicit */int) arr_8 [i_1]))))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) -866760660)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))) * (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))))));
        arr_9 [0] [(short)15] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (var_1))) * (((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16861)) ? (((/* implicit */int) (short)-16861)) : (((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)4096)) ? (var_2) : (arr_5 [i_1] [i_1]))) : (var_3)))))))));
        var_15 = ((/* implicit */unsigned int) max((min((((/* implicit */int) (signed char)112)), (-1433633015))), ((~(var_2)))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-11700))))));
        var_17 = ((/* implicit */int) max((var_17), (max((((/* implicit */int) ((((/* implicit */int) arr_10 [15U])) == (((/* implicit */int) arr_10 [i_2]))))), (((((/* implicit */_Bool) (short)-11672)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))))));
        arr_12 [3U] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(903861840)))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (((/* implicit */int) var_8))))));
    }
    var_18 *= ((/* implicit */unsigned int) (short)-16846);
}
