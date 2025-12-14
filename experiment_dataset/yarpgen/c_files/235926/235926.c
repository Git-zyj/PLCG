/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1021810112 - var_4);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((~(arr_4 [i_0] [i_0])));
                    var_12 = (arr_1 [i_0] [i_0]);
                    var_13 = (~var_3);
                    var_14 ^= ((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0 + 1] [i_1] [16]) : (arr_2 [7] [i_1] [i_1]));
                }
            }
        }
        arr_7 [i_0] = (((var_0 + 2147483647) << (((arr_0 [7] [7]) - 10398659))));
        arr_8 [i_0] = ((var_3 ? 1947492464 : 392583366));
        var_15 = ((!(arr_5 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((arr_12 [8]) / (arr_6 [8]))))));
        arr_13 [i_3] = ((1021810133 | (arr_5 [i_3 - 2])));
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] = ((((384568110 || (arr_1 [6] [6]))) && ((min((arr_9 [16]), (arr_10 [1] [i_4]))))));
        var_17 ^= (max((arr_4 [i_4] [16]), (((-(arr_0 [i_4] [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_18 = (min(var_18, ((max((arr_17 [i_5 - 1]), 9223372036854775792)))));
        var_19 = (min(((633728841 ? (arr_18 [i_5] [i_5 + 1]) : (arr_18 [5] [i_5 + 1]))), (((arr_18 [i_5 + 2] [i_5 + 1]) & (arr_18 [i_5] [i_5 - 1])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        var_20 = ((-1 + (!9223372036854775792)));
        arr_24 [i_6] = var_3;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_27 [14] = min((min((max(var_2, -1)), ((var_8 ? (arr_19 [i_7]) : 25116)))), -1021810087);
        var_21 = (min(var_21, (((~var_5) ? ((~(!var_1))) : 1021810087))));
        arr_28 [i_7] = min(((+(min((arr_17 [i_7]), 1021810111)))), (arr_19 [i_7]));
    }
    var_22 = -1021810105;
    #pragma endscop
}
