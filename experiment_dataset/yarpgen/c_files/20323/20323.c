/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 != var_13);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((6788632409459427457 ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0] [i_0])))) ? ((-(arr_1 [i_0 + 1] [i_0 + 1]))) : (arr_1 [i_0 - 1] [i_0 + 1])));
        arr_3 [i_0 - 1] = -var_17;
        arr_4 [i_0] [8] = arr_1 [i_0 - 1] [i_0];
        arr_5 [i_0] = (((arr_1 [i_0] [i_0 + 1]) * (!9359)));
        arr_6 [10] [i_0] = ((20 ? (((518 ? var_7 : 19))) : (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] = (((((arr_8 [i_1]) + 2147483647)) << (10 - 10)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2 + 1] [i_3] [i_3] = (arr_10 [i_2]);
                    arr_15 [i_1] [i_3] [i_3] = (arr_7 [i_2] [i_3]);

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_20 [i_4] [i_2] [i_3] [i_4] = arr_17 [i_1] [i_1];
                        arr_21 [i_4] [8] [8] = (1741612563976193158 >> (var_16 + 168));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_24 [i_5] = (~var_4);

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_27 [i_1] [11] [i_3] [i_3] [11] [i_6] [i_6] = (((arr_13 [i_6] [i_2 + 1] [9] [i_2 + 1]) < (arr_26 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                            arr_28 [i_1] [i_3] [i_3] [i_3] [i_6] = ((arr_1 [i_6] [i_1]) ? (((31 ? -60 : 6))) : ((var_14 ? (arr_7 [i_2 + 1] [5]) : -24551)));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_31 [i_7] [i_3] [i_3] [i_1] = (((arr_11 [i_7 - 1]) ? 26401 : (arr_11 [i_7 + 1])));
                            arr_32 [i_3] = (((arr_11 [i_2 - 1]) ? (arr_11 [i_2 - 1]) : (arr_11 [i_2 - 1])));
                        }
                        arr_33 [i_5] [6] [i_1] [2] [i_5] |= ((arr_17 [i_2 - 1] [i_2 + 1]) << (((arr_17 [i_2 + 1] [i_2 - 1]) - 2901667639853190721)));
                        arr_34 [i_3] [i_2] [i_3] = (((((((arr_7 [i_2] [i_2]) > 4503049871556608)))) >= var_13));
                        arr_35 [i_1] [i_5] = (!52);
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_38 [i_1] [i_8] = var_10;
            arr_39 [i_1] = (arr_17 [i_8] [i_1]);
            arr_40 [i_8] [i_1] [i_1] = 1023;
            arr_41 [i_1] = 2526336053784929006;
            arr_42 [i_1] [i_8] |= 4503049871556602;
        }
        arr_43 [i_1] = (((arr_11 [i_1]) ? ((-(arr_25 [i_1]))) : (arr_8 [i_1])));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_48 [24] = (((((((min(6, (arr_44 [i_9]))))) + ((var_3 / (arr_47 [i_9] [i_9])))))) && (((-(arr_44 [i_9])))));
        arr_49 [i_9] [i_9] = ((((23 >> (((arr_47 [i_9] [i_9]) + 131)))) - (arr_46 [i_9])));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_53 [i_10] = ((!((!(~10513)))));
        arr_54 [i_10] = (((-32767 - 1) >= (((!(11530137337120851548 / 59752))))));
    }
    var_19 = ((8 && (((((var_16 ? var_4 : var_13))) || (((var_11 ? var_13 : -26186)))))));
    var_20 = (!-7);
    #pragma endscop
}
