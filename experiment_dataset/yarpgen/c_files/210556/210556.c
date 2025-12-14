/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (+-8064);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_17 = (min(var_17, var_13));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 += 0;
        var_19 += ((-(((var_0 && ((((arr_4 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = ((!((max((((arr_9 [i_2]) ? (arr_9 [i_2]) : var_8)), ((var_9 ? (arr_9 [i_2]) : var_10)))))));
        arr_12 [i_2] = (((16103 ? 1 : 1)) >= ((min(((-16 <= (arr_10 [i_2]))), (var_11 != -15)))));
        arr_13 [i_2] = (((((~(var_6 & var_6)))) && (((max((arr_9 [i_2]), var_14))))));
    }
    var_20 = var_14;
    var_21 = ((var_4 * (!-95)));
    var_22 = var_12;
    #pragma endscop
}
