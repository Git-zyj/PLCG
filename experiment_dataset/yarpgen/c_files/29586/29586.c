/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_11 = 18446744073709551615;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [i_1] [11] = ((max(18446744073709551615, 846817720)));
                    arr_7 [i_1] [i_1] [18] = (((((846817721 ? (var_7 && var_2) : ((var_8 ? var_0 : var_2))))) ? -111 : (arr_1 [i_0] [i_0])));
                    arr_8 [i_1] [i_1] = (!-var_7);
                    arr_9 [22] [i_1] [i_2] [i_2] &= (min((-6428563314407289866 < -1218707825787373873), (max((arr_4 [i_0 - 1] [i_2 - 3] [i_2] [i_1 - 1]), var_5))));
                }
            }
        }
        var_12 = (arr_1 [i_0 - 2] [i_0 - 2]);
        var_13 = ((!((min((arr_4 [22] [i_0] [9] [22]), (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0] [16] [i_0] [i_0]) : var_8)))))));
        arr_10 [17] = (((((var_1 ? (arr_2 [i_0 - 2] [i_0 - 3] [i_0 - 3]) : var_2))) && var_4));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_15 [i_3] = (((((~(arr_11 [i_3 - 1] [i_3 + 2])))) ? ((~(63 | 1984))) : ((((max(var_2, var_4))) ^ (((arr_11 [i_3] [i_3]) ? (arr_14 [4]) : var_0))))));
            arr_16 [i_3] = (arr_11 [i_3] [i_3]);
            arr_17 [i_3] [i_3] [i_3] = ((~((6428563314407289873 ? -1986 : -962409697))));
            arr_18 [9] [i_3] = (((-(arr_2 [i_3 - 1] [i_4 + 1] [i_3 - 1]))));
        }
        var_14 = (var_0 ? var_3 : (((arr_0 [i_3 + 1] [i_3]) / (arr_0 [i_3 - 1] [10]))));
        var_15 = (max(var_15, (arr_12 [i_3 + 1])));
    }
    var_16 = (max((((((1 ? var_0 : var_6))) != -846817721)), (!139)));
    var_17 = (!var_0);
    #pragma endscop
}
