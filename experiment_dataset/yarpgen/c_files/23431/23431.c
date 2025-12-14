/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = 1;
            var_19 -= (arr_4 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_0] = (arr_3 [i_0] [i_0]);
            arr_10 [i_0] = var_9;
            var_20 = ((((var_4 > (arr_4 [i_0] [i_2])))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 |= var_14;
                    arr_16 [i_0] [i_0] [i_3] [i_3] = ((~((var_15 ? 35184372088831 : 4006))));
                    var_22 = ((!(arr_2 [i_0])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] = (((((arr_2 [i_5]) == (arr_0 [i_5] [i_5])))) == ((0 >> (((arr_0 [i_5] [i_5]) + 11773)))));
        arr_21 [i_5] = (max((((arr_2 [i_5]) ? (arr_14 [i_5] [i_5] [i_5]) : (arr_14 [i_5] [i_5] [i_5]))), (((arr_14 [i_5] [i_5] [4]) ? (arr_8 [i_5] [i_5] [i_5]) : (arr_14 [i_5] [i_5] [i_5])))));
    }
    #pragma endscop
}
