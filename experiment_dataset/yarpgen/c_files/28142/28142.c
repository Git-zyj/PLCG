/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((9223372036854775807 ? 27953 : 14))) ^ var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (~var_3);
                            var_19 *= (((((var_9 * var_0) ? ((((-2147483647 - 1) < 19541))) : var_7)) <= ((var_13 ? var_4 : var_7))));
                            var_20 = ((((((var_1 - var_13) != (((var_14 << (var_10 + 1630022511))))))) <= (((var_8 ? var_10 : var_5)))));
                        }
                    }
                }
                arr_9 [i_1] [i_0] [i_1] = (((((((var_9 ? var_12 : var_1)) != (var_1 - var_5)))) + var_6));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_16 [0] [i_1] [3] [i_1] [1] = (((((var_2 >= var_16) << (((var_10 % var_16) - 1531703950828415806)))) % (((!var_1) ? (!var_4) : -var_11))));
                            var_21 += var_7;
                            arr_17 [i_1] [i_1] = ((((((var_13 >> var_9) * (~var_6)))) || ((((var_5 & var_3) | var_10)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_9 || ((((var_15 * var_2) + (((var_1 ? var_7 : var_10))))))));
    #pragma endscop
}
