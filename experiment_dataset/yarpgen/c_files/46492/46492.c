/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 *= 1401698131;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 = 0;

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_3] [7] [12] [i_3 + 1] = (4206593915 ? (!1402500035) : -var_7);
                        var_15 = (min(var_15, 4206593915));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((~1215573128) ? (~var_9) : (~var_8)))));
                        arr_17 [14] [4] [i_1] [21] [14] = ((!(((1119446074 ? 395613024 : 3266606264)))));
                        arr_18 [i_0] [i_0] [5] = 684109738;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, 3079394168));
                        var_18 *= 2263328015;
                        arr_21 [i_1 + 1] &= var_1;
                    }
                    var_19 = var_9;
                    arr_22 [i_0] [i_0] [i_0] [i_2] = (-(((((var_9 ? var_1 : var_2))) ? var_3 : (~2027733297))));
                }
            }
        }
    }
    #pragma endscop
}
