/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_8 [12] [i_0] &= (var_12 && var_9);
            var_14 += (((((((arr_2 [i_0] [i_1]) >= (max(-1152921504606846976, 1)))))) <= (min((arr_0 [i_1]), (min(3140410402782537287, (arr_4 [i_0 - 1])))))));
            var_15 = ((((min((arr_3 [i_1] [i_0 + 2]), 10820))) ? (((~(((var_7 && (arr_3 [4] [5]))))))) : ((max(var_12, (arr_7 [i_0 + 4] [7] [i_1]))))));
        }
        var_16 = var_3;
        var_17 = (-68 > 1);
        arr_9 [i_0 + 3] = ((var_8 ? (-32767 - 1) : var_3));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_18 = (max(var_18, -107));
        arr_13 [i_2] [i_2] = ((var_0 ? ((-(arr_12 [i_2 + 1] [3]))) : (min((arr_11 [i_2 + 1]), 17))));
        arr_14 [i_2] = (max((min((((arr_12 [i_2] [i_2]) ^ var_6)), (arr_12 [7] [i_2 + 1]))), ((((min(1, 3))) ? 80 : (-26030 * 0)))));
        var_19 = 2800174470;
    }
    var_20 = var_12;
    #pragma endscop
}
