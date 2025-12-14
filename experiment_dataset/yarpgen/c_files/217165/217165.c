/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_11 ? (0 * var_13) : (((2122656074 ? -2122656075 : 1352904541))))) << (min(65535, (var_1 || var_9)))));
    var_18 &= ((((max(((min(var_0, 127))), (max(25, var_16))))) ? (max(-20334, var_5)) : ((max(((max(-10, var_10))), ((var_0 ? var_8 : var_8)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 += ((((arr_0 [20]) & (arr_1 [i_0]))) | (arr_0 [6]));
        arr_2 [i_0] [i_0] = ((max(var_3, (var_11 < var_9))) < ((var_2 * (min((arr_0 [i_0]), -2126559657)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = 1;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_9 [10] [i_2] [i_2] [i_3] = 127;
                    var_21 += (1 <= 14198137938591544045);
                    arr_10 [i_1] [i_2] = ((~((~(min((arr_8 [i_1] [i_2] [i_2]), 131071))))));
                }
            }
        }
        var_22 = (max(var_22, ((max((((max(var_11, 131092)))), (max((max(var_16, (arr_3 [i_1] [19]))), (min(-121, 10261808266699555272)))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_23 = (-1635069258 <= 4294967294);
        var_24 *= (arr_11 [i_4]);
    }
    #pragma endscop
}
