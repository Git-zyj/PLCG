/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (((max((arr_5 [i_0] [i_1 - 2]), -8))) ? (arr_4 [i_1 + 2]) : ((0 ? (arr_5 [i_0] [i_0]) : var_2)));
                arr_6 [i_0] [i_1] [i_0] = (!15944317695781719682);
                arr_7 [i_0] [i_1] = (max(var_1, var_11));
                var_20 = ((-((13 ? (var_11 + var_16) : (var_10 + var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_21 = var_1;
                arr_13 [i_3] &= ((-1 ? (max(243, 18446744073709551611)) : 197));
                var_22 -= var_3;
            }
        }
    }
    #pragma endscop
}
