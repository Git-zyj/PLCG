/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    var_19 = (max((((189 / var_7) ? var_10 : (((-32767 - 1) ? 12751 : var_10)))), (((-0 ? ((var_4 ? var_3 : -1090513420)) : (var_5 - 1))))));
    var_20 = var_7;
    var_21 = (min(((((min(-1090513423, var_16))) ? (var_7 >= 9) : ((var_14 ? var_17 : (-32767 - 1))))), (-7514470883603625812 && 60)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : -2081333564))) ? (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [7]) : (arr_3 [i_0] [i_1]))) : ((3019421559 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))));
                arr_6 [i_0] = (arr_0 [i_1]);
                arr_7 [i_1] &= (((-11435 && 151) + 6));
            }
        }
    }
    #pragma endscop
}
