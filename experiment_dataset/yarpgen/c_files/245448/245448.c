/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(64, (min(var_8, var_9))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((max((arr_3 [i_0 - 4] [i_0 - 4] [i_0 - 3]), ((-(arr_3 [i_0 + 2] [i_0 - 3] [i_0 + 3]))))))));
                arr_6 [i_0] [i_0 - 4] = (((arr_4 [i_1] [i_1] [i_0 + 2]) | ((~(arr_3 [i_0] [i_0] [i_1])))));
                arr_7 [i_1] [i_0 - 4] = ((-(arr_1 [i_0 - 1])));
                var_22 ^= ((-((max((var_15 >= var_17), (arr_3 [i_0 + 3] [i_0 - 2] [i_0 - 1]))))));
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
