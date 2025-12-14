/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((max((arr_0 [i_0]), (arr_2 [i_0]))))) > var_5));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((arr_2 [i_1]) ? (arr_2 [i_0]) : -358215795));
            arr_8 [i_1] = ((!(arr_1 [i_0])));
            arr_9 [i_0] [i_1] = (((arr_2 [i_1]) ? -115 : (arr_1 [1])));
        }
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_13 = (min((!347127091), -104));
        var_14 = ((-8309538085128939193 ? (((19598 < (347127104 / 45941)))) : 331925857));
        var_15 = (((((((min((arr_0 [i_2]), (arr_1 [i_2])))) ? 1369274269 : var_4))) ? (((((((var_11 == (arr_12 [i_2]))))) == (min(var_0, -7631108202514542036))))) : (-22482 % -9829)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (~45938);
        arr_17 [i_3] = (max((max(-104, 2593191661)), 29005));
    }
    var_16 = var_9;
    var_17 = ((-((-(33875 | var_10)))));
    #pragma endscop
}
