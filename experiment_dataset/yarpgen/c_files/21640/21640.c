/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-(var_9 & var_9)))) ? -2837708684054982994 : var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_8, (-1639 - var_2)));
        var_11 &= ((((((arr_1 [i_0]) ? var_9 : (arr_1 [i_0])))) ? (((-(arr_1 [i_0])))) : (((arr_1 [i_0]) ^ -2837708684054983015))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((((min(11, var_3)))) > var_1)) ? -2837708684054983035 : (((((min((arr_4 [i_1]), var_9))) ? var_3 : 65534)))));
        var_12 = (max(var_12, ((min((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1]))), (!var_7))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((((min(1, -43)) ? (((min(var_4, var_4)))) : (min((arr_8 [i_2]), (arr_5 [i_2])))))))));
        arr_9 [16] = ((var_9 != (arr_8 [i_2])));
    }
    var_14 = (max(-var_8, ((min(0, var_3)))));
    #pragma endscop
}
