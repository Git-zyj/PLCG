/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [2] [i_1] = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (~var_12) : (1 || 1)));
                arr_5 [i_0 + 2] [i_0 + 2] = (arr_3 [i_1]);
            }
        }
    }
    var_17 = var_6;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((arr_6 [i_2] [3]) ? ((var_13 - (arr_1 [i_2] [i_2]))) : var_5));
        arr_9 [i_2] [i_2] = (((((arr_3 [i_2]) & 107)) + ((~(arr_1 [i_2] [i_2])))));
    }
    #pragma endscop
}
