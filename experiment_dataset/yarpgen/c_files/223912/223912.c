/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-(!var_0))));
    var_13 ^= var_7;
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((!(arr_0 [i_0])));
        arr_2 [i_0] = ((var_1 ? (arr_1 [i_0]) : ((((arr_0 [i_0]) * (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = ((max(-8430166911322316385, (arr_6 [i_1] [i_1] [i_0]))));
            var_16 -= (max(var_0, ((max((((var_6 && (arr_1 [i_0])))), 219)))));
            arr_8 [i_1] [i_0] |= (max(var_7, var_3));
            var_17 += (max((arr_6 [i_1] [7] [i_0]), (((var_0 >= (arr_0 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = ((var_8 > (arr_4 [i_0])));
            arr_11 [i_2] = (!-25784);
        }
    }
    #pragma endscop
}
