/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((!((!(((32767 ? (arr_7 [i_0] [i_0] [16] [i_0]) : var_9)))))));
                        var_17 = (((arr_12 [i_0] [i_1 - 3] [17] [i_3] [17] [i_1]) == (min((arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_3] [i_0]), (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [8] [i_1])))));
                        arr_13 [i_3] [i_3] [i_2] [i_0] = var_13;
                    }
                }
            }
        }
        var_18 = (arr_2 [13] [13]);
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        var_19 = (max(var_19, (((((((arr_10 [i_4] [i_4] [i_4 - 2]) & 65519))) ? (62953 || var_11) : ((~(arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 3] [i_4] [i_4 - 1] [i_4 + 1]))))))));
        arr_16 [10] = (max((((((((arr_6 [1]) >= (arr_6 [i_4])))) > ((min(2596, 13)))))), var_2));
    }
    var_20 = var_14;
    var_21 = ((-var_11 ? (var_4 - var_1) : ((-12 / ((var_6 ? var_10 : 4294967295))))));
    #pragma endscop
}
