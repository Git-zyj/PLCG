/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_1, (((((var_15 ? var_1 : var_4))) ? (4087131803 / 65507) : (((var_3 ? var_12 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((((min(var_7, 819498388))) ? (((29594383 ? ((-2016223363 ? (arr_1 [i_0]) : 0)) : var_13))) : ((2627357360 % (arr_3 [i_1])))));
                arr_4 [i_0] [i_1] [i_1] = (((((var_15 ? (arr_3 [i_1]) : var_10))) % ((2627357353 ? 1667609936 : (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] = ((((0 ? 2627357334 : 1667609935))) ? (((((arr_1 [i_0]) > 2627357352)))) : (min(0, (max(2627357356, var_1)))));
                var_19 = (((((var_15 ? var_14 : 327787749))) ? (((arr_0 [i_1] [i_0]) | var_1)) : (((arr_0 [i_0] [i_1]) / (arr_0 [i_1] [i_0])))));
            }
        }
    }
    var_20 = var_3;
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = (((max(((max(62576, var_1))), ((2627357341 ? var_5 : var_0))))) ? ((((((arr_6 [i_2] [i_3]) ? (arr_10 [i_2 - 1] [i_3] [i_4]) : 65524)) - (arr_6 [i_2 + 3] [i_2 + 2])))) : ((((min((arr_10 [i_2] [i_3] [i_4]), (arr_8 [i_2 - 1] [i_2 - 1] [i_2])))) ? (((var_6 ? var_3 : var_14))) : (min(0, 2627357360)))));
                    var_22 = (max(((4978 ? var_1 : ((var_16 + (arr_9 [i_2]))))), (((((var_3 ? 1667609932 : 33465)) >= ((((arr_9 [i_4]) ? 1580775484 : -305585022))))))));
                }
            }
        }
    }
    #pragma endscop
}
