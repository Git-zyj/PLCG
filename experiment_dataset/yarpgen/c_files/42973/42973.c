/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min(var_7, (var_0 && var_16))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((((arr_7 [i_0]) * (arr_7 [i_0])))) / (((((127 / (arr_3 [i_1] [i_1])))) ? -897426392 : 4192256))));
                    var_21 = (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_22 = (max(var_22, (((~(max((arr_10 [i_3] [i_3]), ((((arr_10 [i_3 - 1] [i_4]) ? (arr_14 [i_3] [i_3]) : (arr_12 [i_3])))))))))));
                var_23 = (max((arr_12 [10]), (((((~(arr_13 [i_3])))) ? (arr_13 [i_3 + 1]) : ((4192256 ? (arr_13 [i_4]) : var_7))))));
                var_24 += (arr_11 [i_3]);
                var_25 -= (((((((arr_14 [i_3] [i_4]) ? var_7 : (arr_11 [i_4])))) ? (arr_9 [i_4]) : ((0 ? 2345324591 : (arr_9 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
