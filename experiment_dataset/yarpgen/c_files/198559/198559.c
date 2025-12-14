/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = ((((((!(arr_2 [i_0] [i_0] [i_0]))))) ? ((((~(arr_2 [i_0] [i_0] [5]))) - (arr_2 [1] [i_0] [i_0]))) : 681));
                var_12 = (((((arr_2 [i_1 - 1] [i_1 + 3] [i_1 + 3]) || (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) ? (~11) : 1047552));
            }
        }
    }
    var_13 = 1422397409;
    #pragma endscop
}
