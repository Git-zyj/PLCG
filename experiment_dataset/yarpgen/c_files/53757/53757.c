/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_21 = ((1913749268 ? var_7 : var_0));
                    var_22 = -706018792;
                    arr_10 [i_0] [i_1] [i_2] [i_1] = var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 ^= var_1;
                                arr_15 [i_4] [i_2] [i_2] [i_0] [i_0] &= 1;
                                var_24 = -2144503276;
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_25 = var_16;

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_0] = var_15;
                            arr_26 [i_0] [i_0] [i_5] [i_6] [i_0] = 2461889168326225724;
                        }
                        arr_27 [i_0] [17] [i_0] [i_5] [i_0] [i_0] = var_3;
                        var_26 = 184;
                    }
                    arr_28 [i_0] [i_1] [i_5] = (var_15 < (-5266 == 50137));
                    arr_29 [i_0] [i_5] [11] = (max(((min(706018791, 65535))), var_0));
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    arr_33 [i_0] [i_1] [i_8] = 3283015567;
                    var_27 = ((((min((-706018792 + 35), 706018791))) ? var_3 : 3943162479));
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    arr_37 [i_0] = (-32767 - 1);
                    arr_38 [i_0] [i_1] [i_0] [7] = 922229053;
                    arr_39 [i_0] [i_9] = var_12;
                }
                var_28 = 9223372036854775785;
            }
        }
    }
    var_29 = var_13;
    #pragma endscop
}
