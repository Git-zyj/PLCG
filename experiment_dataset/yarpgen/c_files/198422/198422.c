/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 - 2] = ((~(arr_0 [i_0] [i_1])));
                var_13 = var_11;

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_14 = (max(var_7, ((max((arr_2 [i_0] [i_0]), (((var_4 ? (arr_6 [i_0] [2] [i_2] [i_1]) : var_10))))))));
                    var_15 = (max(var_15, var_6));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_1] [i_3] = ((101 ? 7713369535978740870 : (-32767 - 1)));
                    var_16 = (max(var_16, var_5));
                    var_17 = 7713369535978740870;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [1] [i_1] [i_3] [i_4] [i_1] = ((((min((arr_13 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 3] [i_4 - 2]), 32767))) ? (arr_13 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1] [i_4 + 2]) : var_2));
                                var_18 = (min(var_18, (10733374537730810743 || 15)));
                                arr_19 [i_0] [i_1] [i_1] [1] [i_5] = var_0;
                            }
                        }
                    }
                    var_19 = (((arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1 + 2]) ? (((arr_8 [i_1] [i_1]) * 7713369535978740870)) : (max(18446744073709551592, 32764))));
                }
                arr_20 [i_0] [i_0] [i_1] = 32740;
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
