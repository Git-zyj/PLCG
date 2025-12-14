/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, var_6));
        var_13 *= 9995283301543756196;
        arr_3 [i_0] = 1;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_14 = (((((~(~7680597192832083490)))) ? ((var_4 / (arr_5 [i_1] [i_2]))) : (((((var_2 ? (arr_7 [i_1] [i_1] [i_1]) : -7)) >= var_10)))));
                var_15 -= (((((var_2 ? (arr_8 [i_1] [i_1]) : ((var_1 ? (arr_4 [12]) : var_7))))) ? 9995283301543756196 : ((((var_3 >= ((1 ? -6487245436154620521 : (arr_5 [i_1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
