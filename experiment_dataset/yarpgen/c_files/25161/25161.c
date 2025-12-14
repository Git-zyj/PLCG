/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? ((10 ? -11 : var_17)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [2] [i_1] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] [i_1] [i_3] = (arr_12 [i_0] [i_1]);
                            var_20 = (max(var_20, (arr_7 [i_0])));
                        }
                    }
                }
                var_21 = (((((((((arr_0 [i_0]) ? (arr_10 [i_0] [i_1 + 1] [i_0] [i_1] [7] [1]) : (arr_11 [i_0] [12] [i_0] [i_0])))) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_1])))) ? ((((((arr_6 [i_0] [i_1 + 2] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_0 [0])))) ? (arr_3 [i_1] [i_0]) : (((arr_11 [i_0] [i_0] [i_0] [i_1]) ? 5031630726212286922 : (arr_11 [i_0] [i_1] [i_1] [5]))))) : (((-2600 ? -32 : 7)))));
                var_22 = (max(var_22, (arr_7 [i_0])));
            }
        }
    }
    #pragma endscop
}
