/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = max(0, 1);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (arr_4 [i_0] [i_0] [i_0]);
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((((min(var_10, 33423360))) ? (max((arr_1 [i_1 - 2]), (arr_0 [i_0]))) : (((~(~var_9))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((~(arr_8 [i_1 + 1] [i_3 - 1])));
                        arr_11 [i_0] [i_1 - 1] = 9;
                        arr_12 [i_0] [i_2] [i_0] [i_0] = 1;
                        var_14 = (~(max((-629946430 | 16075440518266471227), -17)));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, ((((arr_13 [i_1 - 4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4]) >> (var_10 - 29924))))));
                        var_16 = ((((((65519 << (var_7 - 12887391583428318446)))) || ((max((arr_13 [i_0] [i_0] [i_0] [2] [i_2] [i_4]), 65514))))));
                        var_17 = (max(var_17, (((((16 && (arr_9 [i_1 - 3] [i_1 - 3] [i_4 - 1]))) ? (max(var_10, (arr_9 [i_1 - 3] [i_1 - 2] [i_4 + 1]))) : ((~(arr_9 [i_1 + 1] [i_1 + 1] [i_4 + 1]))))))));
                        var_18 |= ((19901 || ((min((arr_1 [i_1 + 1]), -1)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [i_0] [i_5] [i_0] [i_6] = (((arr_14 [i_0] [i_0] [i_5] [i_0] [i_0]) <= (arr_0 [i_0])));
                    arr_22 [i_0] [i_6] |= 2371303555443080388;
                }
            }
        }
        var_19 = (((((arr_6 [i_0]) ? (arr_6 [i_0]) : 65515))) ? (arr_6 [i_0]) : (1254347281 || var_10));
    }
    var_20 += 568694297;
    var_21 = var_11;
    #pragma endscop
}
