/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = 126;
        arr_4 [i_0] = -283899660;
        arr_5 [i_0] = (((-(arr_2 [i_0]))));
        var_13 = var_5;
        var_14 = (max(var_14, -1472725602));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 *= 75;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_16 = 19;
                    var_17 = (-(arr_6 [i_1] [i_3]));
                }
            }
        }
        var_18 = 0;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_19 ^= var_9;
        var_20 = (min(1, -175));
        arr_15 [i_4] [i_4] = (!(((283899660 ? (~0) : (-1472725606 * 0)))));
        var_21 &= (((-var_3 / 255) ? ((min(7, (arr_14 [i_4] [i_4])))) : 1));
        var_22 ^= min((((((-22646 | (arr_14 [i_4] [9]))) > ((((arr_1 [17]) != (arr_14 [i_4] [i_4]))))))), (min(1, (arr_14 [i_4] [i_4]))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_18 [0] [0] &= (!1);
        var_23 = (max((((-((-(arr_2 [i_5])))))), (min((arr_12 [i_5]), (arr_2 [2])))));
        arr_19 [i_5] = (arr_1 [i_5]);
        arr_20 [8] |= (arr_13 [i_5]);
        var_24 = (max(var_24, ((min((max(1, 9317984152992790699)), 8913)))));
    }
    var_25 += var_3;
    #pragma endscop
}
