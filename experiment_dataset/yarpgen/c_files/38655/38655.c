/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    var_11 = ((((var_7 ? var_2 : var_3))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = var_0;
            var_13 = (((((2066862703 ? (max((arr_6 [i_0] [i_1] [i_1]), 4207786862514522876)) : (14238957211195028723 * var_4)))) ? -508246761 : ((8393675907193606906 ? 14238957211195028744 : 16320))));
            var_14 = (max(var_14, (arr_1 [i_0] [i_0])));
        }
        var_15 |= ((!((((max(12608, (arr_0 [i_0])))) || (-2147483647 - 1)))));
        var_16 -= ((max(((((arr_2 [i_0]) ? -1 : 50817))), (max(var_0, 4492595645283477052)))));
        var_17 = (!-4492595645283477063);
    }
    var_18 = ((!(~2147483647)));
    #pragma endscop
}
