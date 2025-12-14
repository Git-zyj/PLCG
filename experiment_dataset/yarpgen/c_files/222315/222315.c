/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 14;
    var_17 = (max((8 - 31312), (max(0, (-15 + 9887108955241587554)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [1] = var_2;
        var_18 *= ((31312 ? (((arr_2 [i_0 + 1] [i_0 + 1]) ? -9 : 51821)) : (!var_4)));
        var_19 = (!-1);
        var_20 = (-127 - 1);
        arr_4 [i_0] [i_0] &= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (max(8, 18446744073709551615));
        var_21 = (max(var_21, (((-(((-1677335945668670763 ^ 8) ? -var_9 : ((var_0 >> (var_14 - 26961))))))))));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [i_2] [i_2] = (arr_6 [5]);
            var_22 = (max(var_22, (((!((((((var_14 ? (arr_0 [i_2] [i_1]) : (arr_0 [i_2] [i_1])))) ? ((var_4 ? var_0 : (arr_9 [15] [8]))) : ((min(var_2, (arr_11 [1] [8]))))))))))));
        }
    }
    #pragma endscop
}
