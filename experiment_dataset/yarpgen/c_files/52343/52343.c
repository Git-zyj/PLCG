/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((arr_4 [i_1 + 1] [i_1] [i_1]) % (arr_1 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [2] [i_3] &= ((((-((16514 ? var_10 : var_14)))) != ((var_8 ? (arr_4 [i_1 + 1] [i_3 + 1] [i_2 - 1]) : (arr_4 [i_1 + 1] [i_3 - 3] [i_2 - 1])))));
                            arr_13 [i_3] [i_1] [i_1] [12] = (arr_7 [i_1 + 1] [i_2] [i_3]);
                            var_17 = ((((arr_9 [i_3] [i_1]) ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_3]) : var_14)));
                            var_18 = var_14;
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_2 - (max(var_11, var_2)))));
    var_20 = var_10;
    var_21 &= (~var_9);
    #pragma endscop
}
