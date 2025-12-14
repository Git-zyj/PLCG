/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((1 ? 49849 : 1)), 1));
    var_12 = (max(var_12, (((-((((var_2 ? 241 : 15)) * 1)))))));
    var_13 = ((((max(245, -1580269113)))) ? ((var_6 ? var_6 : var_10)) : var_10);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((max(-1052728031671951440, (arr_1 [i_0] [i_0]))) | ((((((1026656204 * (arr_0 [i_0]))) <= 4889)))));
        var_14 -= 152;
        arr_5 [i_0] = (max(((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))), (((10 / -866553756) ? (((min(0, var_9)))) : (max(var_0, 1505514794))))));
        var_15 = ((!((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))))));
    }
    var_16 = var_4;
    #pragma endscop
}
