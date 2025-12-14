/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((((-5 % 4) ? (4 < 4) : -4)))));
        var_14 = ((!(~-13)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = -5;
        var_15 = ((((min((((arr_3 [i_1]) / var_5)), -var_5))) || ((((arr_5 [i_1] [i_1]) ? ((max(3, (arr_4 [i_1])))) : (arr_5 [i_1] [i_1]))))));
        var_16 = (min((arr_3 [i_1]), ((min((arr_5 [i_1] [i_1]), 3)))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_17 = (~(((arr_2 [i_2 + 1] [i_2 - 1]) % (((min(var_3, -3)))))));
        arr_11 [i_2] [i_2] = 4;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] [i_3] [i_5] = ((((((((-4 ? -5 : -4)) < (arr_15 [i_3] [i_4 - 1]))))) % (min((max(-25, var_1)), (((-4 < (arr_5 [i_4] [i_5]))))))));
                    arr_22 [i_5] = var_6;
                }
            }
        }
        var_18 = ((-5 ? (((var_9 / (arr_17 [i_3] [i_3] [i_3])))) : (max((arr_17 [22] [i_3] [i_3]), (arr_16 [i_3])))));
    }
    var_19 = (min((~var_0), var_10));
    var_20 = (!3);
    #pragma endscop
}
