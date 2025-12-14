/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (-117 % var_8);
        var_19 = (((arr_1 [i_0 + 1] [i_0 - 1]) | ((((arr_1 [i_0 + 1] [i_0 - 1]) > 13)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (((arr_1 [i_0] [i_1 + 1]) ? (arr_3 [i_0 + 1] [i_1 + 2] [i_2 + 1]) : 32767));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1 + 4] [i_2] [i_3] = ((~(arr_1 [i_0 - 1] [i_0 - 1])));
                        arr_11 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_3 + 2] = ((242 ? (var_7 >= 123) : (var_10 / var_17)));
                        var_21 = (((arr_5 [i_1 - 2] [i_2 - 1]) > (arr_3 [i_0 + 1] [i_0] [i_0 + 1])));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = (arr_6 [i_2] [i_2 - 2]);
                    }
                    var_22 = -86;

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_23 = arr_9 [i_0] [i_0] [i_0 + 1] [i_1 - 2];
                        arr_15 [i_2] [i_2 + 2] [i_1 + 1] [i_0 + 1] [i_2] = (arr_2 [i_0 - 1] [i_0] [i_0 + 1]);
                        arr_16 [i_2] [i_2 - 1] [i_1] [i_2] = (((!var_11) | ((var_7 ? var_5 : -1))));
                        var_24 = (arr_7 [i_0 - 1] [i_2 - 1] [i_4] [i_4]);
                        var_25 &= -114;
                    }
                }
            }
        }
        var_26 = (((arr_4 [i_0] [2]) > (arr_4 [i_0 - 1] [0])));
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_27 = (max(var_27, ((max((max(-197, ((138 + (arr_18 [i_5]))))), ((86 & (var_12 - var_13))))))));
        arr_20 [i_5] = ((((min((arr_18 [i_5 - 3]), 0))) >= ((max(62, 127)))));
    }
    var_28 = var_7;
    #pragma endscop
}
