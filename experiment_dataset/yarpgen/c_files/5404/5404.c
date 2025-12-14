/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? -1 : -9223372036854775781)) * ((max((arr_0 [i_0] [i_0]), -var_10)))));
        var_13 = ((((-(((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 1295881687)))) <= ((2091284461 ? (arr_1 [i_0]) : ((var_2 ? var_1 : (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = ((((((170 ? -20288 : -32745)) + 2147483647)) << ((((((~(arr_3 [i_1]))) + 76)) - 22))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = (i_2 % 2 == 0) ? (((min((((arr_6 [i_1] [i_1]) / (arr_6 [i_2] [i_2]))), ((-(arr_12 [i_2] [i_2]))))) >> ((min(var_1, (arr_0 [i_1] [i_1])))))) : (((((min((((arr_6 [i_1] [i_1]) / (arr_6 [i_2] [i_2]))), ((-(arr_12 [i_2] [i_2]))))) + 2147483647)) >> ((min(var_1, (arr_0 [i_1] [i_1]))))));
                        var_16 = ((~(arr_0 [i_1] [i_3 - 1])));
                        var_17 = (max(var_17, ((max((((arr_13 [i_4 + 1] [i_2] [i_3 - 1] [i_1] [i_3]) ? 167 : (arr_13 [i_1] [i_1] [i_3 - 1] [i_1] [i_4 - 2]))), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                }
            }
        }
    }
    var_18 = ((var_9 ? var_1 : ((var_0 ? var_1 : var_9))));

    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        arr_19 [i_5] = (min(((((arr_16 [i_5 - 1] [i_5 - 1]) / (arr_16 [i_5 + 2] [i_5])))), (((arr_0 [i_5 + 1] [i_5 + 3]) ? ((((arr_17 [i_5]) + 26816))) : (((arr_1 [i_5]) ? var_9 : 251))))));
        var_19 = (max(var_19, (((!(((max(1, 2199023255551)))))))));
        arr_20 [i_5] = (arr_1 [i_5]);
    }
    #pragma endscop
}
