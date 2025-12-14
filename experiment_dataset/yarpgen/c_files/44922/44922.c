/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (((arr_3 [i_0] [i_1]) ? (arr_1 [i_1]) : (((arr_1 [i_1]) ? var_11 : (arr_0 [i_0])))));
                var_20 = (max((3462936549 || 832030749), 13));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [2] = -var_0;
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((!(((var_8 ? var_1 : var_2)))));
                    var_21 &= ((((var_14 ? var_17 : 3505962505)) & (arr_1 [5])));
                    var_22 = (min(var_22, 111));
                    var_23 = (((((2871973750 ? (arr_2 [i_0] [i_0]) : var_6))) ? 111 : (var_7 >= var_5)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_24 = ((-(max((((-(arr_14 [20] [20])))), ((247789980 ? 1440824882 : -119))))));
                    var_25 = min(1596033815, (arr_14 [i_4 - 2] [i_4 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
