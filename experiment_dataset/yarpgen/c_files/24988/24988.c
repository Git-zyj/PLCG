/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((32651 ? (arr_0 [5]) : var_8));
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((arr_6 [i_1]) ? (arr_6 [1]) : var_9)) & (arr_6 [i_1])));
        var_20 = ((arr_7 [i_1]) ? 32885 : (arr_6 [i_1]));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_21 += (max(5639925108108560505, (arr_13 [i_2])));
                    arr_18 [i_2] [i_3] [i_4] = ((var_11 ? (((arr_10 [i_3]) ? (((arr_12 [i_2] [i_3] [6]) * (arr_17 [i_2] [i_2]))) : (((max(32877, (arr_9 [i_2] [i_2]))))))) : 32630));
                    var_22 = ((((min(((32679 ? 18335882909433661838 : var_0)), ((~(arr_11 [i_4] [4])))))) ? (~var_3) : (min(((-55 | (arr_14 [i_2]))), (arr_12 [0] [i_3] [i_4])))));
                }
            }
        }
    }
    var_23 ^= var_0;
    var_24 = var_1;
    #pragma endscop
}
