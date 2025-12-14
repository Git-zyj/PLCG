/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? ((((!(1567068314 == 1567068314))))) : ((-5692679083611946931 ? var_2 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= (((((var_4 >= (arr_5 [i_0] [i_1]))))) | ((15 ? (arr_7 [i_0] [i_1]) : (arr_7 [9] [9]))));
                arr_8 [i_0] [5] [i_0] = var_10;
                var_13 = ((((20 == (arr_3 [i_0]))) ? (((arr_3 [i_0]) ? var_10 : (arr_3 [i_1]))) : 2097150));
                arr_9 [i_0] [9] [i_0] = (((var_9 ? var_8 : (arr_0 [2] [2]))) & ((1433976545 ? 49203 : 5)));
                arr_10 [i_0] [13] [i_0] = -14818;
            }
        }
    }
    var_14 = var_9;
    var_15 = var_10;
    #pragma endscop
}
