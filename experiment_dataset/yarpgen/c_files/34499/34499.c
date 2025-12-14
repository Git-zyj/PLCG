/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((!(((3247648263 ? (min(var_2, 0)) : ((-3806304617072043313 ? var_11 : (-9223372036854775807 - 1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((max((arr_3 [i_0] [i_0]), ((20403 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = var_2;
                            var_22 |= -1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((max(-9223372036854775791, 524287))) ? -1 : (max(3806304617072043313, (-9223372036854775807 - 1)))))))));
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_1] = -var_14;
                                var_24 += (((!-1) && var_15));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (~0);
                                var_25 = (((max(-5162470510169813817, 9223372036854775807)) & (~4968233125076939279)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
