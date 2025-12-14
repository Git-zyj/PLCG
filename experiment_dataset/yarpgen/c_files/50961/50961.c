/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 &= arr_3 [i_0 - 4];
                arr_7 [i_0] [i_1] [i_1] = ((var_3 > ((((!(arr_5 [i_0 - 3] [i_1] [i_0])))))));
            }
        }
    }
    var_15 = ((var_10 ? var_1 : (max((~239951863), var_3))));
    #pragma endscop
}
