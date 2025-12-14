/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((max(15, var_13)), -var_14));
        arr_4 [i_0] = (max(((!(arr_0 [i_0]))), var_6));
        arr_5 [10] = var_1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_9 [1] = (arr_7 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = var_3;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = ((max((max(var_6, (arr_11 [i_2]))), var_14)));
        var_16 += (((max(var_10, var_11)) / (((-(var_7 != var_8))))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_21 [i_3 - 2] [i_3] [i_3] = (min(var_2, (((~(arr_17 [i_3 - 1] [12]))))));
            arr_22 [14] [i_4] = (max(((~(var_7 || -5557841755115862653))), (max((-23324 * var_11), var_12))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, ((max((max(var_7, ((var_11 & (arr_18 [i_3] [i_3]))))), (max(-32763, 5557841755115862653)))))));
                        var_18 &= var_4;
                    }
                }
            }
        }
        var_19 = var_5;
        arr_27 [i_3] = (arr_18 [i_3 - 2] [i_3]);
    }
    var_20 = ((var_14 >> (var_11 - 56998)));
    #pragma endscop
}
