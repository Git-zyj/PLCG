/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = (arr_0 [i_0 - 1] [i_0 - 2]);
            arr_6 [i_0] [i_0 - 2] [i_0] = (((arr_5 [i_0 - 2]) ? -var_5 : (((1 ? var_2 : (arr_3 [i_0] [i_0] [i_1]))))));
            var_13 = ((-(arr_1 [i_0] [i_0])));
            arr_7 [i_1] [i_0] [i_0] = ((!(arr_4 [i_0] [i_0] [i_0 - 1])));
            var_14 = ((~((var_2 ^ (arr_2 [i_0] [i_0 - 2])))));
        }

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [12] [i_2] [i_2] = ((var_5 ? var_5 : (arr_1 [i_0] [i_2])));
            arr_12 [i_2] = ((((min((arr_8 [i_0] [i_0] [1]), (arr_10 [i_0] [i_0] [i_2])))) ? 72 : ((max((arr_9 [i_0] [2]), (arr_8 [i_0 - 1] [i_2] [i_2]))))));
            var_15 *= (!var_5);
            var_16 = (((((!(arr_4 [i_0] [i_0 - 1] [i_0 - 1])))) / 9));
        }
        var_17 += min(var_9, (~90));
        arr_13 [i_0 - 2] = arr_0 [i_0] [i_0];
    }
    var_18 = (min(var_18, var_3));
    var_19 = ((var_7 ? (var_11 / var_4) : (max(123, var_11))));
    var_20 = ((var_6 ? var_6 : var_1));
    var_21 = -var_3;
    #pragma endscop
}
