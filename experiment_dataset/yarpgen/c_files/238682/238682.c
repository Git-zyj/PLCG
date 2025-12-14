/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = (min(((~(arr_0 [i_0 + 4]))), (arr_0 [i_0 + 1])));
                    arr_8 [i_0 - 1] [i_2] = (((arr_0 [i_0]) - (arr_6 [1] [i_2 - 1] [i_2] [i_2])));
                    var_19 = ((~((max(63352, 158)))));
                }
            }
        }
    }
    var_20 = 63352;
    var_21 = var_11;
    #pragma endscop
}
