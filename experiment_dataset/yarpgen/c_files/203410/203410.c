/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_17 = ((!((max((!426629692973190179), (arr_1 [i_0]))))));
        var_18 &= ((((((arr_2 [0]) ? -426629692973190179 : (((min(255, (arr_2 [1])))))))) ? (((((arr_2 [1]) != ((~(arr_2 [8]))))))) : (((((arr_2 [10]) && (arr_1 [0]))) ? (((((arr_2 [20]) != var_14)))) : 6295810770692346609))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 *= ((((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))) ? ((((!(arr_5 [i_1] [i_1]))))) : ((-(~-6295810770692346610)))));
        var_20 = (((((((arr_0 [i_1] [i_1]) || (arr_0 [i_1] [i_1]))))) ? (((arr_3 [i_1] [i_1]) ? 1 : (arr_3 [i_1] [i_1]))) : (((((!var_16) < ((1073741824 ? var_9 : (arr_1 [i_1])))))))));
    }
    var_21 = (max(var_21, 2));
    var_22 = ((-426629692973190179 ? (6295810770692346609 || 426629692973190175) : (!1730762359)));
    #pragma endscop
}
