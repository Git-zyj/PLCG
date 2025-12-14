/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((min((arr_1 [i_0]), 1))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_1)) : -var_4)), (((~(arr_1 [i_0]))))));
        arr_3 [i_0] = (arr_0 [2]);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = var_0;
        arr_7 [i_1] [i_1] = ((max(-32425, (arr_5 [i_1]))));
        arr_8 [i_1] [i_1] = 32425;

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_11 [i_1 - 3] [i_1] = var_8;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = ((((max(((32425 ? var_6 : (arr_18 [i_2 - 1] [i_2] [i_2] [i_4] [i_1]))), var_6))) ? ((var_3 ? (arr_0 [i_3]) : ((max(3799508884, 3799508854))))) : (arr_0 [1])));
                            arr_20 [i_1 - 1] [i_1] [i_3] [i_4] [i_5] [i_5] = (max((((((max((arr_13 [i_1] [i_1] [i_3] [i_4]), var_12))) ? 2048542791423972070 : (arr_4 [i_1])))), ((7962605491221600561 - (arr_17 [i_1] [i_1] [i_1] [i_1] [i_5])))));
                            arr_21 [9] [9] [9] [i_1] [9] = 1632001223316257631;
                            arr_22 [i_1] [i_5] = (((var_13 - var_9) ? 495458427 : (((max(var_11, (max(var_6, 32417))))))));
                        }
                    }
                }
            }
            var_15 = 2048542791423972070;
        }
        arr_23 [i_1] = ((var_0 >= (((max(var_1, (32416 == var_7)))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_16 = ((((max(-32446, var_7)) | (arr_25 [i_6]))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_17 = (((-32421 + 2147483647) >> (32424 - 32395)));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_18 = -32443;
                            arr_35 [i_6] [i_9] [i_8] [i_8] [1] [i_8] [i_8] = (~var_1);
                        }
                        arr_36 [i_6] [i_8] [i_8] [i_9] [i_9] = 3799508851;
                    }
                }
            }
        }
        arr_37 [i_6] [i_6] = ((20 ? (var_0 && 242) : (((((var_10 ? (arr_31 [i_6]) : (arr_26 [i_6] [i_6] [i_6])))) ? ((min(55, var_5))) : (arr_31 [i_6])))));
    }
    var_19 = var_13;
    var_20 = (min(var_8, var_5));
    #pragma endscop
}
