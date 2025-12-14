/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (max((max(37164, 441050020)), var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 ^= (min(441050020, ((1 ? -25024 : 4555023798611240233))));
        var_14 = (min((max(((max(34085, 31018))), 2132238535)), (0 / 6303)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] &= 1528368773;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 *= -5067;
            arr_11 [i_1] [i_2] = ((-25034 ? 5648240200454890055 : 1847449960));
        }
        arr_12 [i_1] [i_1] = (max(((min(34156, 48699))), ((-14452 ? 15170186062919551415 : 34146))));
        var_16 = (((((11168139908385597303 << (25030 - 24991)) | 179))));
    }
    var_17 *= var_0;
    #pragma endscop
}
