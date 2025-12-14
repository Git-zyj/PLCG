/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(32, -5)))) > ((((min(var_10, var_7))) ? var_7 : (6 | 0)))));
    var_13 = ((-((35065 ? 1293122117 : 253))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (arr_5 [15]);
                    var_14 ^= (max((arr_3 [10] [i_1] [i_2]), (arr_1 [i_0])));
                    arr_8 [i_0] = (arr_2 [i_0] [i_1] [i_2 - 1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_15 = (max(((((arr_4 [i_3 - 1]) ? (arr_4 [i_5]) : (arr_4 [i_3 - 1])))), (arr_5 [i_3])));
                    var_16 = ((~(arr_13 [i_3] [i_4] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
