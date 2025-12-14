/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_4 & 65506) <= ((min(var_5, var_4)))))) < ((min(var_7, (min(var_5, var_9)))))));
    var_11 = -var_6;
    var_12 = var_7;
    var_13 |= ((var_4 ? ((23 / (65512 ^ var_3))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = 134;
                            arr_12 [3] [i_1] [i_3] [i_3] &= (~1404378203);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 8;i_6 += 1)
                            {
                                arr_22 [1] [5] [i_6] [3] [i_6] [3] = (((((~122) & -var_3)) != 8));
                                arr_23 [i_0] [7] [i_4] [i_4] [i_6] = (arr_16 [i_6] [i_1] [9] [i_5]);
                                arr_24 [i_0] [4] [i_4] [i_5] [4] |= 3;
                            }
                            arr_25 [7] [i_5] = ((!(-1 <= var_2)));
                        }
                    }
                }
                arr_26 [i_1] = (((~-93597979138794641) >= (var_5 & var_1)));
            }
        }
    }
    #pragma endscop
}
