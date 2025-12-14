/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_7;
    var_17 = var_7;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((~((((arr_3 [i_0 + 2]) < (arr_3 [i_0 + 2]))))));
                    var_18 = ((max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2]))));
                }
            }
        }

        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            var_19 = (max(var_19, (((min((arr_0 [i_0 - 1]), (arr_3 [i_0 + 1])))))));
            arr_10 [7] [i_3] = arr_9 [i_3 - 1] [i_0];
            var_20 = (((min((arr_5 [i_3 - 1] [i_3 - 1] [i_0 - 1]), (arr_2 [i_0 + 1])))) ? (((~((max(var_5, (arr_5 [23] [i_3] [i_3]))))))) : (((((var_15 ? (arr_3 [i_0 + 1]) : var_2))) % (arr_0 [i_0 + 1]))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = var_6;
            var_22 &= var_13;
        }
        arr_14 [i_0] = ((arr_1 [i_0]) ? ((((((var_14 ? (arr_4 [i_0] [i_0] [4]) : var_6))) ? ((max(var_14, var_5))) : (arr_3 [i_0 - 1])))) : (min((arr_11 [i_0] [i_0 + 2] [i_0 + 1]), 116749583337936431)));
        var_23 = ((((224 ? var_11 : -2)) > (arr_13 [20])));
    }
    var_24 &= var_8;
    var_25 |= (((((~-6935408517054916492) ? var_7 : (~var_1))) < 22));
    #pragma endscop
}
