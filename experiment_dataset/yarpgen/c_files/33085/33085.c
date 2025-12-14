/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [12] [12] &= (arr_5 [i_0]);
                arr_7 [i_0] [i_0] = (max(((max((arr_5 [i_1]), (-285546448 / 11)))), var_1));
                var_10 = var_0;
            }
        }
    }
    var_11 += var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_14 [i_3] = (arr_9 [i_3]);
                arr_15 [i_2] [i_2] [i_3] |= (max((arr_9 [i_2]), (min(285546454, 9217637438033026382))));
            }
        }
    }
    var_12 = (var_6 + var_7);
    var_13 = var_5;
    #pragma endscop
}
