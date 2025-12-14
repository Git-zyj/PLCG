/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_1] [i_1 + 2] = min(893089576, 3401877736);
                arr_5 [i_0] = (!1757598151);
                var_12 = ((~((((min(var_5, var_10))) ? ((var_7 ? var_0 : var_2)) : var_2))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] &= var_7;

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_13 *= (!-8192);
            var_14 = ((-(min(var_11, var_3))));
            arr_12 [i_2 - 1] = ((!((min(var_9, var_0)))));
            arr_13 [i_2] [i_2] = (max(var_11, var_7));
        }
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            var_15 = (((((min(var_7, var_2)) << (((var_7 * var_2) - 18276263856273743745)))) >> (var_11 + 10878)));
            var_16 = var_6;
            var_17 = (((((var_10 ? var_10 : var_10))) ? (!var_3) : ((max(var_6, var_6)))));
            var_18 = (min(8191, 240));
        }
        var_19 = ((((var_4 & var_1) ? (min(533021495, 0)) : (((21539 ? -1186151731 : -14533))))) << (var_6 - 10127));
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_20 = ((-(min((((var_3 ? var_4 : var_9))), ((var_9 ? var_4 : var_7))))));
        var_21 = (min(var_1, (((21560 ? 126 : 126)))));
    }
    var_22 = var_8;
    var_23 = var_6;
    #pragma endscop
}
