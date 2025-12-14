/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (max((min(16594345748533931667, -9)), (((!(((11 ? var_15 : -2014281524))))))));
        var_20 = (((((~(arr_2 [i_0])))) != ((((var_1 / 16594345748533931667) != (arr_0 [i_0]))))));
        var_21 = (min(var_21, var_12));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 *= (arr_5 [i_1] [1]);
        arr_7 [i_1] [i_1] = ((-(max(-52, (min(var_6, 1852398325175619948))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_5 [i_2] [16])));
        arr_10 [i_2] = 5;
        var_24 = (52 != 1852398325175619936);
    }
    var_25 = ((!((((((1852398325175619948 ? var_15 : var_5))) ? -31997 : 27703101)))));
    var_26 = var_15;
    #pragma endscop
}
