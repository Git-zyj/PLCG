/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (var_1 % var_6);
        arr_3 [i_0] = ((!(((((max((arr_2 [i_0] [i_0 + 2]), 1))) - 31902)))));
        arr_4 [i_0] [i_0 - 2] = (min((max(6793228346457736584, (arr_1 [i_0 - 2]))), ((6793228346457736562 >> (var_8 - 16228323199618887478)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [0] = 1;
                    arr_13 [i_0] = (((((((min(var_10, var_2))) | (((arr_5 [i_0] [i_0 - 3]) ? 9223398068277038445 : var_8))))) ? (!var_3) : (15 / var_8)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_15 = ((((var_0 ? 16 : var_10)) == 16383));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_4 - 1] [i_4] [12] = (arr_21 [i_4] [2]);

                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            arr_27 [i_6] [i_4] = (arr_17 [i_7 + 1] [i_4 - 1] [i_3 - 1]);
                            arr_28 [i_3 - 2] [i_3 - 2] [i_5] [i_6] [i_4] = -26;
                            var_16 = (max(var_16, ((1 ? ((60803 ? 25758 : (arr_21 [1] [i_6]))) : 16))));
                            var_17 = var_5;
                        }
                        arr_29 [i_4] [2] [i_6] = 677483724;
                    }
                }
            }
        }
        arr_30 [i_3 + 1] = ((var_7 ? 189 : (~26706)));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                var_18 = (max(var_18, (arr_31 [i_8] [10])));
                var_19 = 242;
                var_20 = ((((min((var_0 | 1), 60809))) ? (min((arr_11 [i_9]), var_0)) : ((((!(((17179869182 ? (arr_15 [i_9]) : (arr_26 [i_8] [i_8] [i_9] [i_8]))))))))));
                var_21 ^= (max((max((((arr_22 [i_8] [i_8] [i_8] [i_8] [2]) ? (arr_9 [12] [i_8] [i_8] [i_8]) : (arr_21 [i_8] [i_9]))), ((min(38, 26689))))), (((((((arr_14 [i_8]) && var_7))) % (arr_23 [i_8] [i_8] [0] [i_8]))))));
            }
        }
    }
    var_22 &= var_6;
    var_23 = 38;
    var_24 = (max(-26705, (var_7 / var_4)));
    #pragma endscop
}
