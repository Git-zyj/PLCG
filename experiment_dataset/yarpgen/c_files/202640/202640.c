/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (max(3121631671834662253, -1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        var_16 = (min(var_16, (0 | 4294967295)));
        var_17 = (~var_7);
        var_18 = var_4;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (((var_1 ^ ((min(var_13, var_10))))))));
            arr_8 [i_1] [i_1] [i_2] = ((((((min(1, var_11))) ? (!1) : (max(var_3, var_12))))) * (max((((var_8 ? var_6 : 1823))), var_7)));
            arr_9 [18] = (max(((((~-1) < (min(var_11, var_1))))), (min(var_1, (var_12 + 4294967279)))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_20 = ((var_7 ^ ((max(3359759497, 1)))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_21 ^= ((!(((30844 ? 1994069676 : ((228275324 << (-1 + 14))))))));
                            var_22 -= ((-(max(4095, var_8))));
                            arr_19 [i_1] [i_1] [i_3] [i_5] [i_6] = var_0;
                        }
                        arr_20 [i_1] [i_1] [i_4] [i_3] [i_5] = ((1586974368 ? 1 : 1));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_23 *= (((max((((var_0 ? 1 : var_10))), (max(14, 4095))))) && var_7);
                        var_24 = 1;
                        arr_25 [i_1] [i_3] [i_7] [i_3] [i_3] = 3061717767;
                    }
                }
            }
            arr_26 [i_1] [i_3] [i_1] = 1;
        }
        arr_27 [i_1] = (max((min(1, 41927)), ((min(65524, 1)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = 1;
        arr_31 [i_9] [i_9] = var_5;
    }
    #pragma endscop
}
