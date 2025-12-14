/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [10] [2] = (arr_3 [11] [0]);
                var_13 ^= ((-((-56 / (max((arr_0 [2] [6]), (arr_4 [0] [4] [7])))))));
                var_14 = 126;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_15 = ((((((1356716530 <= (((-18 <= (arr_9 [14])))))))) - ((-20374 ? 2373329527 : (max((arr_9 [10]), var_5))))));
                var_16 = (arr_9 [20]);
            }
        }
    }
    var_17 = ((((20386 % ((var_2 ? var_12 : 20378)))) - (((max(20386, var_11)) % -20387))));
    #pragma endscop
}
