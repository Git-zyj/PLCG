/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((-var_12 & (max(1580085360, var_10)))), var_8);

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 -= var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (~-56);
                        var_18 ^= var_7;
                    }
                }
            }
        }
        arr_12 [i_0] = ((~(arr_11 [0] [i_0 - 3] [0])));
        arr_13 [i_0] = var_0;
        var_19 = (min(var_19, ((var_2 ? 81 : var_11))));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (((((~(min(var_14, var_3))))) ? ((((arr_7 [i_4] [i_4] [6]) | (~var_9)))) : (~var_11)));
        arr_19 [i_4] [0] = (max(3750576813982050585, 1));
        arr_20 [i_4] [i_4] = (~var_13);
        arr_21 [i_4] [i_4] = (min(((((max(3750576813982050585, (-9223372036854775807 - 1)))) ? (((arr_11 [0] [i_4] [0]) ? 83 : var_3)) : -var_14)), ((((arr_11 [i_4 + 1] [i_4] [2]) >= (((!(arr_15 [i_4])))))))));
        arr_22 [i_4] = (!(arr_8 [6] [i_4 - 1] [4] [6] [i_4] [6]));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_20 = ((~(!1)));
        var_21 = ((((!(((~(arr_9 [i_5] [5] [i_5] [i_5])))))) ? (((!((((arr_3 [8]) ? -1662470760 : (arr_24 [i_5] [i_5]))))))) : var_0));
        var_22 = (((((arr_14 [i_5]) >= var_7)) ? (((((max((arr_14 [i_5 - 3]), var_14))) ? (-9223372036854775807 - 1) : (arr_11 [4] [i_5] [6])))) : ((((arr_2 [i_5] [i_5 - 1]) && var_4)))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_23 = (arr_26 [i_6]);
        var_24 *= (max(1, 1));
        arr_27 [i_6] = arr_8 [i_6] [16] [i_6] [i_6] [i_6] [i_6];

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_30 [i_6] [i_6] = (min((arr_8 [i_6] [i_6] [i_7] [i_7] [i_7] [i_7]), (((!((var_4 && (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [6]))))))));
            var_25 = (arr_4 [i_6] [i_6] [i_7]);
            arr_31 [i_6] [i_7] = ((-(((!(((var_1 ? (arr_5 [i_6] [12] [i_6]) : (arr_4 [i_6] [i_7] [i_6])))))))));
            arr_32 [9] [i_6] [7] = ((((((arr_28 [i_6] [3]) ? (arr_4 [i_6] [8] [i_6]) : var_10)))) == (max(1, -1619140737)));
        }
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            arr_36 [i_8 + 1] [1] = ((((~((var_12 ? 177 : 127)))) != (~var_8)));
            arr_37 [4] [i_8] &= ((1 ? 3632650926847704715 : (min(1, 15661951684866377221))));
        }
    }
    #pragma endscop
}
