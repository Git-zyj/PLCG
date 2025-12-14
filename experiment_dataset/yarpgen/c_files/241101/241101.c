/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_0 ? var_4 : (var_8 ^ 1065353216))), (((~(var_6 | var_6))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_6 + ((((arr_2 [i_0]) > 115)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_2 + 3] [i_0] [i_0] [i_0] = ((-(arr_0 [i_1] [i_0])));
                    arr_11 [9] = var_0;
                    arr_12 [i_0] [i_0] &= ((((((arr_3 [i_2 + 2]) > (max(var_4, 119))))) & ((-(arr_8 [i_2 + 3] [i_2 + 1])))));
                }
            }
        }
        var_11 = (max(-76, 4294967282));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_12 ^= (((-(((arr_15 [6]) ? var_9 : var_2)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_23 [i_3] [i_3] [5] = ((!((((((arr_17 [i_4]) ^ var_6)) + (arr_5 [i_4]))))));
                    arr_24 [i_3] [i_4] [i_4] [i_3] = ((-(max(((min((arr_13 [i_3]), (arr_20 [i_3] [i_3] [i_3] [i_3])))), (min(76, var_0))))));
                    var_13 = (max(var_13, ((((((((29 ? (arr_1 [i_3]) : var_1)) + (((-2 + 2147483647) >> (var_8 - 18337854395689217306)))))) ? (((((-(arr_1 [i_4])))) ? (arr_9 [i_3] [i_3] [i_3]) : 127)) : ((((arr_6 [i_3]) && (arr_6 [i_5])))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = var_5;
        arr_28 [i_6] [i_6] &= (arr_22 [6] [6]);
    }
    var_14 ^= var_2;
    #pragma endscop
}
