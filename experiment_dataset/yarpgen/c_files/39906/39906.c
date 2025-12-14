/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 += ((~(max(var_12, var_9))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] = ((~((((arr_1 [i_0] [i_1]) <= (arr_7 [i_0] [i_0]))))));
                    arr_10 [i_0] [i_0] [4] |= arr_7 [i_2] [i_2];
                    var_20 += (((((~(arr_2 [i_0])))) ? (arr_8 [i_0] [i_1] [14]) : -29647));
                }
            }
        }
    }
    var_21 ^= var_3;
    #pragma endscop
}
