/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = 1;
        arr_2 [i_0] = 0;
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_7 [i_1] = 4096;
            arr_8 [i_1 - 1] [i_1] [i_2] = -269031500369561795;
            var_21 -= -1;
            arr_9 [i_1] = ((~(!-4096)));
        }
        var_22 = 4099;
    }
    var_23 = 25405;
    var_24 = ((-(~7)));
    #pragma endscop
}
