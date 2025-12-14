/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((max(((max(var_11, var_4))), var_0)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = ((-(arr_1 [6])));
        arr_5 [i_0] [i_0] = ((~(((18 <= ((((2043255899 >= (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((((max((arr_2 [i_1]), var_1))) || 536870911));
        arr_10 [i_1] = var_13;
        arr_11 [i_1] [i_1] = (((-7464149882105734292 / (arr_0 [i_1]))) / (var_14 * var_10));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_16 [i_2] = ((~(((arr_2 [i_2]) ? (max(var_6, var_8)) : ((((arr_12 [i_2] [i_2]) ? (arr_7 [i_2]) : var_9)))))));
        var_17 = (max(var_17, (((((var_0 ? (((arr_13 [14]) & 150)) : var_9)) ^ ((((var_8 ? var_3 : var_7)))))))));
        arr_17 [i_2] = -var_3;
    }
    var_18 = var_9;
    var_19 = ((1 | ((~(var_13 || 18)))));
    #pragma endscop
}
