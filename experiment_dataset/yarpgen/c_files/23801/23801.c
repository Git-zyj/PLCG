/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_9, (max(var_0, var_12))))) ? (var_7 > var_10) : ((min(40602, var_3)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min((var_2 * 1), (max(-4587340641784674809, -25587))));
        var_15 = 40607;
        var_16 = (max(24928, 3966970017));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_17 -= (arr_0 [i_1] [i_1]);
        var_18 = (((~(arr_2 [i_1 + 1]))));
        arr_6 [i_1] &= ((4179038225 ? ((-1586335359173877411 ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]))) : -32180));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 = ((-(arr_8 [i_2] [i_2])));
        var_20 = ((40587 ? ((((arr_10 [i_2]) > var_12))) : ((((arr_9 [i_2] [i_2]) || 9459306124954234079)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_21 = var_13;
        var_22 = (min(var_22, 9459306124954234079));
        var_23 |= var_2;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_4] [i_5] = (((arr_10 [i_4]) | var_8));
            arr_20 [i_4] [i_4] = 53464;
            var_24 = (max(var_24, var_11));
        }
        var_25 = (min(var_25, ((min((((-(!53464)))), (((arr_8 [i_4] [i_4]) | 2185315933)))))));
        var_26 = (min(var_26, (((max((arr_16 [i_4]), (arr_16 [i_4])))))));
    }
    #pragma endscop
}
