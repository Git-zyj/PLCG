/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((~(arr_3 [i_0]))))));
                    var_15 = (((((var_4 ? 103 : ((var_3 & (arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? ((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_2] [i_2]))) : (!-3874)));
                }
            }
        }
    }
    var_16 = (!42);
    #pragma endscop
}
