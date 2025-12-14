/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((-(!2097151))), (((var_12 ? var_8 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = var_0;
                arr_4 [i_0] [i_1] = arr_2 [i_0] [i_1] [i_0];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (((var_16 <= (((arr_1 [i_0]) / var_16)))) ? (((arr_12 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [6]) ? (!171) : var_13)) : var_1);
                                arr_14 [i_1] [i_1] [i_1] = ((var_10 ? (((arr_5 [i_2] [i_3 - 1] [i_1] [i_3 - 1]) / (-2147483647 - 1))) : 66));
                                arr_15 [1] [i_1] [i_1] [i_2] [i_2] [i_3 - 1] [i_1] = (-2097152 - -891926032);
                                arr_16 [i_3] [i_1] [i_3] [i_3] [i_3] = (((arr_1 [4]) % ((min((arr_11 [12] [i_2] [11] [i_1]), 2016)))));
                            }
                        }
                    }
                }
                arr_17 [i_1] = var_17;
            }
        }
    }
    var_23 = 41272;
    #pragma endscop
}
