/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196703
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
    var_16 = var_1;
    var_17 = ((/* implicit */unsigned short) (+(max((var_15), ((-(((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = arr_0 [i_0];
        arr_3 [i_0] = ((((((/* implicit */_Bool) max((2147483647), (arr_0 [i_0])))) ? (var_9) : ((~(((/* implicit */int) (unsigned short)42676)))))) - (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-1236262662) : (arr_0 [i_0 + 1]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((int) 438848956));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1 + 3] [i_1 - 3])) - (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 3]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)42676)) != (((/* implicit */int) var_6))))) <= (((/* implicit */int) (unsigned short)12))));
        var_20 = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
        arr_8 [i_1 - 3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)42675)) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 4])) : (((/* implicit */int) var_2))))));
    }
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_21 = (-2147483647 - 1);
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_12)))));
        arr_11 [i_2] [i_2] = ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 + 3])) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (arr_6 [i_2 + 1] [i_2 + 3])));
    }
    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        var_23 = ((((/* implicit */_Bool) -1213047623)) ? (-2111480442) : (((/* implicit */int) (unsigned short)7798)));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / (var_15)));
        var_25 = ((/* implicit */int) min((var_25), (((int) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) && (((/* implicit */_Bool) ((unsigned short) var_14))))))));
    }
}
