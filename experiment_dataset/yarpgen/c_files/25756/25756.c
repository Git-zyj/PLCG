/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1134526126;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [2] = ((~((((max(var_6, 3))) ? 252 : 253))));
                    arr_9 [i_2 + 2] [i_1] [i_2] = (max(((((arr_4 [i_2 - 1]) || (arr_2 [i_0] [i_2 - 1])))), (arr_3 [i_2 - 3] [i_2 + 1])));
                    var_13 = 24576;
                }
            }
        }
    }
    #pragma endscop
}
