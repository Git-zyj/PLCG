/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(255, 0))) || 1)) ? var_5 : ((((var_12 || (!var_12)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 += (~var_3);
        arr_2 [i_0] = ((~((var_9 ? var_7 : var_11))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_18 = var_8;
            arr_5 [3] [i_1] [3] = ((var_12 * (var_10 || var_13)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = ((var_10 != ((max(1, 0)))));
                        arr_10 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] = ((((max(((max(var_1, var_2))), var_8))) ? ((-var_13 - (-603579387 < 1))) : var_13));
                        arr_11 [i_0] [6] [i_2] [i_3] [i_1] = ((var_14 ? ((var_13 ? 603579386 : var_10)) : ((-((var_11 ? var_3 : var_4))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((((!(144 * 1)))) / var_13);
                    }
                }
            }
            var_20 |= min(((~(~var_0))), ((~(min(603579386, var_10)))));
            var_21 = 603579386;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_22 = (var_8 != var_14);
            arr_16 [i_0] [i_0] [i_0] = (!var_4);
            var_23 = ((var_13 ? (1 ^ var_3) : var_8));
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_24 = max((max(var_5, var_5)), ((min((603579387 ^ var_6), var_9))));
        var_25 &= var_1;
        arr_19 [6] |= (max((var_7 + var_1), (~4294967290)));
        var_26 = (((((var_10 ? (~-30267) : ((max(var_15, var_14)))))) ? (((var_3 | var_5) ? var_11 : (var_14 & var_6))) : ((((max(var_7, var_0))) ? var_7 : (~var_12)))));
    }
    var_27 &= (max(((~(var_0 | var_7))), (!var_10)));
    #pragma endscop
}
