/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((var_2 / ((76 ? -120 : var_8))));
                arr_9 [i_0] [i_1] = ((((min(var_3, (!var_10)))) <= ((var_4 ? var_9 : 58083))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_17 [i_2 + 3] [i_2] [i_4] = var_4;
                    arr_18 [i_2] [13] [i_2 + 4] [i_2] = -120;
                    arr_19 [i_2] [i_2] = 1073741823;
                    arr_20 [10] [i_4] = (((min(1863043496417875937, -1871501773146952053)) > var_19));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_24 [16] [16] [i_2] = ((-var_12 ? (0 | var_0) : ((max(var_16, var_5)))));
                        arr_25 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_2] = var_10;
                        arr_26 [i_2] [7] [i_3] [i_4] [i_5] = 18;
                        arr_27 [i_2] [i_3] [i_2] [15] = -1108288338;
                    }
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
