/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(min(var_3, -1476038969))));
    var_11 = 1476038943;
    var_12 = ((!(((-((min(8048, var_1))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 115;
        arr_4 [i_0] = (98 * 0);
        var_13 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1])));
        var_14 = (arr_1 [i_1]);
        var_15 = (--85);
        arr_8 [i_1] = (arr_6 [i_1]);
    }
    #pragma endscop
}
