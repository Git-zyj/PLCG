/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(var_4, -var_2));
    var_14 += (((min((~var_10), (max(var_10, var_8)))) < var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((~(max(31265, (arr_5 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [21] [21] [i_3] = max(var_1, (((arr_1 [11]) ? var_1 : (arr_10 [i_0] [i_0] [i_3] [i_3]))));
                            var_15 = (arr_0 [1] [i_1]);
                            var_16 = (~(min(var_11, (arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 - 2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
