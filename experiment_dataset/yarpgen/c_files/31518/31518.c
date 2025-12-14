/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = 63145;
        var_11 = (max(var_11, (arr_1 [i_0 - 1] [i_0 - 1])));
        var_12 = ((!(arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = ((!(((1655 | (arr_12 [i_0] [i_3] [i_2] [i_1] [i_0]))))));
                        var_14 -= var_1;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_15 = ((var_7 ? (((min(7354, (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (((arr_7 [i_4] [i_4]) ? var_2 : ((2619573063378989564 ? (arr_14 [i_4] [i_4]) : (arr_14 [2] [15])))))));
        var_16 = (((arr_8 [i_4] [i_4] [i_4]) - (min(-7355, ((66 ? var_0 : 8302339114186691726))))));
        arr_15 [i_4] [i_4] = (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_17 = (max(var_17, (arr_13 [i_4])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = (arr_6 [i_5] [i_5] [i_5]);
        var_18 = (min(var_18, ((min(((min(var_7, (min(7367, 7354))))), var_0)))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_19 = (arr_11 [3] [i_6] [i_6] [i_6] [i_6] [i_6]);
        var_20 = var_5;
        var_21 = ((var_0 == ((max((arr_3 [i_6] [i_6]), (min((arr_6 [i_6] [i_6] [i_6]), (arr_7 [i_6] [i_6]))))))));
    }
    var_22 -= ((((max(((min(-3, var_6))), 995))) ? ((min(var_7, (min(var_6, var_6))))) : -var_4));
    #pragma endscop
}
