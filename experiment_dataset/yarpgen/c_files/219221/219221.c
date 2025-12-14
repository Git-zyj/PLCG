/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -28;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = min((((var_9 + 2147483647) >> (var_19 > var_18))), var_2);
                    arr_10 [i_2] &= (((((arr_0 [i_0 - 2] [7]) + var_15)) <= ((max(((var_8 != (arr_1 [i_0] [14]))), var_4)))));
                    arr_11 [3] [3] [13] = min(((min(var_8, 27))), var_5);
                }
            }
        }
    }
    #pragma endscop
}
