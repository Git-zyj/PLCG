/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((8128 ? 255 : 0)), var_15));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = ((((min((var_4 - var_17), (((arr_0 [9] [i_2]) - var_10))))) ? (((min((arr_12 [i_0] [i_1 + 1] [i_0 - 1]), var_13)))) : (max(64, (max((arr_9 [7] [7] [i_0] [i_3]), (arr_11 [i_0] [i_2])))))));
                        arr_14 [7] [i_0] [7] [i_3] = var_8;
                        arr_15 [i_0] [i_1] = (min((((arr_6 [i_1 + 3] [i_0 - 1] [i_0 + 1]) ? (arr_6 [i_1 + 3] [i_0 + 1] [i_0 + 1]) : 253)), (((arr_6 [i_1 + 1] [i_0 - 1] [i_0 - 1]) | 21))));
                    }
                }
            }
        }
        arr_16 [1] [i_0] = (min((((arr_11 [13] [i_0 - 1]) * (arr_11 [i_0 - 1] [i_0 - 1]))), ((max(253, (arr_11 [i_0 + 1] [i_0 + 1]))))));
    }
    var_20 ^= var_14;
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((arr_21 [6]) ? var_5 : (arr_21 [12]))) << (((arr_21 [10]) - 3724956959)))))));
                    arr_25 [i_4] [0] [i_4] = var_8;
                    var_22 &= ((((min((arr_12 [i_4] [i_4 + 1] [i_4 + 2]), (arr_4 [14])))) ? var_4 : (arr_20 [i_4])));
                    arr_26 [i_4 + 1] [i_4] = -1;
                }
            }
        }
    }
    #pragma endscop
}
