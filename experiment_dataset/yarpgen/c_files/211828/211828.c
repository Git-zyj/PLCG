/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((var_9 + var_0), 226)) + -23497));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (max(((56933 ? ((min((arr_3 [i_0 + 1] [i_1] [i_0]), 16380))) : (arr_3 [1] [i_1] [i_0 + 1]))), (min(37916, (((-32767 - 1) ^ 148))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_12 = (min(var_12, ((min((min((var_9 + -16379), (arr_3 [i_2 - 1] [10] [i_2 + 1]))), 1449858409)))));
                    var_13 ^= ((((min(56931, (arr_3 [i_2] [0] [i_0])))) ? (((!((min((arr_5 [i_0] [4] [i_1] [i_2 + 1]), 8602)))))) : (arr_5 [i_2] [12] [i_1] [i_2])));
                    arr_6 [i_1] [i_1] [i_1] = (arr_3 [i_0 + 1] [i_1] [i_0]);
                    var_14 = ((((min((arr_3 [i_2 + 1] [i_1] [13]), (arr_3 [i_2 - 1] [i_1] [i_2])))) > ((var_2 ? (arr_3 [i_2 + 1] [i_1] [i_2 + 1]) : (arr_3 [i_2 - 1] [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_9 [i_1] [i_1] [i_3] = (i_1 % 2 == 0) ? ((min(((((arr_5 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) >> (((arr_5 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) - 212))))), ((449772860 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) : ((min(((((arr_5 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) >> (((((arr_5 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) - 212)) + 51))))), ((449772860 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                    var_15 = (min(var_15, (min(((min((arr_1 [i_0 + 1]), (56933 ^ 16380)))), ((var_7 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_0))))));
                    var_16 = ((min(16381, (0 / 16397))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_12 [i_1] [i_1] [i_4] = (min(((max(0, 1))), (arr_7 [i_1] [i_1] [i_0 + 1])));
                    arr_13 [i_0 + 1] [i_1] [i_4] [i_0 + 1] = (max((((arr_0 [i_0 + 1]) & (((arr_3 [i_4] [i_1] [i_4]) ^ -16382)))), (max((-16400 ^ 56933), (arr_1 [i_0 + 1])))));
                }
                arr_14 [i_1] [i_0] = (max(var_8, (((~(arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
