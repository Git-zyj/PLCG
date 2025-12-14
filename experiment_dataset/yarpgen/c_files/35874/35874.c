/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = ((-(max((min((arr_2 [3] [8]), (arr_2 [8] [i_0]))), (arr_2 [10] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = 1;
                    var_21 -= (((-((-(arr_5 [i_0] [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((min((~-1070047072), ((~(arr_2 [i_3] [9]))))))));
        var_23 = arr_9 [i_3];
        arr_12 [10] = ((!((max(((-(arr_5 [i_3] [1]))), (arr_9 [6]))))));
        arr_13 [4] &= (((!(arr_6 [i_3] [i_3] [8] [8]))));
        arr_14 [i_3] = (arr_5 [i_3] [i_3]);
    }
    var_24 = (max(var_24, (((-(min(var_2, var_14)))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_25 = (max((min((arr_0 [i_4]), (arr_18 [i_4] [i_4] [i_4 + 1]))), ((max(((~(arr_11 [2] [7]))), (arr_18 [i_4] [7] [1]))))));
                arr_20 [0] = (max(((~((~(arr_7 [0]))))), (arr_3 [i_5])));
                var_26 = ((~((-(max((arr_11 [i_4] [0]), (arr_1 [i_4])))))));
                var_27 = (max(var_27, ((min((max(((~(arr_2 [6] [6]))), ((max((arr_7 [1]), (arr_16 [5])))))), (arr_6 [2] [2] [i_5] [i_5]))))));
                arr_21 [i_4] = (arr_3 [i_4 + 1]);
            }
        }
    }
    #pragma endscop
}
