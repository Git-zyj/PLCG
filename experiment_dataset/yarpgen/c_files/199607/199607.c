/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max(((max(var_4, ((max(var_10, -113)))))), (var_15 * var_13)));
    var_17 = -113;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        arr_3 [i_0] [1] = (min(3962399175843110668, ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? var_14 : -24425899443236137))));
        arr_4 [i_0] = (max((arr_0 [i_0]), (((arr_1 [i_0]) * 20983))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = (max(var_18, -170080238));
            arr_7 [i_0] = 1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (max(var_19, ((min(((((max(29432, -3403080744540127523))) ? -187851895 : -3632121810642855186)), 1)))));
            arr_10 [i_0] = ((((min(((max(24425899443236136, -24425899443236137))), 972883765486556430))) ? (arr_1 [i_0]) : ((-(arr_6 [i_0])))));
        }
    }
    #pragma endscop
}
