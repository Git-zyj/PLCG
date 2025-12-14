/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((-(arr_3 [i_0])));
                var_12 += (arr_4 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    arr_13 [1] [i_3] [i_3] = (((((max((arr_8 [i_3] [i_3] [i_3]), var_4)))) < (((arr_5 [i_2] [i_3 + 3] [i_4]) * var_3))));
                    arr_14 [i_2] [i_3] = ((~(max((((arr_7 [i_4]) << (-99 + 121))), var_8))));
                }
            }
        }
    }
    var_13 = var_0;
    var_14 = (max(var_2, 2585));
    #pragma endscop
}
