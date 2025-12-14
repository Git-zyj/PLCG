/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [16] [i_0] = var_4;
                    arr_9 [i_2] [i_2] [i_2] |= (((44123 - 23273) || ((max((((var_12 + 2147483647) >> (((arr_2 [i_0] [i_0]) + 452462300)))), 224)))));
                    arr_10 [i_2] [i_1] [i_0] |= (max((min((arr_7 [i_0] [i_1] [i_2] [16]), ((var_2 ? 16383 : -1)))), (((1 >> (105 - 95))))));
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = (11100 || 0);
    #pragma endscop
}
