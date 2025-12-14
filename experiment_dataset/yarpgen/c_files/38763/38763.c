/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = 39965;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = (((((-(arr_4 [i_1 - 1])))) ? (~10549840773537068250) : ((min((arr_5 [i_1 - 1]), (arr_5 [i_1 - 1]))))));
        var_18 = (max(var_18, ((max(var_13, -6419811120194692783)))));
        var_19 |= (12040241972771115779 && 0);
        var_20 = (-65 > 114);
        var_21 = (min(var_21, var_1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = 0;
        var_22 -= 80;
        arr_12 [i_2] [i_2] = ((((var_5 * (arr_4 [20]))) % (arr_9 [i_2] [i_2])));
        arr_13 [i_2] [i_2] = var_4;
    }
    var_23 = var_15;
    #pragma endscop
}
