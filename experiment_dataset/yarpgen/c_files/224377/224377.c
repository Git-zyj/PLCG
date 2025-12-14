/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_7 && var_3) ^ var_12))) * var_6));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_1 [i_1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [18] [1] = (arr_5 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_1] [i_2] = (arr_3 [i_0]);
                    arr_10 [20] [i_1] [i_0] = (arr_5 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_15 [i_1] [10] = ((((arr_0 [20]) >> (((arr_3 [6]) - 12306)))) | (arr_5 [i_3] [i_2] [i_0]));
                        arr_16 [i_0] [i_1] [i_2] [4] = (arr_6 [i_0] [i_3]);
                    }
                }
            }
        }
    }
    var_19 = ((var_12 >> (var_2 + 106)));
    #pragma endscop
}
