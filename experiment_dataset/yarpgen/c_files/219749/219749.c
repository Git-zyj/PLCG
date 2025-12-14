/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = var_15;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [i_1 + 1] [i_0] [i_0] = ((61 ? (((var_18 > ((-(arr_7 [i_2] [i_1] [i_2] [i_0])))))) : ((min((arr_1 [i_1 + 1] [i_0 + 1]), (arr_1 [i_1 + 1] [i_0 - 1]))))));
                    var_21 = var_5;
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = (arr_0 [1]);
                    arr_12 [i_0] [i_1] = (((var_10 <= var_3) < (((-2147483647 - 1) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : 0))));
                    var_22 = ((~((var_4 ? ((var_12 ? (arr_1 [i_0] [i_0]) : (-2147483647 - 1))) : var_14))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_3 - 1] [i_4] [i_4] [i_5] = var_0;
                                var_23 = ((-2147483647 - 1) ? 32 : -1784116214);
                            }
                        }
                    }
                }
                var_24 = (arr_3 [i_0] [7] [i_1]);
            }
        }
    }
    var_25 = (max(var_25, var_1));
    #pragma endscop
}
