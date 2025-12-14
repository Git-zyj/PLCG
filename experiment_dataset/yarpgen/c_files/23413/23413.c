/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (5790793257008645182 ? var_7 : (((~((var_5 ? var_10 : var_3))))));
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((max((arr_1 [i_0]), (arr_1 [i_0]))));
                arr_8 [i_0] = ((((((1 >= (arr_4 [6] [i_0] [i_0]))))) ? (((~var_9) ? (((arr_4 [i_0] [i_0] [i_0]) ? var_12 : 32767)) : (arr_1 [i_0]))) : (arr_0 [i_1])));
                arr_9 [i_0] [i_1] [i_1] = var_7;
            }
        }
    }
    var_15 = (min(var_15, ((((!8093038762773273450) ? var_9 : 1)))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_12 [i_2] = (max(-30261, (((1 <= (arr_10 [i_2]))))));
        var_16 += ((max((((arr_10 [18]) >> (1008 - 996))), (arr_10 [i_2]))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 = -35;
            var_18 = max((((((12655950816700906433 ? (arr_11 [8]) : (arr_14 [i_2]))) <= (((4170268174 ? 34 : -35)))))), -10353705310936278161);
            arr_15 [i_2] [i_3] [i_3] = (min(88, (~124699121)));
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_2] = var_4;
            var_19 += (arr_18 [i_2] [i_4 + 1]);
            arr_20 [i_2] [i_2] [i_2] = (max(((((((arr_16 [i_2] [i_4 - 1]) & 5790793257008645182))) ? (arr_13 [i_4] [i_4] [i_4 - 1]) : (((arr_14 [i_2]) ? var_3 : 0)))), var_3));
        }
        for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((((((arr_13 [i_5] [i_5] [i_2]) ? (max(62039, (arr_11 [i_2]))) : ((((!(arr_10 [i_5 + 1])))))))) ? (arr_13 [i_5 + 1] [i_5 + 1] [i_2]) : 15633)))));
            var_21 = (min(var_21, ((max((arr_10 [10]), ((~((min(var_1, 15633))))))))));
        }
        arr_23 [i_2] [i_2] = (min((max(770894947202688790, (((var_10 ^ (arr_14 [i_2])))))), var_9));
    }
    #pragma endscop
}
