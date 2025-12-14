/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 *= ((!(~-4583)));
        var_12 = ((-11333 >= (arr_1 [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_1] [i_4] [i_4]);

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_13 *= arr_6 [i_1] [i_3] [i_1];
                            var_14 += ((-11337 ? 11316 : -11333));
                            var_15 = ((!(arr_3 [i_1])));
                            var_16 *= ((-11316 ? (arr_10 [i_5] [i_4] [i_3] [i_2]) : (!11333)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 = (max(var_17, (arr_17 [i_3] [i_3] [i_6] [i_4] [i_6])));
                            var_18 = (max(var_18, (((-(arr_16 [i_1] [i_1] [i_3] [i_6] [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
        var_19 -= 11353;
        arr_20 [i_1] [i_1] = ((var_1 ? var_7 : var_7));
        var_20 = (((arr_10 [i_1] [i_1] [i_1] [i_1 + 3]) & (arr_3 [i_1])));
        var_21 = 11339;
    }
    #pragma endscop
}
