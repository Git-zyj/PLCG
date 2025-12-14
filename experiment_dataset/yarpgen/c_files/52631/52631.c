/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((29 + (max(1583933065, 367))));
        var_18 *= ((-var_8 ? 204 : ((max(((min(var_5, var_10))), (arr_1 [i_0] [i_0]))))));
        var_19 = 0;
    }

    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_20 = (min(var_20, (((+((var_14 ? (arr_1 [i_2 - 1] [i_1]) : 18446744073709551615)))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_20 [i_1 + 1] [i_1 - 2] [i_4] [16] [i_1 - 2] [i_1 - 2] |= ((!(arr_12 [i_4 + 1] [i_5 - 1] [i_5])));
                            var_21 = (max(var_21, ((((max(-var_11, (!2097151))) - (((367 <= (!226)))))))));
                            var_22 = (min(var_22, -193));
                            var_23 ^= -53416;
                        }
                    }
                }
            }
            arr_21 [i_1] = (((arr_17 [i_1 + 1] [i_2] [8] [i_1 + 1] [i_1 + 1] [i_1]) - (((!(arr_16 [i_1] [i_1 + 2] [i_1 + 2] [i_1]))))));
        }
        arr_22 [2] &= (min(-118, ((var_7 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_9 [i_1 - 1] [i_1 - 1] [i_1])))));
        var_24 = (max(var_24, ((((arr_13 [i_1] [i_1] [i_1] [i_1]) ? ((-(((!(arr_16 [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 2])))))) : (arr_14 [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_31 [i_1 - 1] [i_6] [i_7] [i_7] [i_1 + 2] = ((!(arr_19 [i_1] [8] [i_1] [i_7] [i_7 - 1] [i_7] [i_1])));
                        arr_32 [i_8] [i_7] [5] [5] [5] [i_1] = (max((((((var_12 | (arr_19 [i_1 - 1] [i_1] [i_6] [i_7] [i_7] [12] [i_8 - 1])))) ? -23878 : (arr_1 [i_6] [i_8]))), var_13));
                    }
                }
            }
        }
        arr_33 [6] [10] = (29 - 5758913048402926701);
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        var_25 = ((0 ? 26833 : 1));
        var_26 = var_1;
    }
    var_27 = (max(var_27, (((((((442481409 >= 4245093970) | (!var_15)))) ? ((var_14 ? 14336 : ((min(var_5, var_16))))) : (var_6 | var_4))))));
    var_28 *= (((var_3 & (((221 ? var_5 : 30))))));
    #pragma endscop
}
