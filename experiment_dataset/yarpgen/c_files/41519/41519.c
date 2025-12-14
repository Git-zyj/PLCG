/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = arr_9 [i_1 - 1] [i_2];
                            arr_13 [1] [i_0] = ((1 && -20727) ? (((arr_1 [i_2 + 2]) * var_1)) : ((((31 ? (arr_3 [i_0] [i_0]) : var_3)) * (arr_8 [i_0] [i_0] [i_0]))));
                            var_12 ^= ((var_10 >> (((arr_11 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0]) ? (arr_11 [i_0 - 3] [i_0] [i_0] [11] [i_0] [i_0]) : (arr_11 [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0])))));
                        }
                    }
                }
                arr_14 [12] |= (((((arr_3 [i_0 - 3] [i_1 - 1]) ? (arr_3 [i_0 - 3] [i_1 - 1]) : var_10)) == ((((arr_3 [1] [i_1 + 1]) ? (arr_3 [i_0] [i_0]) : 4294967295)))));
                var_13 = ((!(((-(arr_5 [i_0] [i_0 - 1] [i_1 + 1]))))));
            }
        }
    }
    var_14 = (((((var_2 ? ((max(var_6, var_9))) : 125))) ? -24611 : (min(((min(var_2, var_7))), (max(var_10, 1))))));
    var_15 = -var_1;
    var_16 = var_5;
    var_17 = (min(1, (min(var_0, ((max(34, var_0)))))));
    #pragma endscop
}
