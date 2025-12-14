/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(107, 5049861788965923122));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (((((var_1 ? (min(5670347688903429636, (arr_4 [i_0] [i_1] [i_1]))) : (arr_4 [i_0] [i_1] [i_1])))) ? (min((17065 / -9122034357782592026), (arr_1 [i_1]))) : ((var_3 / (arr_3 [i_1])))));
                var_18 = (!(arr_2 [i_1]));
            }
        }
    }
    var_19 |= -1;
    #pragma endscop
}
