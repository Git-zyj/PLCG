/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((1 || 1) ? (arr_2 [i_1]) : (arr_4 [i_1] [i_0] [i_0]));
                var_20 = (min(var_20, (arr_0 [8])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_4 - 1] [i_4] [i_4] [i_2] = ((-((((arr_5 [i_2 - 1]) < (arr_14 [i_2] [i_3] [i_4 + 1]))))));
                    var_21 -= arr_7 [i_2] [i_3];
                    arr_16 [i_2] [4] [i_3] [i_2] = arr_10 [i_4 - 1] [i_2] [1];
                    arr_17 [i_2] [i_3] [i_3] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
