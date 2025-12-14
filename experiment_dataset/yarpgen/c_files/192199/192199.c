/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = (max(129, (arr_2 [i_0] [9])));
                arr_6 [i_0] [i_1] = 138;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_17 = ((((((arr_7 [11] [i_1] [i_1]) ? (arr_7 [i_0] [i_0] [i_0]) : 23))) >= (arr_3 [i_1 - 2] [i_2 + 1])));
                    arr_9 [i_0] [i_0] [i_0] = 129;
                }
            }
        }
    }
    var_18 = (((23 ? (var_14 + 1969540915) : (118 == -1969540916))));
    var_19 = (max(var_19, var_5));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3] [12] = arr_11 [i_3];
        arr_14 [i_3] [i_3] = (((arr_10 [i_3]) ^ (max(470079238, (arr_10 [i_3])))));
        arr_15 [7] = ((((((arr_12 [i_3] [i_3]) ^ (arr_12 [7] [i_3])))) ? (max((arr_11 [i_3]), (arr_11 [i_3]))) : (((58552 ? 1969540915 : (-32767 - 1))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (min(2914, (min(((((arr_16 [i_4]) == 45352))), -20675))));
        arr_18 [i_4] = 10;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_21 = ((arr_11 [i_5 - 3]) / (arr_16 [i_5 - 3]));
        arr_21 [i_5] = ((((((arr_19 [i_5] [i_5]) - (arr_11 [9])))) ? 11 : (arr_11 [i_5 + 1])));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_6] = (arr_26 [i_6]);
                var_22 = ((~(arr_23 [i_6 - 2])));
            }
        }
    }
    #pragma endscop
}
