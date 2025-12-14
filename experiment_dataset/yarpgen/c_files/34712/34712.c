/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = 17358253969464365226;
        arr_2 [i_0] [i_0] = (((((-((51823 ? (arr_1 [i_0] [i_0]) : var_12))))) ? var_0 : 17358253969464365216));
        var_14 = (((((((max(12843, 17358253969464365226))) ? ((12843 ? var_12 : var_0)) : (min(12843, (arr_0 [i_0])))))) ? (max((min(17358253969464365226, 9223372036854775807)), 52668)) : ((((((max((-32767 - 1), -25044)))) * (((arr_0 [i_0]) / 12873)))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 ^= var_5;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, (((((!(arr_10 [i_1 - 1]))) ? ((11896 ? (arr_10 [i_1 - 1]) : (arr_10 [i_1 - 1]))) : ((min(-13, var_7))))))));
                    var_17 = (max(var_17, (arr_9 [i_1] [10] [i_3])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_18 -= (arr_7 [i_4 - 1] [i_4 - 1]);
        var_19 ^= ((10862 ? -0 : (!3618059917)));
        var_20 = ((-((7 ? (arr_6 [i_4 - 1] [i_4]) : -2305444473575728936))));
    }
    var_21 = 12873;
    var_22 = ((((max((((2635122032 ? var_5 : 1))), ((14 ? -8927067784796568586 : 1664587028))))) ? var_8 : 12813120101264359838));
    var_23 = 90;
    var_24 = (max(((((1 ? var_11 : var_12)))), (((((56 ? 20952 : 15095))) ? var_3 : 1408628352))));
    #pragma endscop
}
