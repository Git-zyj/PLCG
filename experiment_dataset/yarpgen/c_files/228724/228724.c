/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 17179869183));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = (max(((var_19 ? (arr_1 [i_0 - 3]) : var_5)), var_2));
                    var_22 = ((((((arr_5 [i_0 - 3] [9]) ? (arr_5 [13] [13]) : (arr_5 [i_1 - 1] [i_2])))) || (~var_5)));
                }
            }
        }
    }
    var_23 = ((var_3 ? var_2 : 142));
    #pragma endscop
}
