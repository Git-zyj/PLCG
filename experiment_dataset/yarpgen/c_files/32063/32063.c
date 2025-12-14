/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, 0));
        var_16 = -11136;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = (arr_5 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] &= (~-95);

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                arr_11 [i_3] [i_1] = 127;

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_18 = (((+-0) ? (arr_16 [i_2] [i_4] [1] [i_5]) : 7894575262326005111));
                        var_19 -= (arr_7 [i_2] [3]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        var_20 -= var_11;
                        arr_20 [i_2] [i_4] |= (arr_14 [i_3 + 3] [i_3 - 2] [i_3 - 2] [i_3 - 1] [12] [i_3] [12]);
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_6] = ((!(((4294967295 ? 4294967285 : (arr_6 [i_1] [i_1]))))));
                        var_21 = (10420217966288077032 & 4294967270);
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                    {
                        var_22 &= var_6;
                        arr_24 [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] [i_1] = (((~((0 ? 5 : var_3)))));
                    }
                    arr_25 [i_1] [i_2] [i_4] [i_4] = var_12;
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    var_23 = (max(var_23, ((max(3246196481, 1)))));
                    var_24 = (min(((min((max(26192, -8)), (arr_9 [i_3])))), -var_3));
                    var_25 = var_3;
                    arr_28 [i_2] = var_8;
                }
            }
        }
        var_26 ^= (~1);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                {
                    var_27 = ((5 ? (!-1) : 1));
                    arr_35 [i_1] [i_1] [i_10 - 3] = (max(var_6, 0));
                    arr_36 [i_1] [i_9] [i_9] [i_10] = ((var_0 * ((var_6 >> (((arr_19 [i_10] [16] [16] [i_9]) - 31443))))));
                }
            }
        }
    }
    var_28 = -46;
    var_29 = (min((((0 ? var_11 : var_5))), (~1)));
    var_30 *= -6;
    #pragma endscop
}
