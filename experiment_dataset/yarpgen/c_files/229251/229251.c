/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = ((!(arr_5 [i_1])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_14 [i_1] = ((((max(var_7, (arr_0 [i_0] [i_0 + 2])))) == -916637963));
                        arr_15 [i_1] [7] [i_1] = arr_13 [i_1] [i_2 + 2] [4] [i_3];
                        arr_16 [1] [i_1] [i_1] [i_0] = (max((max(var_5, (min((arr_13 [i_2 - 2] [i_3] [2] [i_1]), (arr_6 [3]))))), -916637956));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_11 = ((-(arr_8 [i_0 + 2] [i_1] [i_4 + 2])));
                        var_12 -= (arr_19 [i_0 - 1] [i_0 + 2] [10] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        var_13 = arr_8 [i_2 - 2] [i_1] [i_2 - 2];
                        var_14 = -22320;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_15 = 22339;
                        arr_25 [i_1] [i_2] [10] [i_0] [i_1] = ((+(min((arr_13 [i_2 - 2] [4] [i_2 + 2] [10]), (arr_13 [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 2])))));
                    }
                    var_16 &= ((-(arr_20 [i_0] [4] [2] [1])));
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = ((~(max(var_0, (var_1 ^ var_8)))));
    var_19 = var_2;
    var_20 = (max(var_20, -var_9));
    #pragma endscop
}
