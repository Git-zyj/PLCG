/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245369
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) var_7);
        var_12 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 460924132)) && (((/* implicit */_Bool) var_10)))));
        var_13 += arr_1 [i_0] [i_0];
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (short)8730))));
        arr_7 [i_1] = ((((/* implicit */int) ((((/* implicit */int) (short)-159)) != (((/* implicit */int) (short)-3027))))) >> (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_6 [10])))))))));
        arr_8 [i_1] = ((min((max((((/* implicit */int) arr_4 [(short)13])), (arr_0 [i_1]))), (924626488))) | (((/* implicit */int) max((max(((short)1536), ((short)18033))), (var_3)))));
        var_15 *= ((/* implicit */int) (((-((+(((/* implicit */int) arr_4 [i_1])))))) == ((-(1674160477)))));
    }
    for (short i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_16 = ((/* implicit */short) -1850462985);
        arr_13 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)18033))))));
        arr_14 [i_2 + 3] = (-(min((2147483643), (((/* implicit */int) (short)-24652)))));
    }
    var_17 = ((/* implicit */int) var_4);
    var_18 = ((/* implicit */int) var_2);
    var_19 = var_9;
}
