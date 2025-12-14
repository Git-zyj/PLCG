/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [0] = (((min((1 != 3939757487), 18446744073709551615)) / 1));
        arr_4 [6] = 5491991417448545165;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_9 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
            arr_10 [i_0] [i_0] [i_1] = (max((max((arr_6 [i_1] [i_1]), (arr_6 [i_0] [i_1]))), (52011 & 1)));
            arr_11 [i_0] [i_1] = var_16;
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_16 [i_0] [i_2] [i_3] [i_3] = ((((((((arr_14 [i_0] [i_0] [i_3]) ? (arr_8 [i_0]) : var_10))) ? ((1 / (arr_13 [9] [i_2] [i_2]))) : ((1 ? 102 : 1)))) > 1));
                arr_17 [6] [i_0] [i_0] = (arr_0 [i_2]);
                arr_18 [i_0] [i_0] [i_0] = (arr_6 [i_2] [i_0]);
                arr_19 [i_0] [2] [i_0] [i_0] = (arr_5 [i_0] [7]);
                arr_20 [i_0] [i_0] [i_3] = 124;
            }
            arr_21 [1] [i_2] = ((!((((arr_6 [i_2] [6]) ? var_8 : -120)))));
        }
    }

    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        arr_24 [i_4] [i_4] = var_7;
        arr_25 [i_4] [i_4] = (((((var_8 ? 268427264 : 117)) * var_18)));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_28 [i_5] = (((arr_26 [i_5] [i_5]) - (arr_26 [i_5] [i_5])));
        arr_29 [i_5] = ((min(var_18, (arr_26 [i_5] [i_5]))));
        arr_30 [5] = (((min(127, ((var_17 ? var_8 : var_11)))) > (((((arr_27 [i_5]) < (((32767 ? var_15 : var_17)))))))));
    }
    #pragma endscop
}
