/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? 255 : var_4));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 -= (min((min(var_3, (min(var_0, (arr_1 [14]))))), (arr_4 [i_0 - 2] [i_1] [19])));
            var_16 *= ((-(max(((max((arr_4 [i_0 - 1] [i_1] [i_0 - 1]), var_3))), ((var_0 ? var_5 : 102))))));
        }
        arr_6 [i_0] = (~9858005507479891553);
        var_17 += (max(((((arr_5 [i_0] [13] [i_0 - 1]) ? 7 : var_5))), 1));
        var_18 = 3128613177384560355;
    }
    var_19 = var_1;
    #pragma endscop
}
