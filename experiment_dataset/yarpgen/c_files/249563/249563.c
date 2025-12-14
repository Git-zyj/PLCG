/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -19;
    var_12 = 20;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_1 + 1] [i_0] = (min(((min(19, (max(47, -7))))), (min(var_6, -23591))));
            var_13 += 51231;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = var_8;
            var_15 = (((min(var_5, -9743))));
        }
        arr_9 [i_0] = var_5;
        var_16 = -5693014729393862095;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = 51231;
        arr_15 [i_3] = var_1;
    }
    #pragma endscop
}
