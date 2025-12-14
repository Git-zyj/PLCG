/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (!1);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = (1 >> (((max(var_5, -11745)) - 18446744073709539852)));
            arr_7 [i_1] [i_1] [i_0] = 1;
            arr_8 [i_0] [i_1] = 120;
        }
    }
    var_15 = 62481;
    var_16 = ((var_2 ? -var_7 : var_7));
    #pragma endscop
}
