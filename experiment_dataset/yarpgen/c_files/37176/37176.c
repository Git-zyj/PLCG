/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_10 = (((((var_7 ? var_2 : var_9))) ? ((var_6 ? var_6 : var_8)) : ((var_3 ? var_8 : var_6))));
            var_11 = var_3;
            var_12 = (max(var_12, var_1));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_13 = (((((var_6 ? var_1 : var_3))) ? var_4 : ((var_9 ? var_8 : var_9))));
                var_14 ^= ((!(((var_0 ? var_0 : var_6)))));
            }
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                var_15 = (max(var_15, ((((~var_4) ? var_7 : ((var_5 ? var_9 : var_8)))))));
                var_16 = var_4;
            }
            var_17 = (((((var_1 ? var_5 : var_0))) ? ((var_4 ? var_9 : var_1)) : var_1));
            var_18 = (((((var_6 ? var_4 : var_1))) ? var_0 : ((var_5 ? var_6 : var_0))));
            var_19 = ((var_1 ? ((var_7 ? var_4 : var_5)) : var_0));
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_20 = (((((var_6 ? var_0 : var_1))) ? ((0 ? 95 : 14097)) : ((var_7 ? var_1 : var_8))));
                    var_21 = (((~var_7) ? ((var_2 ? var_7 : var_5)) : var_7));
                }
            }
        }
        var_22 = ((var_5 ? (~var_0) : (!var_0)));
    }
    var_23 = -var_7;
    #pragma endscop
}
