/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [0] = ((var_17 ? (((arr_1 [i_0]) ? var_10 : var_1)) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (((11941 ? var_11 : var_16)));
        arr_5 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_7 [i_1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_13 [i_3] [i_2] = ((var_17 ? ((((!var_10) ? (arr_7 [i_1 - 1]) : ((var_4 ? var_3 : (arr_9 [i_1] [17])))))) : (((arr_9 [i_1] [i_1 + 1]) ? 43 : 564733069))));
                arr_14 [i_2] = (((((arr_10 [i_1] [15] [i_1 + 2]) ? (((0 / (arr_9 [i_3] [i_1])))) : var_5)) / 75));
            }
            arr_15 [i_2] = (((var_4 ^ (~var_5))) <= (var_2 ^ var_2));
            arr_16 [7] [i_2] [i_2] = max(((-(arr_6 [i_1 + 1]))), var_1);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_21 [i_4] [i_4] = ((((!(arr_20 [i_1] [i_4]))) ? (max((arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 3]), var_15)) : 75));
            arr_22 [i_4] [i_1 - 1] [i_4] = (!-1);
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_25 [i_1 + 1] [i_1] = (arr_18 [i_1] [i_1] [i_1]);
            arr_26 [6] [i_5] [i_5 - 1] = ((-var_15 / ((((arr_11 [i_1 + 2] [i_5 + 1] [i_5]) * (arr_11 [i_1 + 2] [i_5 - 1] [i_5]))))));
        }
    }
    var_19 = var_9;
    var_20 = -var_6;
    var_21 = var_10;
    #pragma endscop
}
