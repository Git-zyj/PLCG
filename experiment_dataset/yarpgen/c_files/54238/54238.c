/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_13;
    var_19 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 ^= arr_5 [i_0] [i_1] [i_0];

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [1] [i_1] [i_3] [i_3] = 36728;
                        arr_13 [i_3] = 36703;
                        arr_14 [i_0] [i_0] [11] [i_3] = ((!(arr_0 [i_0] [i_0])));
                    }
                    arr_15 [i_0] [i_1] [i_2] = 32767;
                }
            }
        }
    }
    #pragma endscop
}
