/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(var_3, (((!(!var_8)))))))));
    var_13 = var_4;
    var_14 = (min(var_14, (((((max(var_8, 61059))) ? var_2 : (((((var_7 ? var_1 : var_8))) ? ((var_11 ? -1 : var_2)) : ((var_6 ? var_1 : 0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((var_4 == (min(2278194270, 10313021414690252241))));
                    arr_10 [i_0] = var_9;
                    arr_11 [i_0 - 4] [i_0 - 4] [i_1] [i_0] = (((~(max(var_0, (arr_5 [i_0] [i_1 + 1] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
