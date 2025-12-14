/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [1] = (max((((var_13 % var_1) | (max(var_0, 0)))), (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (((var_5 < var_15) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (((var_11 < (!var_10))))));
        var_20 = ((((((arr_1 [i_0]) < (arr_1 [i_0])))) & (((!(arr_1 [i_0]))))));
        arr_5 [i_0] = arr_2 [i_0];
    }
    var_21 = (max(var_21, (((!((min(((min(var_9, var_2))), ((var_8 ? var_5 : -2147483623))))))))));
    var_22 = ((var_12 || (((~(~18))))));
    #pragma endscop
}
