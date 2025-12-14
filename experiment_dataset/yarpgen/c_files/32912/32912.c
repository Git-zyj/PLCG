/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 56;
        arr_3 [i_0] = ((50 ? (min(((251 ? (arr_0 [i_0]) : 0)), ((124 ? var_6 : 85)))) : (max((var_9 == var_2), ((-111 ? (arr_1 [i_0]) : var_8))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_13 = ((~((-((max(85, (arr_0 [i_1]))))))));
        var_14 = (max(var_14, (((min((!251), -31))))));
        arr_7 [i_1] = (max((min((max(var_6, 11007153460298419788)), (arr_5 [i_1] [i_1 + 2]))), ((68 ? (arr_6 [i_1 - 1] [i_1]) : (arr_6 [i_1 - 1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_1 + 2] [i_2 + 1] [i_2] [i_3 + 1] = (-(max(((((arr_6 [i_1] [7]) ? (arr_1 [i_3]) : 103))), 47)));
                    arr_13 [i_1] [i_1] [9] [i_3] = (((((((min((arr_9 [i_3 + 1] [i_2] [i_1]), 0))) | (arr_9 [i_1] [i_2] [i_3 - 2])))) || ((((((((arr_1 [i_1]) < 7439590613411131825)))) & (arr_11 [i_3] [i_3] [i_2 - 2] [i_1]))))));
                }
            }
        }
    }
    var_15 = (((((max(192, var_12)))) != 112));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_16 = (~103);
                    var_17 = min((((((arr_18 [i_4] [i_5] [i_6]) ? (arr_17 [i_4]) : 330690931495087697)) & (max(248, (arr_19 [i_5]))))), ((((((arr_18 [i_6 - 1] [i_5] [i_4]) - 74)) >= (143 - -104)))));
                    var_18 = (max(var_18, ((min((((!(arr_17 [i_6 + 1])))), ((~((min(15, 148))))))))));
                }
            }
        }
    }
    #pragma endscop
}
