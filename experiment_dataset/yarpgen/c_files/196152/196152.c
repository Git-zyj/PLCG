/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_7));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 &= ((((arr_0 [i_1]) + (arr_3 [10]))));
            arr_4 [1] = (arr_3 [i_1]);
        }
        arr_5 [i_0] = ((((max((arr_0 [8]), (arr_2 [i_0] [i_0])))) < (~1)));
        var_22 = (max((arr_3 [i_0]), 0));
        var_23 -= (((((((32748 ? -21 : 22))) ? ((-355148633 ? -12 : (arr_2 [i_0] [2]))) : 2147483647)) * var_6));
        var_24 *= (arr_2 [i_0] [9]);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = ((-((((((arr_6 [i_2] [i_2 + 1]) ? var_4 : (arr_7 [i_2 - 1] [i_2 - 1]))) == (arr_7 [13] [i_2 + 1]))))));
        var_25 = ((10921746734706838782 == (((~(arr_7 [i_2] [i_2 + 1]))))));
        var_26 = (max(var_26, (((87 << ((((max((arr_7 [i_2 + 1] [i_2 - 1]), (arr_7 [i_2 + 2] [i_2 + 1])))) + 94)))))));
    }
    #pragma endscop
}
