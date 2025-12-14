/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [5] [13] = (arr_2 [i_2 + 1]);
                    var_20 = (arr_3 [3] [i_1] [9]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_21 = (max(((((arr_9 [i_3 - 4]) ? var_4 : ((max((arr_9 [i_3 + 1]), (arr_10 [10]))))))), (arr_11 [i_3])));
                var_22 = (((arr_9 [i_3]) == (arr_12 [12] [i_4])));
            }
        }
    }
    #pragma endscop
}
