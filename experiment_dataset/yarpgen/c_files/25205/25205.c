/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 = var_0;
            arr_6 [i_0 + 2] = var_11;
            arr_7 [7] [1] = (~-4375);
            var_14 = (!1);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_15 = -304012655;
                var_16 += (127 || 1);
                var_17 ^= (!-1);
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_14 [1] [i_3] = (~4385321215171045535);
                var_18 = 1584424960;
                arr_15 [i_3] [i_1] [i_0 + 2] = (1 ? ((-1751392046 ? 3263869906568431776 : (!10))) : var_7);
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_19 *= (!103);
            var_20 = ((var_0 ? (~125) : 10));
        }
        var_21 = ((25381 ? 0 : 1408104391));
        var_22 = (max(var_22, (((~var_9) ? 2305707023819604367 : (max(var_10, 8669))))));
    }
    var_23 = (max(var_23, ((max(1, var_7)))));
    #pragma endscop
}
