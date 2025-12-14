/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((-(((arr_5 [i_0] [i_2]) + (arr_2 [i_0] [i_0])))));
                    var_17 = (((~2005183228) << ((min((-9223372036854775807 - 1), 21)))));
                    var_18 += var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_12 [i_4] [i_4] = ((arr_11 [i_3] [i_3] [i_4]) || (arr_6 [i_4] [i_3]));
                arr_13 [i_4] = (arr_10 [i_4]);
                arr_14 [i_3] |= 9223372036854775807;
            }
        }
    }
    var_19 += (min(var_9, var_15));
    #pragma endscop
}
