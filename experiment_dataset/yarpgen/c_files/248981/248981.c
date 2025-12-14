/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_4 / var_6);
    var_15 = (((((+(((var_1 + 2147483647) << 0))))) && (((min(111, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (((-2147483647 - 1) | ((-(arr_4 [i_0] [i_1] [i_1])))));
                arr_5 [i_0] [i_0] = (((var_13 <= 127) << (((16866 <= (!var_4))))));
            }
        }
    }
    var_17 = (min((!var_4), (((var_2 == 127) != -var_9))));

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] = ((-var_10 != (((74 % (arr_6 [i_2] [i_2]))))));
        var_18 = (arr_6 [i_2] [i_2]);
        var_19 = (max((((max(121, (arr_6 [i_2] [1]))))), ((-(((arr_7 [i_2] [i_2]) | (arr_7 [8] [8])))))));
        var_20 = ((((((((arr_7 [i_2] [1]) | (arr_7 [i_2] [i_2]))) <= ((121 ? var_5 : 118))))) & (((((var_2 / (arr_6 [i_2] [5])))) ? (arr_7 [13] [i_2]) : -1587))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (((((min(-1922741852, var_13)))) ? ((((arr_15 [i_4] [i_4]) && (arr_10 [i_4] [i_4])))) : (((((3513 ? 1569 : 28)) < (1 == var_9))))));
                    var_22 = var_7;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        arr_20 [4] = (!111);
        arr_21 [8] = (((((var_11 ? -16866 : 118))) + ((var_7 ? var_9 : 3034))));
        arr_22 [i_5 + 1] [i_5] = ((((((arr_16 [i_5]) == (arr_16 [16])))) < (arr_7 [i_5 - 3] [i_5 - 2])));
        arr_23 [i_5 - 1] [i_5 - 1] = ((138 < (arr_6 [i_5 - 2] [i_5])));
    }
    #pragma endscop
}
