/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_4 == 6) ? var_4 : (((var_3 <= var_12) ^ -30119))));
    var_15 = ((min(((-30119 ? -30119 : var_12)), (65533 + 30099))) > ((var_8 ? var_6 : (!var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))));
                arr_7 [i_0] [i_0] = (max((arr_4 [i_0] [i_0] [i_1]), -30105));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_20 [i_4] = (((((arr_11 [i_2] [i_2] [i_5 + 1]) >> (5432 - 5432))) <= (arr_10 [i_2])));
                        arr_21 [i_2] [i_2] [i_2] [i_2] = 8128;
                        arr_22 [i_2 - 1] [i_3] [i_4] = ((arr_12 [i_2] [i_5 - 3]) ? ((21336 ? 16420820540095702893 : var_9)) : (((var_12 ? 30124 : (arr_13 [i_4] [i_5 - 1])))));
                    }
                }
            }
        }
        arr_23 [i_2] [i_2 - 2] = (!1);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_32 [i_6] [i_6] [i_6] [i_8] = ((-(arr_25 [i_6])));
                    arr_33 [i_6] [i_7] [i_6] = ((~(arr_26 [i_6] [i_8])));
                    arr_34 [i_6] [i_6] [i_8] = (2640 && 8710);
                }
            }
        }
        arr_35 [i_6] = (arr_31 [i_6] [i_6] [i_6] [i_6]);
        arr_36 [i_6] = ((~(arr_29 [i_6] [i_6] [i_6] [i_6])));
        arr_37 [i_6] = (((arr_31 [i_6] [i_6] [i_6] [i_6]) + (arr_26 [i_6] [i_6])));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_40 [i_9] [i_9] = ((((!(~35154))) ? (((min(var_12, (arr_13 [i_9] [i_9]))))) : ((1792 ? 65535 : -31302))));
        arr_41 [i_9] = (!511);
    }
    #pragma endscop
}
