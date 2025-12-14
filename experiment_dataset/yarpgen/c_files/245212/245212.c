/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 = (((arr_0 [i_0] [i_0]) ? var_9 : ((((var_6 && (arr_0 [i_0] [i_0])))))));
        var_14 = (((max((((arr_1 [i_0]) ? -5460114324929223487 : (arr_1 [i_0]))), 55)) ^ ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (var_3 + 147))))));
        var_15 = ((((arr_0 [i_0] [i_0]) || ((max(var_10, var_3))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = ((18424660 ? var_3 : (arr_2 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 -= (((arr_4 [i_1] [i_1]) == (arr_3 [i_1] [i_2])));
                    var_18 = (max(var_18, ((((((-(arr_8 [i_1])))) ? (arr_0 [i_2] [11]) : 1)))));
                    arr_9 [i_3] [i_2] [i_2] [i_1] = (arr_3 [i_1] [i_2]);
                    var_19 = (((arr_7 [i_1] [i_2]) && (arr_7 [i_1] [i_1])));
                }
            }
        }
        var_20 = (arr_2 [i_1]);
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    arr_18 [9] [i_4] [i_6 + 1] = (((arr_15 [i_4]) ? ((max((arr_15 [i_4]), (arr_15 [i_4])))) : 18));
                    var_21 = ((~((((max(-16384, 1))) ^ 5487069539506482032))));
                }
            }
        }
        var_22 = (max(var_22, (arr_16 [i_4] [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}
