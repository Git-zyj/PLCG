/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(59669, 5877)), (((var_2 == (!var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (arr_5 [i_1] [i_0]);
                var_16 = (min(-972, 18));
                var_17 *= ((5866 ? (((arr_5 [i_1 + 4] [i_1 + 3]) ? (arr_0 [i_1 + 3]) : -32758)) : ((-(arr_3 [i_1])))));
                var_18 = 5867;
            }
        }
    }
    var_19 |= (min(-var_8, ((max(((max(4227, 4231))), 5867)))));
    #pragma endscop
}
