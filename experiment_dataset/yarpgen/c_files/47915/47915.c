/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(((((-9223372036854775807 - 1) / (arr_2 [i_1])))), (~3039758947196410951)));
                var_14 ^= (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [1] [i_3] [i_2] [i_3] = ((~(arr_1 [1] [i_0])));
                            arr_13 [i_0] [i_3] [i_2] [i_3] = (arr_8 [i_0] [i_0] [4]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_18 [4] [i_5] = (min((((!(arr_5 [i_5] [i_4])))), -829320368));
                arr_19 [i_4] [7] = var_12;
            }
        }
    }
    var_15 = var_1;
    var_16 = -829320368;
    #pragma endscop
}
