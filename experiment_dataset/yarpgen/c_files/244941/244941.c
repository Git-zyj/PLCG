/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = ((142 ? (min((arr_0 [i_1 - 3] [i_0 - 1]), var_0)) : (arr_0 [i_1 - 3] [i_0 - 1])));
                    arr_10 [i_1] [i_2] [i_2] [i_1] = (((((135 ? (arr_8 [i_1 - 1] [i_1 - 3] [i_1]) : (arr_8 [i_1 - 1] [i_1 - 3] [i_1])))) ? (arr_3 [i_0]) : 1));
                }
            }
        }
    }
    var_17 *= (max(1, var_0));
    var_18 = (max(var_18, ((max(var_9, (max((2760465568 | 57348), (~var_14))))))));
    #pragma endscop
}
