/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0] [i_0]);
        arr_3 [8] [8] |= (((((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 - 3]))) << (134217724 - 134217713)));
        arr_4 [16] &= ((((((((arr_2 [i_0 - 3]) ? (arr_0 [i_0 - 2]) : (arr_2 [i_0]))) << (((max(-134217722, (arr_2 [i_0]))) - 198))))) ? (arr_1 [0] [16]) : (((arr_1 [1] [1]) ^ (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 *= (max((((arr_1 [10] [i_1 - 3]) ? (arr_8 [14]) : (arr_1 [1] [i_1 - 1]))), ((var_16 / (arr_2 [i_1])))));
        arr_9 [i_1] = (((arr_7 [i_1 + 1]) << (((((((arr_7 [i_1]) / (arr_6 [i_1]))) | (arr_0 [i_1 - 2]))) - 27808))));
        arr_10 [i_1] = (((min((arr_6 [i_1 - 3]), (arr_6 [i_1 - 2]))) << (((((arr_6 [i_1 - 3]) / var_16)) - 200980929885047))));
        arr_11 [i_1] = (((((((arr_5 [i_1 + 1] [i_1]) != (arr_5 [i_1 - 3] [i_1]))) ? (arr_2 [i_1]) : -134217720)) == (((arr_1 [i_1] [i_1]) & (arr_1 [i_1] [i_1 - 2])))));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = var_2;
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        var_19 ^= ((240 ? (max((0 | 5868078142362301223), ((((arr_12 [i_4]) & (arr_0 [i_2 - 3])))))) : (((16 ? (((arr_1 [i_3] [i_3 + 3]) ^ (arr_19 [i_4 - 3] [i_4 - 3] [i_3] [i_2]))) : (234 | 0))))));
                        arr_22 [i_5 - 1] [i_2] [i_5 - 2] [17] = (arr_6 [1]);
                        var_20 += var_11;
                        var_21 = (max(var_21, (((((var_0 ^ var_11) << (((max(134217732, (arr_5 [i_4 + 3] [i_2 - 3]))) - 134217718)))) > ((((arr_0 [i_2 - 3]) > (arr_0 [i_2 - 2]))))))));
                    }
                }
            }
        }
        arr_23 [i_2] = ((var_0 < (((((arr_0 [i_2]) + var_8)) & (arr_8 [i_2])))));
        var_22 &= (arr_1 [1] [i_2]);
    }
    var_23 = var_2;
    var_24 = var_6;
    var_25 = var_10;
    #pragma endscop
}
