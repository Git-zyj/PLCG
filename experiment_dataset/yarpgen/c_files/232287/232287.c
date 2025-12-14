/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((0 << (((~65529) + 65559))))) ? var_10 : ((((((var_10 << (var_6 - 21456))) != (((var_15 ? var_8 : -15269)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_21 &= arr_0 [i_0] [i_0];
        var_22 = (((arr_0 [i_0] [i_0]) ? -15259 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_4 [i_1] [i_1]);
        var_24 = (-(((1 <= (arr_2 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_25 = (((var_6 ? (arr_6 [i_2] [i_2]) : var_18)));
        var_26 = var_8;
    }
    #pragma endscop
}
