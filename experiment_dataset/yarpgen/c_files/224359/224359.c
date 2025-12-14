/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_10 = ((((((arr_0 [i_0 - 1]) ? ((min((arr_2 [i_1 - 1]), var_9))) : (arr_5 [i_0] [i_0 - 1] [i_0 - 1])))) || var_4));
                        var_11 *= (min(((~(arr_8 [i_0] [8] [i_0] [i_1 + 1]))), (((arr_7 [i_3] [i_2] [i_2] [i_3]) ? (arr_2 [i_0 - 1]) : (arr_8 [i_0 - 1] [i_1 - 2] [i_2] [i_3])))));
                    }
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        var_12 ^= (min(var_4, var_5));
                        arr_13 [i_0] [i_1] [i_0] = max(((((((-18435 ? 1559424619 : var_9))) && (((20007 + (arr_0 [i_1]))))))), var_0);
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_13 = (191 ? 1 : 1);
                        arr_17 [i_1] [i_1] [i_0] [i_1 + 1] = 1;
                        var_14 = (((arr_12 [i_0] [i_1 - 1] [i_5 + 1]) ? (min(((max((arr_10 [6] [i_1] [i_2] [i_0]), (arr_2 [i_1 + 1])))), (((arr_16 [i_5 - 1] [i_2] [i_1] [i_1] [i_0] [i_0 - 1]) ? (arr_12 [i_0] [8] [i_0]) : 33869)))) : (arr_6 [i_5 - 1])));
                    }
                    var_15 = ((-((((min((arr_9 [7] [i_0] [i_2] [i_2] [i_2] [i_2]), 0))) ^ (((arr_15 [8]) ? var_7 : (arr_15 [i_0 - 1])))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_16 = (arr_1 [18]);
        arr_20 [i_6] [i_6] = ((!(((9724607698769454290 << (((arr_12 [8] [16] [0]) + 1507532762)))))));
    }
    var_17 = -var_4;
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    arr_30 [i_9] [i_9] [i_7 - 1] = (2147483647 && 161973299);
                    arr_31 [i_9] = (min((~var_2), (arr_5 [i_9] [i_8] [i_7 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
