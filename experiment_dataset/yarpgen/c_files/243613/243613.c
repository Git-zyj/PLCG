/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 -= (arr_1 [i_0]);
        var_16 = var_2;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (21906 != 128);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_17 = (arr_0 [i_1] [i_2]);
                    var_18 = -var_2;
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [i_2] [i_3] [i_5] [i_3] = (((((0 ? var_11 : -21907))) && (!128)));
                    arr_18 [i_3] = (((((-21907 && (arr_2 [i_5])))) | (arr_4 [i_1])));
                    arr_19 [i_2] [i_3] [i_3] = (arr_11 [i_1] [i_1] [16] [0]);
                }
                var_19 = 139;

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    arr_23 [i_3] = ((var_7 ? (arr_10 [i_3] [i_3]) : 128));
                    arr_24 [i_1] [i_3] [i_6] = (((((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | 128)) << (((((arr_8 [16] [i_2] [6]) ? 128 : (arr_6 [16]))) - 127))));
                    arr_25 [i_1] [i_1] [i_1] [2] [i_1] [i_1] |= 128;
                }
            }
            var_20 = (max(128, 128));
            var_21 &= (((-var_0 | (!116))));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_22 = (21906 % 32);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_7] [i_7] [i_7] [i_8] [i_7] [i_8] = (((((var_3 ? -16 : (var_10 || 129)))) ? (((!(arr_12 [i_7] [i_11 + 1] [i_8] [i_10] [i_11])))) : var_9));
                                var_23 = (max(var_23, ((max(8818976793181593196, ((((((~(arr_15 [i_7] [i_7] [i_7] [i_9] [i_10] [i_11 + 1])))) | (arr_29 [i_7])))))))));
                                var_24 = (min(var_24, (((!(((116 ? (!-1) : -var_10))))))));
                                var_25 = (min(var_25, ((-32 * (max(var_12, ((43 / (arr_20 [i_7] [i_7] [i_9] [i_10] [6] [i_11 + 1])))))))));
                            }
                        }
                    }
                    arr_40 [i_8] = (+-127);
                    var_26 = (-(((((1 + (arr_29 [i_7])))) - ((7935239663638913460 - (arr_3 [i_8]))))));
                }
            }
        }
    }
    var_27 = (var_10 && var_1);
    #pragma endscop
}
