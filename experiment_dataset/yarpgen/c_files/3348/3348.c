/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_7;

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [1] [i_2] = ((((~(arr_5 [i_1]))) & var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [0] [i_4 - 1] [i_1] [10] [i_4] [i_4] [i_4] = var_9;
                                arr_19 [9] [9] [i_1] [i_1] [i_0] = ((-(((var_9 ? var_4 : var_6)))));
                                arr_20 [i_1] = var_0;
                                arr_21 [i_1] [i_1] [i_2] [i_2] [i_4] = (~((((max(var_2, var_8))) ? (~var_5) : (min(var_9, (arr_0 [4] [4]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_24 [i_5] [0] [i_0] = var_1;
                    arr_25 [10] = (~var_10);
                }
                arr_26 [i_1] = var_1;
                arr_27 [i_1] [i_1] = (arr_9 [i_0] [i_0] [i_1] [i_1]);
                arr_28 [i_1] [i_1] [i_0] = (((((-var_3 ^ (arr_17 [i_0] [3] [i_1] [3])))) ? (((var_9 ? (((min(var_6, var_6)))) : (min((arr_4 [i_1]), var_10))))) : var_1));
            }
        }
    }
    var_15 = var_3;
    var_16 = (min(var_2, (max(var_13, -var_2))));
    #pragma endscop
}
