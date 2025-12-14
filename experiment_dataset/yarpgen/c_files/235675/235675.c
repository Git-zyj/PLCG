/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((((((var_6 ? var_8 : var_14))) - ((var_14 ? var_7 : var_2)))), var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 *= (((arr_1 [i_1 + 1] [i_1 + 1]) * (arr_1 [i_1 + 1] [i_1 + 1])));
                var_19 = (max(var_19, ((((arr_0 [i_0]) ? (min((((arr_2 [i_0]) * (arr_2 [i_0]))), ((max((arr_2 [i_0]), (arr_3 [i_0])))))) : (max((arr_0 [i_0]), (((arr_4 [i_0]) & (arr_3 [i_1]))))))))));
                var_20 = (arr_2 [i_0]);
            }
        }
    }

    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2 - 1] [i_2 - 3] = ((+(max((min((arr_5 [i_2]), (arr_7 [i_2 - 3]))), ((((arr_5 [i_2 - 2]) <= (arr_6 [i_2 + 2]))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_11 [i_4] [4] [4] [i_2])));
                    var_22 = ((arr_9 [i_2] [i_2] [i_2 - 1]) - (arr_12 [i_4] [i_3] [i_3] [i_2]));
                    var_23 = (min(var_23, (arr_9 [i_2 - 3] [i_3] [i_4])));
                }
            }
        }
        arr_13 [i_2 + 1] = (max((((arr_12 [i_2] [i_2] [12] [i_2 - 3]) ? (arr_5 [i_2 + 1]) : (arr_11 [i_2 - 1] [0] [i_2 - 2] [0]))), (1 & 15219)));
        var_24 = (min(((max(((-(arr_11 [i_2] [0] [0] [i_2]))), (arr_10 [i_2] [i_2] [16])))), (arr_9 [i_2] [i_2 - 3] [i_2 + 1])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    arr_19 [i_2 - 3] [i_5] [i_6] [i_6] = (((arr_7 [i_5]) != ((((((((arr_7 [i_6]) ? (arr_7 [i_2 - 3]) : (arr_18 [i_2 - 3] [i_5] [i_6])))) && ((max((arr_12 [i_2] [i_2] [16] [i_2 - 3]), (arr_10 [i_2] [i_2] [2]))))))))));
                    arr_20 [i_2] [i_5] [i_5] [i_6 - 3] = (max((((((0 ? 255 : 167)) | (((arr_12 [i_2 - 3] [i_5] [1] [1]) ? (arr_12 [i_2] [i_5] [4] [i_6 + 1]) : (arr_6 [i_2])))))), (((((arr_9 [i_2] [i_5] [i_6]) / (arr_6 [4]))) ^ (arr_5 [i_2 + 2])))));
                    var_25 = (min(var_25, (((13435 ? 0 : 13435)))));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_26 = (max((arr_14 [i_7 - 1] [i_7] [i_7]), (arr_7 [i_7 - 3])));
        var_27 = (max(var_27, (arr_10 [i_7 - 2] [i_7 - 2] [1])));
    }
    #pragma endscop
}
