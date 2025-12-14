/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((-127 - 1) + 2147483647)) >> (var_5 - 110))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 -= (var_7 != 29720);

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [10] [i_4 + 1] [i_1] = 2;
                            arr_13 [i_0] [11] [i_1] [i_2] [i_3] [i_0] = ((var_0 ? 4657 : 21680));
                            arr_14 [i_0] [3] [i_2] [i_3] [i_4 + 1] = 18066;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_13 = var_6;
                            var_14 = 4992149482461386150;
                            var_15 ^= 63821;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_6] [i_6] [i_6] [0] [i_6] = (((((var_8 ^ var_9) + 9223372036854775807)) >> 2));
                            var_16 = ((1705 ? 1715 : 2));
                            var_17 = -26051;
                        }
                        arr_22 [i_3] = 3096362249;
                        var_18 = (max(var_18, ((((-21674 ? 44127 : 212))))));
                        arr_23 [i_1] [i_2] [i_2] = (((((var_3 ? 6520589502001925538 : var_1))) ? 3129647038 : 30055));
                    }
                    arr_24 [12] = 1699;
                    var_19 *= 26404;
                    var_20 = (max(63821, (~1014576732)));
                }
            }
        }
    }
    #pragma endscop
}
