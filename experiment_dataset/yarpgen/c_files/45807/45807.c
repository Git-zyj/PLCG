/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min((((!(24 > 1)))), ((252 ? 15 : 22))));
        arr_3 [i_0] [i_0] = (~153);
        arr_4 [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_2] = (((((!(arr_1 [10])))) + ((var_0 ? (arr_0 [i_2] [3]) : var_1))));
            arr_13 [i_1] [i_1 - 2] [i_2] = ((var_13 ? (~161) : (arr_1 [i_2 + 4])));
            arr_14 [i_2] [i_2] [i_2] = ((-(arr_11 [i_2] [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_24 [i_5] [14] [i_3 + 2] [14] [i_1] = var_8;
                        arr_25 [i_5] = 109;
                    }
                }
            }
            arr_26 [i_1] [i_3] [i_1] = ((~((var_10 ? var_6 : 249))));
            arr_27 [i_3 - 1] = 254;
            arr_28 [i_3 + 2] = var_3;
            arr_29 [i_1 - 2] = (arr_22 [2] [i_3] [2] [4]);
        }
        arr_30 [i_1] [i_1] = ((var_8 ? (arr_8 [i_1 - 3] [0] [12]) : var_12));
    }
    var_14 = var_12;
    #pragma endscop
}
