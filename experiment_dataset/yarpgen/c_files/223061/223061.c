/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (max(-var_15, ((3579505620 ? (1830709679 < var_9) : ((var_13 ? 13669 : var_0))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max(((max((!18446744073709551589), 0))), (min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((-(max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -65)), (max((arr_1 [i_0] [i_0]), 166))))));
        var_22 = (min(var_22, (((!((min((arr_1 [2] [i_0]), -64))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 = (min(var_23, ((((((1 ? 166 : 90))) ? (((arr_6 [6]) ? (arr_6 [1]) : (arr_6 [18]))) : (((min(65535, 1)))))))));
        var_24 = (min(-65, (min(75, 715461671))));
        var_25 -= (((((-(max(1, (arr_6 [22])))))) ? (((!(arr_5 [18])))) : (arr_4 [i_1])));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 = (max(((-((var_11 ? 214064557 : (arr_6 [i_2]))))), var_2));
        var_27 = (min(var_27, (arr_4 [i_2])));
        arr_9 [i_2] = (arr_7 [i_2]);

        /* vectorizable */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_28 = -1615672950915163981;
                arr_17 [i_2] [i_2] [i_4] = var_9;
                arr_18 [i_2] = ((1 ? 1 : 17391727782298832624));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_29 = ((-1501855175 <= (arr_8 [i_2])));
                        arr_23 [i_2] [i_3] [i_5] [i_6] [i_3] = (((-646278305 ? 757 : var_11)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    {
                        var_30 = ((((arr_11 [i_7] [i_7] [i_7]) ^ 51866)));
                        arr_30 [i_7] [i_2] = var_18;
                        var_31 = (min(var_31, (((var_8 - (arr_28 [i_3 + 2] [i_7 + 2] [i_8 + 3] [i_3 + 2]))))));
                    }
                }
            }
            arr_31 [i_2] = ((13669 ? ((-(arr_8 [i_2]))) : (~-91)));
        }
    }
    var_32 = var_16;
    #pragma endscop
}
