/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (((((((-9223372036854775807 - 1) ? 96776299 : (arr_0 [i_2])))) ? 41108 : ((var_0 ? (arr_5 [i_0] [i_1] [i_2]) : (arr_0 [i_0]))))));
                    var_11 = (max(var_11, ((((-2147483647 - 1) ? (!-10) : ((24422 ? (max(var_9, -8816917014849839440)) : (arr_1 [1]))))))));
                }
            }
        }
    }
    var_12 = (max(var_8, (((((360972909 ? var_6 : 24440))) ? var_7 : var_7))));
    var_13 = (max(var_13, ((min(var_4, var_1)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_14 = (max(var_14, (((((min((arr_7 [i_3]), ((((-2147483647 - 1) != var_0)))))) ? (((((min((arr_7 [1]), 24427))) / 24440))) : (((arr_8 [i_3]) ^ ((((arr_6 [i_3] [i_3] [0] [i_4]) * var_9))))))))));
                var_15 -= ((41108 || ((max((arr_3 [i_3]), (arr_4 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
