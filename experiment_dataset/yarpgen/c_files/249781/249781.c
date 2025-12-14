/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((!64), var_3))) ^ var_11));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, 1008));
        var_14 = 255;
        arr_3 [i_0] = var_3;
        arr_4 [i_0] [i_0] = (arr_0 [4] [i_0]);
        var_15 |= ((~((var_0 ? 2013265920 : (!var_10)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((!(arr_5 [i_1] [i_1]))));
        arr_9 [i_1] [i_1] = var_7;
        var_16 = var_0;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_10 [12]);
        var_17 |= (((arr_11 [i_2] [1]) ? (arr_10 [i_2]) : var_2));
        var_18 = max(var_6, (((3805883523 ? 224 : (arr_10 [i_2])))));
    }
    #pragma endscop
}
