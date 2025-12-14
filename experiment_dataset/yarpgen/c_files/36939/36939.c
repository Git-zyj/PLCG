/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1 - 1] = (max((~8221329445811378525), -var_6));
                    arr_9 [i_0] = (-(!1));
                    var_11 = -1549295088;
                }
            }
        }
    }
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_13 ^= ((!(arr_16 [i_3] [i_4] [i_5 - 1])));
                    arr_19 [10] [1] [i_3] = (((-(arr_10 [i_4] [i_5 - 1]))));
                    var_14 = ((27079 ? (((!(((-(arr_17 [i_3] [i_4] [i_4] [i_4]))))))) : (((min(var_3, 9742815879342887493))))));
                }
            }
        }
    }
    #pragma endscop
}
