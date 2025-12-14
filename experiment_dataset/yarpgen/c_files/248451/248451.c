/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((max(var_1, (5718 & var_5)))) ? ((((((var_7 ? 5718 : var_10)) > var_6)))) : (min(-6859, (max(var_4, -5719)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 -= var_8;
                var_13 = ((4294967295 ? var_4 : var_8));
                arr_5 [2] [i_0] = ((var_5 ? ((((min(var_10, 8658))) ? (max(var_0, var_2)) : var_7)) : (((((var_2 ? var_6 : -6841)))))));
                arr_6 [i_0] [i_0] = ((-((var_5 ? var_8 : var_10))));
                var_14 = (max(var_14, (((((((min(27007, 148))) ? (arr_2 [8]) : (((38226 ? var_2 : (arr_1 [12]))))))) ? (min(((var_1 ? var_5 : var_7)), ((max((arr_1 [2]), (arr_4 [6])))))) : 14))));
            }
        }
    }
    #pragma endscop
}
