/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_4)));
                    arr_11 [0] [i_0] = (arr_9 [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1] [i_3] = (arr_15 [1] [i_1] [i_2] [0] [i_0]);
                                arr_19 [i_0] [i_0] = (+((~(((-5245 + 2147483647) >> (var_6 + 13106))))));
                                arr_20 [i_0] [i_1] [i_1] [i_1] = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_25 [i_6] [i_6] [i_0] [i_6] [i_6] = (((((var_5 ? (arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) : (arr_22 [i_0] [i_0 + 1] [i_0] [i_0 - 1])))) ? (arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : ((((arr_22 [i_0] [i_0 + 1] [4] [i_0 + 1]) ? (arr_22 [i_0] [i_0 - 1] [1] [i_0 - 1]) : -8129)))));
                                arr_26 [i_0] [i_2] [i_0] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((var_0 ? var_5 : var_0));
    var_16 = ((((var_14 ? ((min(13536, var_9))) : (var_5 <= 3751718069)))) & var_14);
    #pragma endscop
}
