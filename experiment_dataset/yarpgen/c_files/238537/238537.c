/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (min((max(var_4, var_6)), ((max(var_10, (arr_0 [i_0 - 1] [i_0 - 2]))))));
        var_14 = (min(((((max(81, 3985028858))) ? (((var_1 ? 1044480 : -1366133782))) : (max(721953928854868197, -721953928854868197)))), ((max((((arr_0 [i_0] [11]) ? 235 : (arr_0 [i_0] [i_0 - 2]))), var_11)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 ^= (min((max((min((arr_5 [0]), (arr_3 [i_1]))), (((3803106700 ? 0 : var_2))))), ((min(21, (arr_2 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max((min((((var_2 ? var_9 : 1))), ((var_2 ? (arr_4 [i_1]) : var_0)))), ((max(0, var_5)))));
            arr_8 [i_1] [0] [i_1] |= ((((min(var_10, (arr_5 [0])))) ? ((max((arr_5 [10]), (arr_5 [10])))) : (((arr_5 [1]) ? var_9 : 1))));
        }
    }
    #pragma endscop
}
