/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_9;
    var_12 = ((((min(26, var_4))) - (var_6 < -var_6)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((+(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((~(arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((max((((arr_4 [i_3] [i_1]) ? (arr_6 [i_1] [i_2] [i_1]) : (arr_8 [i_1] [i_0]))), (max((arr_6 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_0]))))) - (arr_8 [i_0] [i_0])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((((var_4 & (arr_0 [i_1])))) ? (((arr_6 [i_2] [i_1] [i_2]) ? (((5 ? 4294966784 : var_6))) : -6285487426587269077)) : (((-(arr_5 [i_0] [i_0] [i_2])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = min((((!((((arr_0 [i_4]) ? var_3 : (arr_4 [i_4] [i_4]))))))), (min(17, (min((arr_5 [i_4] [i_4] [i_4]), 5)))));
        var_14 = (max(var_14, (min((0 + 5858804391773642916), (arr_9 [i_4] [i_4] [i_4] [i_4])))));
    }
    #pragma endscop
}
