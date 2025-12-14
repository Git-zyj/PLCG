/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_8, (max((min(var_14, var_13)), (!10942)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 ^= (((((var_1 ? (((((arr_0 [i_0]) >= (arr_1 [5]))))) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : var_12));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_22 ^= (max(((((~(arr_3 [i_0] [i_1]))))), (arr_3 [i_0] [i_1])));
            arr_4 [i_0] &= (((28780 * -32749) ? (arr_2 [10] [i_0]) : ((~(arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [4] = var_17;
            var_23 = -32010;
            arr_8 [i_0] [1] [i_2] = (arr_2 [10] [i_0]);
        }
    }
    #pragma endscop
}
