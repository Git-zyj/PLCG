/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 -= 0;
        arr_2 [6] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [5] = ((((max((arr_4 [i_1]), (arr_5 [i_1])))) ? 0 : (arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_19 = (max(var_19, ((max((arr_7 [i_2] [i_2] [i_2]), (((!(arr_8 [i_1] [i_2])))))))));
            var_20 = (max(var_20, ((0 ? ((((max((arr_9 [1] [i_2] [i_1]), 1))) ? (arr_8 [17] [i_2]) : (arr_3 [i_1]))) : ((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))))));
        }
        arr_10 [i_1] &= (!1);
    }
    var_21 = var_6;
    var_22 = ((!(~var_15)));
    #pragma endscop
}
