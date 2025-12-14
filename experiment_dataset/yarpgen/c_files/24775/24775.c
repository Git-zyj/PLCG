/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (24055 || 24055);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [6] [i_2] |= (max((-69 != 40029), (((arr_5 [14]) | (arr_1 [0])))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((((arr_6 [i_2] [i_2] [i_2 + 1]) + 2147483647)) << (var_11 - 1))) / (arr_6 [9] [i_2] [i_2 - 1])));
                    var_13 -= 60434;
                    arr_9 [1] [2] &= ((-(max(443, (arr_3 [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
