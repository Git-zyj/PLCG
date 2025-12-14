/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [1] = ((4201814578 ? ((((1 ? var_12 : 33139)) + ((((arr_2 [i_1] [i_0]) + (arr_2 [i_0] [i_1])))))) : var_5));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = (max(var_16, 408106234));
                    var_17 = arr_1 [i_1 - 2];
                }
                arr_10 [i_0] [i_1] [i_1] = ((((arr_9 [i_1 - 3] [i_1 + 2] [i_1 - 2] [i_1]) ? (arr_9 [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3]) : (arr_9 [i_1 - 3] [i_1 - 2] [i_1] [i_0]))));
                arr_11 [i_0] [i_1 - 3] = (((arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) ? (min(var_5, (((var_12 ? (arr_9 [i_0] [8] [i_0] [i_1]) : (arr_9 [i_0] [7] [i_0] [i_0])))))) : var_2));
            }
        }
    }
    var_18 ^= var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_19 = 1952336956;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 = (-1024 / 1952336962);
                            var_21 = ((-64 ? ((((1 ? var_10 : 1)) - ((32396 ? 19144 : 17236)))) : (((~var_6) ? var_13 : var_11))));
                            var_22 = ((((((max(var_3, var_6))) >> (((((arr_12 [i_5]) & var_8)) - 4493)))) << ((((~((var_14 ? var_7 : (arr_14 [18]))))) - 3144376844))));
                        }
                    }
                }
                var_23 += 244;
            }
        }
    }
    #pragma endscop
}
