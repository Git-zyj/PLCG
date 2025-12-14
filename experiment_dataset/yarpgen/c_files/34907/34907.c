/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_15 || (((((min(230978865, -707951153))) ? (var_9 && var_14) : (var_7 || 262016))))));
    var_17 = (!835605618);
    var_18 += 262020;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 -= ((((-((((arr_2 [i_0] [2]) == var_4)))))) ? (max((var_9 && 261991), (3815122458 % var_14))) : ((((!(arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((58746 ? 5493 : 6029747413359952587));
        var_20 = var_10;
    }

    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_21 = (((arr_4 [i_1 - 3]) / (arr_5 [i_1] [i_1 - 3])));
        var_22 = (min(var_22, (arr_5 [i_1 - 2] [i_1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_2] = (((arr_5 [i_1] [i_2]) + var_8));
            var_23 = ((var_1 < var_1) & ((var_6 / (arr_4 [i_1 - 4]))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_24 = ((-(arr_10 [i_1 + 1] [i_1 + 1] [i_1])));
                arr_12 [i_1 - 4] [i_1] [i_2] [i_3] = var_10;
                arr_13 [2] [i_2] [i_3] = ((-(arr_7 [i_1 - 3])));
                var_25 += (((arr_4 [i_1 - 1]) ? (arr_4 [i_2]) : var_9));
            }
            var_26 = (min(var_26, 0));
        }
        var_27 = (max(var_27, (arr_11 [i_1 - 4] [i_1 - 3])));
    }
    #pragma endscop
}
