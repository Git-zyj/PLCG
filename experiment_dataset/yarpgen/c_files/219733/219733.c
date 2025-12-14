/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = (-123 + -var_11);
                            var_13 ^= (arr_0 [i_0]);
                            var_14 *= 1;
                            var_15 = ((((!(arr_1 [i_3 - 1]))) ? (--31) : (arr_3 [i_0] [i_1])));
                        }
                    }
                }
                var_16 ^= ((((((arr_1 [i_0]) ? var_11 : (arr_1 [i_1])))) && ((min((~2188329477), var_2)))));
            }
        }
    }
    var_17 = ((-(((((var_7 ? var_8 : var_9))) ? var_0 : (~var_3)))));
    var_18 = ((((((var_1 ? var_10 : 65535)) & 18)) <= var_6));
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_20 = (max(var_20, ((max(((var_8 ? (var_8 && var_3) : 18)), (!var_3))))));
                arr_16 [i_4 - 1] [i_4] [i_5] = arr_11 [i_4] [i_5];
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 = min((arr_13 [i_4 - 1]), (((arr_22 [i_4 - 1] [i_4] [i_6] [14] [i_6 + 1] [i_4]) / 17987178341235928350)));
                                var_22 *= 19;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
