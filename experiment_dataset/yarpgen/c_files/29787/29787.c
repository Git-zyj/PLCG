/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_11 <= var_13);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] = arr_1 [i_1] [i_0 - 1];
                var_17 = (arr_4 [i_0 - 1] [i_0 - 1] [0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 += (arr_10 [i_1] [i_1]);
                            var_19 = arr_11 [i_2] [i_1] [21];

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                var_20 = ((~((~(arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                arr_15 [i_2] = arr_14 [i_0] [i_0] [i_2] [i_0] [i_0 - 1] [i_0];
                                arr_16 [1] [i_2] [i_2] [1] [1] = ((((max(1, (max(var_8, (arr_3 [1] [i_2])))))) ? (min((arr_12 [i_0] [i_2] [i_2] [i_4]), (((arr_1 [i_0] [i_0]) << (var_7 - 30878))))) : var_4));
                                arr_17 [i_0] [i_2] [i_4] = (~1);
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                var_21 = ((-(arr_13 [1] [i_3] [i_2] [i_1] [i_1] [i_0 - 1])));
                                arr_21 [i_0 - 1] [16] [i_0 - 1] [i_1] [i_0 - 1] [i_0] &= ((max(var_4, var_0)));
                            }
                        }
                    }
                }
                var_22 = min((((max(1, 1)) ? 11248 : (max(1, (arr_11 [i_1] [i_1] [i_1]))))), (arr_14 [i_0] [i_0 - 1] [i_1] [22] [i_1] [i_1]));
            }
        }
    }
    #pragma endscop
}
