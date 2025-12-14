/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (var_2 * var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((max((arr_4 [i_0] [i_0] [i_0]), (arr_1 [2] [i_1]))), (arr_3 [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (arr_4 [i_3] [i_2] [i_0]);
                            arr_13 [i_1] [i_3] [i_2] [i_3] = (arr_5 [i_2]);
                            arr_14 [i_1] [i_1] [i_2] [i_1] = (((arr_1 [i_1] [i_2]) & (arr_11 [i_1] [i_1])));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_13 = (max(((((arr_9 [10] [i_1]) - (((arr_16 [i_1] [i_1] [8]) & (arr_3 [i_0] [i_0] [i_0])))))), (2376869616 - -1)));

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_14 = (((((arr_18 [i_5 + 2] [10] [10] [i_5]) ^ (arr_18 [i_5 + 1] [i_5 + 1] [11] [7])))) ^ (max((arr_10 [11] [i_1] [i_0]), (max((arr_15 [i_0] [i_0] [i_1]), (arr_6 [i_4]))))));
                        var_15 = (arr_12 [i_0] [i_1] [i_1] [2] [i_5 + 2]);
                        var_16 |= (min(13850428789492890338, 1));
                        var_17 = (arr_19 [11] [i_1] [i_4 + 2] [i_5 + 2]);
                    }
                    arr_20 [i_1] [i_1] [i_1] = (max((max((arr_4 [i_4 - 2] [i_4 - 2] [i_4 + 1]), (arr_4 [i_4 + 1] [i_4 + 2] [i_4 - 1]))), (6144 / 5649870050336057134)));
                }
            }
        }
    }
    var_18 = (min(var_18, (((var_3 + (((var_4 <= var_2) >> ((((max(var_7, var_5))) + 26437)))))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                var_19 = (49900 / 1);
                var_20 = ((arr_21 [i_6]) < 1);
                var_21 = (max((max((arr_22 [i_7 - 1] [i_7 + 1]), (arr_22 [i_7 + 1] [i_7 - 1]))), (arr_21 [i_7 - 1])));
            }
        }
    }
    #pragma endscop
}
