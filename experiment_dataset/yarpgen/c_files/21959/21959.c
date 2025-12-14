/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(0, 5482972471055333701));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_15 = var_13;
                    var_16 = var_9;
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 -= (arr_11 [i_4] [i_2] [i_1] [i_0]);
                    arr_12 [i_0] [i_0] [i_1] [i_0] = (((arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1])));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_0]);
                    var_18 = var_12;
                    var_19 = (((arr_8 [i_0] [14] [19] [i_4]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : ((~(arr_0 [i_0] [i_0])))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_20 = (min(var_20, (1574489226 & var_7)));
                    var_21 *= (-124 != var_7);
                    arr_16 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] |= var_1;
                    arr_17 [i_0] = -113;
                }
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    var_22 = (((((-(arr_7 [i_0] [i_0] [i_0])))) ? (-124 > 32736) : ((var_8 / (arr_9 [i_0] [i_1])))));
                    arr_20 [i_0] [i_1] [i_0] [2] = ((5516242768911258802 ? (arr_10 [i_0] [i_0] [i_0] [9]) : (arr_7 [i_0] [8] [i_2])));
                }
            }
            arr_21 [i_0] = ((217 ? 32736 : 9223372036854775790));
            arr_22 [i_0] = (((arr_6 [10] [i_1] [i_1 + 1]) ? (arr_18 [i_0] [i_1 + 1] [12] [i_1] [i_1] [i_1 + 1]) : var_6));
        }
        arr_23 [i_0] = (min((max(30686, (arr_7 [i_0] [i_0] [i_0]))), (((((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [19]) >> 0))) <= (max((arr_3 [i_0] [i_0] [i_0]), -5516242768911258816)))))));
        arr_24 [i_0] = ((9223372036854775807 > ((((arr_18 [9] [i_0] [9] [i_0] [i_0] [9]) ? (128 != 1745459531) : (var_0 + var_12))))));
    }
    var_23 = var_8;
    #pragma endscop
}
