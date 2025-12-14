/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((!(arr_0 [i_0]))))) >= 3113801319103802184);
        arr_3 [i_0] = ((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : var_8));
        var_17 = var_4;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = (((!(arr_10 [i_1] [i_1] [3] [i_2]))));
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] = (((((-3113801319103802168 ? 3113801319103802187 : -4954188044492904584))) ? -3113801319103802189 : ((((arr_4 [18] [i_3]) >> (arr_1 [i_1]))))));
                    }
                }
            }
        }
        arr_15 [i_0] = (arr_8 [i_0]);
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_18 += ((-((-5935517095148184399 - (((-3113801319103802189 ? (arr_18 [i_4]) : 0)))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (min(var_19, (((!((!(-1 ^ 42322))))))));
            arr_22 [i_5] [i_5] = (min(((var_11 ? (((arr_20 [i_4]) / 8582179378699171144)) : (arr_17 [i_5]))), 3021699809532251598));
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_25 [i_6] [i_6] |= (arr_19 [i_6] [i_6]);
        var_20 = (max(var_20, ((max((((arr_18 [i_6]) || var_14)), (42322 && 1))))));
        var_21 = ((min(-3529, 0)));
    }
    var_22 = (!var_2);
    #pragma endscop
}
