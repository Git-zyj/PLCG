/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_4 - 1] [i_0] [i_2] [i_0] [i_0 - 4] = (16128 > 49408);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_2 + 2] [i_0] [i_4 - 1] = 32767;
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [4] [i_5]);
                            var_15 ^= (((((arr_7 [i_1] [i_2] [i_3] [i_1]) ? 16128 : (arr_4 [i_3 + 1] [i_5 + 1]))) ^ ((((arr_17 [i_2 + 2] [i_3 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1]) ? 32768 : (arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_2 + 2] [i_5 + 2] [i_0 - 1]))))));
                            arr_20 [2] [i_0] [7] [i_0] [i_0 - 1] = (arr_16 [i_3] [i_3] [i_3] [i_3 + 1] [i_5 - 1]);
                            var_16 = (max(var_16, (arr_12 [i_0 - 4] [i_0 - 4] [i_1] [i_2] [i_3] [i_2] [i_5])));
                        }
                        var_17 -= (max((arr_7 [i_0 + 1] [i_0] [i_0 - 2] [i_1]), (((arr_5 [i_0 - 3] [i_2 + 3] [i_3 + 2]) + (arr_7 [i_0 - 1] [1] [i_0 - 1] [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = (max(var_18, ((min((((~(arr_0 [i_1])))), (((arr_4 [i_0 - 3] [i_1]) ? var_8 : (arr_22 [i_6] [i_1] [i_1] [i_0 - 3]))))))));
                        arr_23 [i_0 - 4] [i_0 - 4] [1] [i_0] = (16128 + 1);
                        arr_24 [i_0] [i_0] = arr_0 [i_0];
                    }
                    var_19 = (min(var_19, 0));
                    arr_25 [i_0] [i_1] [i_0] = (arr_10 [i_0] [1] [i_1] [i_1] [6] [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
