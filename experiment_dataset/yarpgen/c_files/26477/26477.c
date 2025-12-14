/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_11;
    var_17 -= (max(var_14, (((var_5 ? var_10 : var_12)))));
    var_18 = var_10;
    var_19 = (max(var_19, var_5));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = (min(var_20, ((((~var_3) ? var_11 : (~var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((((var_5 ? var_14 : var_5))) ? var_9 : (((!var_15) ? var_10 : var_2)));
                    arr_9 [i_0] [i_1] [i_1] = var_14;
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = (min(var_21, ((((((((min(var_8, var_7))) ? 296507906 : var_9))) ? (!var_1) : ((var_4 ? var_3 : ((var_8 ? var_4 : var_14)))))))));
            var_22 = (!2015913727);
            var_23 -= var_13;
            var_24 = (((var_4 ? var_9 : var_1)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 = (max(var_25, ((((365065636 ? 38 : 1242586681))))));
            var_26 = (min(var_26, ((((((var_14 ? var_15 : var_14))) ? (~var_15) : (~3707))))));
            var_27 = (min(var_27, ((min(((var_11 ? var_5 : var_7)), (((var_4 ? var_7 : var_0))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_28 -= ((var_12 ? var_0 : var_9));

            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                var_29 = var_1;
                var_30 = -var_14;
                var_31 -= (!var_5);
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_32 = (!var_14);
                var_33 = ((var_1 ? var_3 : var_10));
                var_34 = (min(var_34, (((var_2 ? var_10 : var_4)))));
            }
        }
        arr_22 [i_0 - 1] = (((!var_0) ? var_0 : (max((~var_8), ((min(var_3, var_6)))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_35 = ((-((var_2 ? 2279053568 : 2279053568))));
        var_36 = (max(var_36, ((-(min(((var_2 ? var_0 : var_2)), (!var_7)))))));
    }
    #pragma endscop
}
