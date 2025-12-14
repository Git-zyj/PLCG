/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (((arr_0 [4] [10]) == ((((arr_0 [i_0] [i_1]) == (arr_6 [i_0] [i_0] [i_1] [i_2]))))));
                    var_12 = 0;
                }
            }
        }
        var_13 = (((((~((~(arr_6 [1] [i_0] [4] [11])))))) - (((((arr_2 [1] [i_0] [i_0]) / (arr_4 [i_0] [3]))) / (((arr_2 [i_0] [i_0] [i_0 + 2]) ^ (arr_7 [i_0] [1] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_14 -= (arr_9 [i_3]);
        arr_11 [17] [i_3] = 127;
        var_15 -= (max((((-(arr_9 [i_3])))), (-4636525815775161050 + 2147483647)));
        arr_12 [i_3] = (arr_10 [i_3]);
    }
    var_16 = var_0;
    #pragma endscop
}
