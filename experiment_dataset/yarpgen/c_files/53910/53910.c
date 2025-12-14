/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_0;
                var_12 *= ((1 ? ((((((-90 ? -83 : 1))) ^ (arr_1 [i_0])))) : 17880352798187272500));

                for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_1] [i_1] = 34547;
                                var_13 = ((((((var_1 ? 4294967291 : var_5))) ? var_4 : (max(-1871560311, 3980826751)))));
                                arr_17 [i_2] [i_2] [i_2] [i_3] [3] [i_2] = ((var_6 ? 4163495489 : (arr_9 [i_4] [i_3] [i_2])));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_2] = (((~(arr_5 [i_0] [i_1]))));
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_1] [i_5] = (arr_19 [8] [i_1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_14 = (min(((1 * (((var_0 ? var_0 : var_7))))), var_6));
                                arr_27 [i_5] [i_1] [i_5] = 131471807;
                            }
                        }
                    }
                    arr_28 [i_5] [i_1] [2] [i_5] = (((((min((arr_25 [i_5] [i_5] [i_1] [i_0] [i_0] [i_0]), var_6)) & (~1))) < (((~((min(8, (arr_2 [i_5])))))))));
                    arr_29 [i_5] [i_5] = ((min(((1 ? 17880352798187272501 : -90)), 64)));
                }
            }
        }
    }
    var_15 = (!-1);
    #pragma endscop
}
