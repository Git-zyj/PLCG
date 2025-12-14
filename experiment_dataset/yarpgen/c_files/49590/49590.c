/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_5;
    var_14 = 255;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = arr_0 [i_0];
        var_16 = (((var_5 - var_1) ? var_2 : ((255 ? (arr_2 [i_0] [i_0]) : var_2))));
        arr_3 [i_0] [i_0] = 7;
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 = 32767;
                        var_18 = (((((25 ? var_4 : var_2))) ? ((((((var_8 ? (arr_12 [10] [i_2] [3] [3]) : (arr_0 [i_1]))) >= (((var_5 ? var_8 : var_3))))))) : 2736686562));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] [i_5] = (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_19 = ((var_4 ? (((arr_7 [i_1]) ? (arr_7 [i_1]) : var_9)) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                        var_20 = ((255 ? (arr_7 [i_2]) : (var_9 & var_6)));
                    }
                }
            }
        }
        var_21 &= ((var_1 ? (((var_11 ? var_11 : var_8))) : ((var_3 ? (arr_15 [i_1] [10] [7] [i_1] [i_1]) : var_6))));
    }
    #pragma endscop
}
