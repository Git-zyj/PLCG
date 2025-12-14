/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((min(((-890784090681493488 ? var_5 : var_10)), ((var_5 ? var_1 : var_1))))) ? (max(var_10, 890784090681493487)) : ((890784090681493487 ? ((var_0 ? 8391274700465099506 : var_4)) : var_8)))))));
    var_12 = 890784090681493488;
    var_13 = ((var_7 < ((((((max(var_9, var_8))) && 1))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = ((var_0 || (((-890784090681493489 ? 0 : -890784090681493488)))));
        arr_2 [i_0] = ((max(0, (arr_1 [i_0 + 2] [i_0]))));
        var_15 = (((arr_0 [i_0]) ? ((((0 > (arr_1 [i_0] [i_0 + 1]))))) : ((3025127930 / (arr_1 [3] [i_0 - 2])))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((!(arr_4 [i_1 + 2]))) ? ((max(var_5, (arr_4 [i_1 - 2])))) : ((var_4 ? (arr_4 [i_1 - 1]) : var_0))));
        arr_7 [13] [i_1] = ((((((arr_3 [i_1 - 1]) <= (arr_3 [i_1 + 2])))) | (((var_3 >= (arr_3 [i_1 - 3]))))));
    }
    #pragma endscop
}
