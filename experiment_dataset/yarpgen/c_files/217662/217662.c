/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 -= ((var_16 ? var_1 : (arr_2 [10] [10] [i_1])));
                arr_4 [i_1] [i_0] = var_14;
                arr_5 [8] [i_1] [23] = (4093163036 || 201804259);
            }
        }
    }
    var_18 ^= var_7;
    var_19 = (max(-1515, 201804240));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                arr_11 [i_3] = (arr_8 [i_3 + 1] [i_3] [i_3 + 1]);
                var_20 = (min(var_20, (((-(arr_1 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
