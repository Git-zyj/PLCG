/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (((((((1 ? var_10 : var_1))) && (var_12 && var_12))) ? var_1 : ((var_8 ? 1 : ((var_0 ? var_4 : var_5))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (var_7 == ((((max((arr_1 [i_0]), (arr_2 [i_0 - 2])))) - ((var_0 ? (arr_2 [i_0]) : var_11)))));
        var_16 = (((arr_1 [i_0]) ? 0 : 236));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = ((-(!122)));
        var_18 = (max((max((arr_1 [i_1 - 1]), (arr_5 [i_1 + 1]))), (((var_0 || (arr_5 [i_1 - 3]))))));
        arr_6 [i_1] = var_2;
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_19 = (((arr_0 [i_2 + 1]) | (((arr_0 [i_2 + 1]) ? 809047434 : (arr_0 [i_2 - 2])))));
        arr_10 [22] [i_2] = ((((((var_4 * (arr_7 [i_2 + 1])))) ? var_9 : (arr_3 [18] [18]))));
        arr_11 [i_2] [i_2] = (arr_9 [i_2] [1]);
    }
    var_20 = (((1 - 20) ? (((((235 ? 21 : 217)) - 1))) : var_0));
    #pragma endscop
}
