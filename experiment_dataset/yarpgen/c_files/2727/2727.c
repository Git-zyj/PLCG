/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(((max((arr_2 [i_0] [i_0] [i_1 - 1]), (((!(arr_1 [i_0] [i_0]))))))), (arr_1 [i_1 - 1] [i_1 - 1])));
                var_21 -= 1099511627775;
            }
        }
    }
    var_22 = (max(var_22, var_10));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = ((((var_6 ^ (arr_3 [i_2] [i_2]))) | ((~(arr_4 [i_2] [i_2] [i_2])))));
        arr_7 [6] |= var_9;
        arr_8 [i_2] = (arr_6 [i_2]);
        var_24 = (((((arr_3 [i_2] [i_2]) ? var_7 : (arr_3 [i_2] [i_2]))) % (min(var_0, (arr_3 [i_2] [i_2])))));
    }
    var_25 = var_9;
    #pragma endscop
}
