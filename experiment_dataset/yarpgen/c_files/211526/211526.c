/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += min(16, var_0);
    var_18 = var_3;
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 *= (((arr_1 [i_0]) | (arr_1 [2])));
        arr_2 [7] [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [1] = 22;
        var_21 = (min(((-(arr_3 [i_1]))), -1991175744601425900));
        var_22 = (min((((~((1 & (arr_4 [i_1])))))), ((-1 ^ (min(var_2, var_6))))));
        var_23 -= ((var_16 ? (min(var_14, 92)) : (37 && 24070)));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_24 = (min(((-(arr_6 [i_2] [i_2 - 2]))), (arr_6 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_25 -= ((-27676 ? (var_9 && 3) : 24101));
            var_26 |= (arr_3 [i_2 + 1]);
        }
    }
    var_27 = ((-(((((var_5 ? 24091 : var_5))) ? var_5 : var_9))));
    #pragma endscop
}
