/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(((((arr_3 [i_0]) < ((((arr_2 [i_0] [11]) != (arr_1 [i_0] [i_0]))))))), (((arr_0 [i_1] [i_0]) | (arr_4 [i_1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_1] [i_2] [i_1] = (arr_3 [i_0]);
                    arr_8 [i_2] = ((((~(arr_5 [9] [i_2] [9]))) != (((((arr_1 [i_2] [10]) == (((arr_0 [i_0] [i_1]) - 1))))))));
                    arr_9 [i_2] [i_1] [19] [i_2] = max(-70, -828670884475730279);
                    arr_10 [i_1] [i_2] = (arr_1 [i_0] [i_0]);
                    var_12 = ((((((((arr_2 [13] [13]) % (arr_3 [16])))) * (((arr_1 [i_0] [i_1]) / (arr_6 [19]))))) % (arr_4 [i_1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_13 = (1 < -3295936924199790524);
                    arr_13 [i_0] [i_1] [i_3] [i_3] = (39945 / 828670884475730278);
                    var_14 = ((((~(arr_11 [21] [i_1] [i_0]))) % (arr_11 [i_3] [i_1] [i_0])));
                    arr_14 [i_0] [i_1] [i_3] = ((!(arr_0 [i_0] [i_0])));
                    var_15 = (((arr_5 [i_0] [i_1] [i_3]) / (arr_5 [i_0] [i_0] [i_3])));
                }
                var_16 = (max(((-((((arr_0 [i_0] [1]) <= (arr_5 [6] [i_1] [i_1])))))), (((arr_2 [i_0] [i_0]) | (((!(arr_6 [i_0]))))))));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
