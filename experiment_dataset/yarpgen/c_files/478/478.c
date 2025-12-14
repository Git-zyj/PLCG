/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 && 65517);
    var_13 = var_4;
    var_14 = ((((((439477614 ? var_10 : var_7)))) ? var_8 : ((((!var_10) && var_6)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((~(((arr_0 [i_0]) ? var_0 : 9479648935271891629)))), ((min(var_2, var_9)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 = (min(((((!(arr_0 [i_0]))) ? (((min((arr_0 [i_0]), var_10)))) : var_5)), (arr_3 [i_0] [24] [i_1])));
            arr_6 [i_1] = (min(((((((arr_5 [i_0] [i_0]) && var_9))) >= ((8967095138437659982 ? 32767 : (arr_0 [i_0]))))), ((((var_11 ? 9479648935271891629 : var_8)) == ((((!(arr_5 [i_0] [i_1])))))))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_2] [i_0] [4] &= (arr_0 [i_0]);
            var_16 = var_2;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_4] [i_4] [i_4] [i_6] = (((-513159587 == ((max(var_10, var_3))))));
                            var_17 *= ((-1 ? (((min(var_1, var_1)))) : (((arr_17 [i_0] [i_0] [i_0]) ? (var_9 && var_2) : (arr_3 [i_5] [1] [i_0])))));
                        }
                    }
                }
            }
            var_18 = (min(var_18, (((-((var_4 ? (max(var_3, (arr_15 [8] [i_0] [i_3]))) : (arr_1 [1] [i_3]))))))));
        }
        var_19 = (max((((var_9 ? (arr_17 [i_0] [20] [i_0]) : 42022))), (arr_11 [17] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_20 = ((((min((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((arr_9 [i_7]) * (arr_18 [15] [i_7] [i_7] [i_7] [i_7] [i_7]))) : (arr_9 [i_7])));
        arr_25 [i_7] [i_7] = var_2;
        var_21 = (min(var_21, ((-var_8 ? ((min(-560210397, 19942))) : var_0))));
    }
    #pragma endscop
}
