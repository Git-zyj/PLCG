/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] = ((var_8 / ((var_3 ? var_5 : (var_7 - var_7)))));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = var_5;
                        arr_11 [i_0] [i_0] [i_2] [i_0] = var_4;
                        arr_12 [11] [i_2] [i_2] [i_3] = (!var_11);
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_16 = ((((var_7 % (63 % 38025)))) ? var_2 : 40555);
            arr_16 [i_0 + 4] [i_4] [i_0 + 4] = var_6;
            arr_17 [i_0 - 1] [i_0 - 1] = var_5;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] = (24965 != var_9);
            var_17 = (min(var_17, 63));
        }
    }
    var_18 = var_13;
    #pragma endscop
}
