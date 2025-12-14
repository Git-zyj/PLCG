/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_12;
    var_14 = (max(var_14, (~var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(220, -9223372036854775797));
                var_15 = (max((((var_5 >= ((var_11 ? (arr_2 [i_0]) : var_3))))), (min(((-(arr_2 [i_0]))), (var_3 + var_6)))));
                arr_7 [i_0] [i_0] = (max((((~(arr_2 [i_0])))), var_7));
                arr_8 [i_0] [i_1] = (((var_3 ? (arr_5 [i_1 + 1] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1 - 1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_16 = (min(var_6, var_6));
                    var_17 = (max(var_17, (((!(((var_6 ? (arr_12 [i_2] [i_2]) : var_1))))))));
                    arr_19 [4] = (max(var_10, var_5));
                    var_18 = (var_10 / var_1);
                }
            }
        }
    }
    #pragma endscop
}
