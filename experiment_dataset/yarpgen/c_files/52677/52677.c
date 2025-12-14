/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 5473556087577832150;
    var_16 = (min(15, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_5;
                var_17 += ((+((((var_2 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1]))) + var_6))));
                arr_6 [i_0] [i_0] = (arr_3 [i_0]);
                var_18 -= (((((((!(arr_3 [i_1]))) ? -var_12 : (((arr_0 [i_1]) * (arr_4 [12] [i_1 + 3])))))) - -4294967281));
                arr_7 [i_0] [i_0] = (4294967280 > -85);
            }
        }
    }
    var_19 = var_11;
    var_20 = ((((min(var_7, var_4))) ? (((((var_8 ? var_2 : var_0)) > (!124)))) : var_9));
    #pragma endscop
}
