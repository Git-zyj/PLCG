/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_7);
    var_17 = ((!((max((((var_12 ? 4230785361 : var_2))), var_3)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 1] [i_0 - 1]);
        var_19 ^= (((arr_0 [i_0 - 1] [i_0]) ^ (arr_0 [i_0 - 1] [5])));
        var_20 = (((arr_1 [15] [15]) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_2] = (arr_7 [i_1]);
                    arr_11 [i_2] [i_2] = (max((((arr_9 [i_2] [i_2] [i_2] [i_3]) ? (((var_8 ? 4230785361 : (arr_7 [3])))) : -15584313533697785801)), ((min(-5362503073572207394, (min((arr_2 [i_1] [i_2]), 64)))))));
                    var_21 = (((arr_1 [i_1] [i_3]) ? ((((((arr_6 [i_2] [i_2]) ? 5362503073572207419 : 142))) ? ((536870911 ? 281474976710655 : 1121318096)) : (arr_1 [i_3] [i_2]))) : ((max((min(5362503073572207393, 14941)), (55 < var_14))))));
                }
            }
        }
        arr_12 [i_1] [i_1] = min((max((min(12088453841779218425, 127)), (((15584313533697785801 ? var_2 : (arr_1 [i_1] [i_1])))))), ((max(var_12, (min(6951288101555677454, 32397))))));
        arr_13 [i_1] = (max(((39691 ? (arr_4 [i_1] [i_1]) : 6358290231930333182)), (arr_2 [i_1] [i_1])));
        var_22 = (min(var_22, (((~((6358290231930333156 ^ (~10689))))))));
        arr_14 [i_1] = (-(max(((min(64, var_3))), 6358290231930333156)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] = (((((12088453841779218468 ? (arr_1 [i_4 + 1] [i_4 - 1]) : 0))) || 31494));
        arr_19 [i_4 - 1] = (((arr_7 [i_4 - 1]) << (((arr_9 [1] [i_4 - 1] [i_4 + 1] [i_4 - 1]) + 3714889378765563578))));
        arr_20 [i_4 + 1] = (arr_17 [i_4 - 1]);
        var_23 = (min(var_23, 0));
        var_24 = (min(var_24, (((-68 < (arr_2 [i_4 + 1] [i_4 - 1]))))));
    }

    for (int i_5 = 4; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_5] = ((-(((181 || ((max(2147483647, -1936246011))))))));
            arr_26 [i_5] [i_5] = ((((max(31494, -68)))));
            var_25 -= ((-((max(0, 181)))));
        }
        var_26 = (max(var_26, ((((((0 >> (((arr_22 [6] [i_5]) - 1872357603717701902))))) | ((~(arr_22 [1] [i_5]))))))));
    }
    #pragma endscop
}
