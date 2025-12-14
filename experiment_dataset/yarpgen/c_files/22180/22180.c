/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((var_0 ^ var_3), var_9)) + var_0));
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [13] [i_2] |= (~6778007348344698369);
                    arr_8 [3] [6] [8] = 154;
                }
            }
        }
    }
    var_14 = 7;
    #pragma endscop
}
