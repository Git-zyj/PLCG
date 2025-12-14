/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((+(((arr_4 [i_1 - 1] [i_1 - 1] [i_1]) - (arr_3 [i_1 + 2] [i_1] [i_1])))));
                var_21 = max((((~((1 * (arr_1 [i_1])))))), (max((arr_3 [i_1 - 3] [i_1 - 1] [2]), var_18)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            {
                var_22 = (min(var_13, (min((max((arr_8 [i_2 + 1] [i_3] [i_2 + 1]), var_11)), (arr_8 [i_3] [i_3] [i_3 - 3])))));
                arr_9 [i_3] [i_3] = (((arr_7 [i_2 + 1]) ? ((var_2 >> (((arr_6 [i_3 - 2] [i_2 + 1]) - 79)))) : var_5));
                var_23 = (min(((((arr_7 [i_2 + 1]) <= (arr_8 [i_2 + 1] [i_3] [i_3 - 3])))), (max((arr_7 [i_2 + 1]), (arr_7 [i_2 + 1])))));
            }
        }
    }
    #pragma endscop
}
