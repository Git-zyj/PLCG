/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [12] = arr_1 [i_0];

        for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [0] [16] [0] = ((var_4 ? ((((((arr_0 [i_0] [19]) ^ (arr_3 [13] [i_0] [i_0]))) < -1385))) : (arr_0 [13] [i_1])));
            arr_7 [i_0] [i_0] = (((arr_3 [i_1 - 2] [15] [15]) ? (arr_5 [i_0] [i_0]) : (min((arr_4 [i_0]), -4602902377001467672))));
        }
        for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_4 [i_0]);
            arr_11 [i_2] [i_2] = 3201;
            arr_12 [22] [i_2 + 1] [i_2] = ((((min((arr_0 [i_2 - 3] [i_2 - 2]), (arr_0 [i_2 - 1] [i_2 - 2])))) ? (min((min((arr_8 [i_0]), (arr_3 [12] [12] [i_2]))), ((((arr_9 [6]) ? (arr_8 [i_0]) : (arr_4 [20])))))) : ((-31723 ? (arr_8 [18]) : 6194179076680046209))));
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_20 = (arr_0 [i_3 + 1] [i_3 + 1]);
            var_21 = ((((arr_14 [i_3] [16] [i_0]) / (arr_14 [i_3] [11] [i_3]))) & (((((arr_1 [i_3 - 3]) >= (arr_1 [i_3 - 1]))))));
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [8] = (arr_5 [i_4] [11]);
        var_22 = (max((((arr_9 [i_4]) ? var_1 : (arr_9 [i_4]))), (arr_13 [10] [10] [i_4])));
    }
    var_23 = max(var_1, ((min(var_13, var_4))));
    #pragma endscop
}
