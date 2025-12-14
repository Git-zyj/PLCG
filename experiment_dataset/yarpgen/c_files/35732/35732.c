/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((3256 ? (1 < -3269) : var_16));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = 15314589430244385222;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = (min(var_19, (arr_4 [i_1] [i_0] [i_0])));
            arr_5 [10] [i_1] [10] |= var_6;
            var_20 = (((min(var_3, (arr_0 [i_0])))) * (arr_0 [i_0]));
            arr_6 [i_0] = var_11;
        }
    }
    var_21 = var_11;
    #pragma endscop
}
