/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_7;
    var_14 &= var_9;
    var_15 |= (var_0 > var_6);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((var_2 == ((64777 ? var_6 : var_1))))) == (((18446744073709551615 <= (max(var_10, (arr_1 [i_0]))))))));
        arr_3 [2] [2] &= var_5;
        var_16 = (var_7 / var_5);
        arr_4 [i_0] = var_9;
        var_17 -= var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_1));
        var_19 = (max(var_19, (var_8 / var_8)));
        var_20 = 18455;
    }
    #pragma endscop
}
