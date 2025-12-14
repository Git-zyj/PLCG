/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min((!var_1), (max(2033396868, 1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (!(max(((!(arr_0 [i_0]))), (arr_2 [i_0]))));
        var_11 = min((min((min((arr_2 [i_0]), 53465884)), (((arr_3 [i_0] [i_0]) ? var_6 : (arr_1 [i_0]))))), (((!(arr_1 [i_0])))));
    }
    var_12 &= min(var_9, (min((max(var_5, var_8)), (max(var_8, var_7)))));
    var_13 = (min(var_13, ((max((((var_6 ? var_1 : var_9))), ((max(-1775951920, var_5))))))));
    #pragma endscop
}
