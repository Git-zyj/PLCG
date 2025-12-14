/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((((arr_1 [i_0]) ? (arr_3 [i_0]) : var_7))) ? var_16 : ((1001601814287227660 << (arr_0 [i_0]))))) * (arr_3 [i_1])));
                var_19 = (((((((var_13 ? (arr_5 [i_0] [i_1]) : var_12))) ? (min((arr_1 [i_0]), -7199)) : (arr_1 [i_0]))) ^ ((((arr_4 [i_0 - 1] [i_0]) ? (arr_4 [i_0 - 1] [i_0]) : (arr_4 [i_0 + 1] [i_0]))))));
                arr_7 [i_0] [i_1] [i_1] = (((arr_5 [i_0] [i_1]) <= (((var_9 ^ ((0 ? var_12 : (arr_0 [i_0]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = -127;
        var_21 = ((~(((arr_0 [i_2]) ? 15651862011426268739 : (arr_4 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_22 = (min(((((arr_0 [i_3]) && (var_7 < var_0)))), var_12));
        var_23 = (((arr_3 [i_3 + 1]) >> (((arr_3 [i_3 + 1]) - 3775558202085728667))));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        var_24 = (((((((((-(arr_12 [i_4]))) + 2147483647)) << (784664145 - 784664145)))) ? (arr_4 [i_4] [i_4]) : ((((min(13, (arr_4 [i_4] [i_4])))) ^ (arr_12 [i_4])))));
        var_25 = (min(var_25, ((min(0, 8342649719659358581)))));
        var_26 = ((var_8 ? (((arr_3 [i_4]) ? (((min(var_18, -5608)))) : ((var_5 ? (arr_3 [i_4]) : (arr_9 [i_4] [i_4]))))) : 3774160446));
        var_27 = (arr_0 [i_4]);
    }
    #pragma endscop
}
