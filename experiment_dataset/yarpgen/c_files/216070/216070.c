/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (!25642)));
    var_11 = ((25642 ? ((104 ? var_8 : (!3279403922))) : 68));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = (arr_1 [17]);
        var_13 = (~var_3);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((~(arr_3 [i_1])));
        arr_5 [i_1] [i_1] = (-127 - 1);
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_14 = (((((-(arr_7 [i_2] [i_2])))) ? (!var_6) : (!40)));
        arr_9 [i_2] [i_2] = ((-var_3 ? 4751178213842095781 : -var_2));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_15 = ((((!(arr_1 [i_3]))) ? var_3 : (arr_8 [i_3])));
        var_16 = ((17765 ? var_5 : 469762048));
    }
    var_17 = var_1;
    #pragma endscop
}
