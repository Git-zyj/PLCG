/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (~var_3);
        arr_10 [i_1] = (arr_7 [i_1] [i_1]);
        var_14 = (max(var_14, var_5));
        arr_11 [i_1] = (((~(arr_2 [i_1] [i_1 + 3]))));
        arr_12 [i_1] = var_2;
    }
    #pragma endscop
}
