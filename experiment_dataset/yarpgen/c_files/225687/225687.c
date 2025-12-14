/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((((((min(1179671881, 0))) || (var_10 >= var_11)))) != (((((5065146046220597945 ? 1 : 0)) >= 0)))));
                arr_4 [i_0] |= (max(var_0, ((((173 ? var_15 : -2030820043)) + (-966530275 > var_3)))));
                arr_5 [i_0] [i_1] = max(((0 ? (((((arr_3 [i_0] [i_0] [i_0]) == 1262263698)))) : (7034736063491484546 & var_10))), ((((arr_3 [i_0] [i_0] [i_1]) ? -1698 : 137144928))));
                arr_6 [i_0] = ((max(2147483648, 18446744071562067968)) >> (((min((1 + 18446744071562067968), -var_8)) - 17759579355776376013)));
            }
        }
    }
    var_20 = (max(var_20, ((var_16 ? ((var_10 + (min(1, 4294967295)))) : 1))));
    #pragma endscop
}
