/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((arr_0 [i_0]) > ((var_7 | (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_0] &= (((arr_4 [i_0] [i_1 + 3] [i_2 - 2]) ? (arr_0 [i_0]) : ((max((arr_6 [i_0] [i_1 + 1] [i_2 + 1]), (arr_6 [i_0] [i_2 - 1] [i_2 + 1]))))));
                    arr_8 [i_2] [i_1 - 1] = ((((((arr_5 [i_2] [i_1 + 2] [1]) ? (arr_5 [i_2] [13] [i_2]) : (arr_5 [i_2] [i_1 + 1] [i_2 - 1])))) ? (((((var_2 & (arr_5 [i_2] [3] [i_2])))))) : ((var_8 ? (arr_5 [i_2] [i_1 + 1] [i_1 + 3]) : (arr_5 [i_2] [i_1 + 1] [i_1 + 3])))));
                    var_11 = ((((((var_1 % var_5) ? (((arr_1 [i_2]) ? (arr_4 [i_0] [i_1] [i_2]) : var_7)) : ((var_0 ? var_6 : (arr_1 [i_0])))))) || ((max(((min(var_0, var_0))), (arr_6 [i_1 + 1] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_12 &= var_1;
    var_13 = (max(-var_7, ((var_3 ? (((var_5 ? var_7 : var_2))) : var_1))));
    var_14 = ((var_1 == (max(var_9, var_4))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_15 = (max(var_2, (var_2 - var_10)));
                    var_16 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
