/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_3 ? 82 : (((!(((28716 ? var_3 : -9123))))))));
    var_18 = (((((var_0 ? var_7 : var_10))) || ((min((max(5503, 1313884885)), 1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 += ((!((!(arr_1 [i_0] [i_0 + 1])))));
                    arr_8 [i_0 + 1] [i_0] [i_2] = var_3;
                    var_20 = ((~((-(max(26861, 1313884885))))));
                }
            }
        }
    }
    #pragma endscop
}
