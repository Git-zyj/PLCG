/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((min(var_12, var_12)))), var_6));
    var_14 = (min((((var_7 ? var_8 : (((var_3 ? 149 : var_9)))))), (max(((50001 ? 1 : 5043551553632452462)), (2651974371 ^ var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [4] [i_0] = (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : 2651974375));
        arr_4 [i_0] = (-15691 < -943354802);
        var_15 += (((arr_1 [i_0] [i_0]) - var_11));
        var_16 = 3716990205693980774;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (((arr_1 [5] [i_1]) ? var_10 : (arr_7 [i_0] [i_1])));
            var_18 = (((arr_2 [i_0]) ? 1890687064 : var_4));
            arr_9 [i_0] [i_1] [2] = ((((arr_0 [i_1]) && 1073741823)));
        }
    }
    #pragma endscop
}
