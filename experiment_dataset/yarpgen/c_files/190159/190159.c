/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [7] = 0;
        arr_3 [i_0] [i_0] = (min((arr_1 [i_0] [i_0]), (((!(((var_7 ? 2147483647 : var_4))))))));
        arr_4 [i_0] = 255;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = ((var_3 ? ((((arr_1 [i_1] [i_1]) || var_8))) : 13856));
        arr_8 [i_1] [i_1] = ((0 ? 255 : 1124743274));
        arr_9 [0] [i_1] = 124;
        arr_10 [i_1] = var_5;
        arr_11 [i_1] = (arr_0 [i_1] [i_1]);
    }
    var_10 = ((((max(7, var_9))) ^ var_9));
    var_11 = ((-(~13856)));
    #pragma endscop
}
