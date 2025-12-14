/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [1] [i_0] [i_2] = arr_9 [i_0] [4] [i_2] [i_0];

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (!var_5);
                        arr_14 [i_0] [i_2] [i_3] = (((!1) <= 0));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] = ((~((-(var_9 / var_0)))));
                            arr_23 [i_0] [4] [i_2] [i_4 - 1] [i_0] = (arr_3 [i_1 - 2] [i_0]);
                            var_13 = var_8;
                            var_14 = ((~(min(var_7, var_9))));
                            var_15 = var_8;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_26 [i_0] [i_4 + 1] [1] [i_0] [i_0] = var_9;
                            arr_27 [i_0] [i_0] [i_0] [4] [i_0] [i_0] = ((((((arr_19 [i_6] [i_6] [i_0] [i_6] [i_6]) | (var_8 % 1)))) || (min(0, var_6))));
                        }
                        arr_28 [i_0] = (((arr_11 [i_0] [i_4]) || 1073741808));
                    }
                    var_16 = ((var_5 % (arr_15 [4] [4] [i_1 - 2] [15])));
                }
            }
        }
    }
    var_17 = (var_7 - var_11);
    #pragma endscop
}
