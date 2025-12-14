/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(((var_1 ? (43525 % var_0) : -56)), -1));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (((arr_4 [i_1 - 1]) | (arr_4 [i_1 + 3])));
                            var_18 = (((((arr_3 [i_0]) & var_8))) ? ((min((arr_3 [i_2 + 1]), (arr_3 [i_0])))) : (arr_3 [i_3]));
                        }
                    }
                }
                var_19 &= (min((min((max(14633, 13484994016736760429)), (arr_6 [i_1 + 3] [i_1] [1] [i_1] [i_1 + 3] [10]))), ((((11 / 22639) ? ((3433581847 ? (arr_7 [i_0] [i_0] [1] [i_1]) : 3304)) : var_5)))));
            }
        }
    }
    var_20 = var_1;

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 = (max(var_21, (var_11 | -108)));
        arr_13 [2] = (min((((18 != (arr_2 [i_4] [i_4] [2])))), ((-14 & (arr_2 [i_4] [i_4] [i_4])))));
        var_22 = (max(var_22, ((min((((arr_6 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) / (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((arr_6 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) / (arr_6 [i_4] [3] [i_4] [3] [i_4] [i_4]))))))));
    }
    #pragma endscop
}
