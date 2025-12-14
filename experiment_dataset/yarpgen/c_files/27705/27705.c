/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-var_4 ? 0 : (!var_4))) - 14896262980800730713));
    var_13 = ((var_2 ? ((var_2 ? var_11 : (max(var_2, var_1)))) : var_0));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (~-4180);
        arr_3 [i_0] [i_0] = ((((~(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) / 2288334551));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 ^= ((arr_1 [18]) * (arr_6 [i_1] [i_1]));
        var_15 = ((var_11 >= ((((!(arr_6 [i_1] [i_1])))))));
        var_16 = var_9;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 = 1056964608;
        var_18 = (((arr_7 [i_2]) ? ((((var_6 > ((var_11 ? var_1 : (arr_1 [i_2]))))))) : ((((max(var_1, 64598))) ? (arr_9 [i_2]) : var_9))));
        var_19 = (((arr_7 [i_2]) | (((arr_7 [i_2]) & var_10))));
        var_20 ^= ((-var_10 ? ((((!(var_7 + var_3))))) : (max((52998 / var_11), (arr_7 [i_2])))));
    }
    #pragma endscop
}
