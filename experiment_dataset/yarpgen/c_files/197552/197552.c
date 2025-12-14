/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-((((arr_1 [i_0]) < var_4)))))) >= ((var_7 ? ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (5405 - 5397)))) : (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = min(((((arr_1 [i_0 + 1]) < (arr_1 [i_0 + 1])))), 24341);
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_19 = (max(var_19, ((min(1117, (arr_5 [16]))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_20 = (arr_9 [11] [11]);
            var_21 = (-5406 >= 0);
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_22 = ((var_5 ^ (((-127 - 1) ? var_15 : ((min(-21, -5392)))))));
                arr_14 [i_3] [i_3] [i_3] = var_5;
            }
        }
    }
    var_23 = -var_16;
    #pragma endscop
}
