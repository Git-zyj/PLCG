/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((((max((arr_8 [i_0] [17] [i_2] [i_0]), (arr_8 [i_3] [4] [i_1] [i_0])))) ? (((!(arr_8 [i_0] [i_1] [19] [19])))) : ((((arr_8 [i_3] [i_0] [i_1] [i_0]) || (arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                        var_19 = ((((((((arr_5 [i_0] [i_0]) ? 1264897575 : (arr_2 [i_0] [i_1] [i_3])))) | 6473360984384224466)) - (((660459252022359854 ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : var_15)))));
                    }
                }
            }
        }
        var_20 = (((((((var_3 | (arr_6 [i_0])))) % (min((arr_5 [i_0] [i_0]), (arr_8 [i_0] [i_0] [17] [i_0]))))) < (((min((arr_2 [i_0] [i_0] [i_0]), (((arr_3 [i_0]) && (arr_4 [i_0])))))))));

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            var_21 = var_15;
            var_22 ^= (max((((-(arr_13 [i_4 + 1] [i_4])))), ((((max(var_13, (arr_5 [i_4] [3])))) ? (min(242, var_4)) : (((min(1, (arr_0 [i_4])))))))));
            arr_15 [20] [i_0] = (((((((arr_13 [i_0] [i_4 - 2]) ^ var_15))) ? -109 : var_10)) >= (!0));
        }
        arr_16 [i_0] = -109;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = (((((1 ? (arr_4 [i_5]) : 24))) ? (arr_14 [i_5] [i_5] [i_5]) : (arr_12 [i_5])));
        var_24 = (arr_1 [i_5]);
        arr_19 [3] [3] &= 1;
        var_25 = var_9;
    }
    var_26 = (((((1178372509 ? ((min(var_0, var_13))) : var_3))) ? -6555281019556141992 : 1));
    var_27 = var_1;
    #pragma endscop
}
