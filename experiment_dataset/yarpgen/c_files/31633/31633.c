/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_11, var_13));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_4 [9] = ((-(arr_1 [i_0])));
            var_15 = (((!1229495341) ? ((var_9 ? var_6 : (arr_3 [i_0] [6] [i_1]))) : ((((arr_0 [i_1] [i_1]) + 25680)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = (((arr_2 [i_0] [i_0 - 2] [i_0 - 1]) ? (((arr_2 [i_0] [i_2] [i_0]) ? (arr_3 [i_0] [9] [i_0]) : var_3)) : (arr_3 [i_0 + 1] [i_0] [i_0 + 1])));
            var_17 = (max(var_17, (((!(!1229495341))))));
            var_18 = ((!(arr_7 [i_0] [i_0 - 1])));
            arr_9 [i_0] [i_2] = 1;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 = (max(var_19, ((((arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0 - 1]))))));
            arr_12 [i_3] = ((!(!var_13)));
        }
        var_20 += (arr_10 [i_0] [11] [1]);
        var_21 += ((!(arr_6 [2] [i_0 - 1] [i_0 - 1])));
    }
    var_22 &= var_9;
    #pragma endscop
}
