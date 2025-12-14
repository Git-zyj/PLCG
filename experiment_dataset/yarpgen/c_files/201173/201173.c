/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = var_10;
                    var_18 = (max(var_18, (((~(min(((21 ? 36777 : (-9223372036854775807 - 1))), (~var_12))))))));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((!((min(((var_10 ? var_6 : var_9)), ((max(var_12, var_13)))))))))));
                        var_20 = (((!var_9) ? var_3 : var_4));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_21 = -32751;
                            var_22 ^= max(var_3, 0);
                            var_23 = ((max((~var_14), var_14)));
                            var_24 += (~7);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [2] [2] [i_2] [i_0] [2] [7] = var_0;
                            var_25 = var_3;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_26 = (~var_7);
                            var_27 -= -var_4;
                            arr_20 [i_0] [i_0] [i_2] [1] = (!0);
                            var_28 = ((-16819 ? (((min(var_9, (max(var_4, var_8)))))) : (min(var_7, var_8))));
                            var_29 = (min((~var_12), (min((min(var_5, var_2)), ((min(var_7, var_6)))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_30 &= 123;
                            var_31 = (min(var_15, var_6));
                        }
                        var_32 = var_13;
                    }
                    arr_24 [i_2] [5] = (max((((var_8 ? var_14 : var_13))), var_8));
                }
            }
        }
    }
    #pragma endscop
}
