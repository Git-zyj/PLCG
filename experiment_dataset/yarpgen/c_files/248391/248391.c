/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = 11;
                    arr_10 [0] [12] [i_1] [i_1] |= var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {
                arr_17 [i_4] = 34;
                arr_18 [12] = min(177, ((min(var_13, (arr_1 [i_4 - 1] [i_3])))));
                arr_19 [i_4] = ((~(arr_16 [i_3])));
            }
        }
    }
    var_18 = var_17;
    #pragma endscop
}
