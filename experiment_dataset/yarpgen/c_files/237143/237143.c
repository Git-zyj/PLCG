/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~(!16511137007010501581))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((var_12 + ((((((!(arr_7 [i_0] [i_1] [i_2 - 1] [i_0])))) < (((arr_6 [i_0] [i_1] [i_1]) ? 26817 : (arr_7 [i_2] [i_2] [i_2] [i_1])))))))))));
                    arr_8 [17] [17] [i_2 - 1] = ((-(((((0 ? 255 : (arr_2 [i_0]))) > (46823 | 73))))));
                }
            }
        }
        arr_9 [i_0] = -var_1;
        arr_10 [i_0] = (((((!(arr_5 [i_0] [5] [i_0] [i_0])))) < (((!(((var_6 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [9])))))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_16 = (max(var_16, (arr_2 [i_3])));
        var_17 = ((!(arr_11 [i_3] [i_3 - 1])));
        arr_13 [i_3] [i_3] = (((((arr_3 [17] [i_3]) ^ ((var_6 ? var_8 : var_1)))) < (1 == 28291)));
    }
    var_18 = (((min(var_9, var_2))));
    var_19 *= (((min((-6775512387007674848 % 38728), ((max(var_12, 109))))) - 134217728));
    #pragma endscop
}
