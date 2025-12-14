/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 = var_4;
        arr_3 [i_0] = ((!(199 && var_13)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((~(((arr_4 [i_1]) ? 187 : (arr_4 [i_1])))));
        arr_7 [i_1] [i_1] = (min(32767, 17179867136));
        var_21 = (((!((!(arr_5 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((((2097635811 ? 0 : (arr_11 [i_2] [i_2])))) ? (arr_4 [i_2]) : var_9));
        var_22 = 3408153804677836349;
        arr_13 [i_2] = ((arr_8 [i_2]) ? var_13 : 31);
    }
    #pragma endscop
}
