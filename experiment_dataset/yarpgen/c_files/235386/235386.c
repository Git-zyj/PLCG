/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((-2 + var_9), ((((var_4 ? var_5 : var_2)) | var_0))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = var_3;
        arr_4 [13] = ((((-2 ? 1 : (arr_2 [i_0]))) + (min((((0 ? 255 : 27580))), -2467598056377372436))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_8 [i_1])));
        var_15 = max(((((arr_0 [6] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [2] [i_1])))), (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : var_10)));
        arr_9 [i_1] = ((((min(1, (max(-2, 2047))))) ? 88465959157285946 : var_0));
    }
    #pragma endscop
}
