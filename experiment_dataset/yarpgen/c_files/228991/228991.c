/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (min(var_17, var_0));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [9] [i_0] = var_8;
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (((arr_0 [i_0]) ? (+-1) : var_2));
                    var_18 = ((-((1 ? -79 : 44))));
                }
            }
        }
    }
    var_19 |= ((-102 ? 27586 : 27590));

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_14 [i_3] = ((-(arr_12 [i_3 + 1])));
        var_20 = (min(var_20, ((((((27 ? -2147483631 : 79))) ? ((37946 ? 37950 : 5)) : var_11)))));
        var_21 = (max(((max(0, 1))), (((16 ? -2147483623 : 58677)))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_22 = (min(var_22, (((((((var_11 ? var_14 : (arr_15 [12] [0])))) ? ((var_15 ? var_5 : var_15)) : -95))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_23 = var_15;
                            arr_26 [i_4] [i_4] [i_6] [i_4] [i_4] [i_7] [i_4] = 3;
                            var_24 = (min(var_24, var_7));
                            arr_27 [i_4] [i_4] [i_4] = (-((1629323784 ? 4 : var_2)));
                            var_25 = ((+((+(max((arr_19 [i_8]), (arr_19 [i_6])))))));
                        }
                        arr_28 [i_4] [i_4] [i_6] [i_4] = ((-(arr_17 [i_4])));
                        var_26 += ((var_12 ? -84 : (arr_20 [i_5 + 2] [i_5] [6])));

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_27 = (1629323778 >= var_14);
                            var_28 *= ((((arr_22 [5] [5] [13] [i_4] [i_5 + 1] [i_9 - 1]) ? (arr_22 [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3] [i_9 - 1]) : var_13)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_35 [i_4] [i_4] [i_10] [i_11] = (arr_31 [i_4]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((-(arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13]))))));
                                arr_41 [3] [i_10] [i_11] [i_11] [i_13] [i_12] [i_4] = (arr_23 [i_4] [i_11] [i_11] [i_12 - 1] [i_4] [i_12]);
                            }
                        }
                    }

                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        arr_46 [i_4] [i_10] [i_10] [i_4] = var_1;
                        arr_47 [i_4] [i_4] [i_4] = (((((-(arr_15 [i_4] [i_14 + 4])))) ? ((max(1, 1))) : ((((min(var_7, (arr_30 [i_4])))) ? var_3 : (arr_36 [i_4] [i_14 + 3] [i_14 + 3] [i_14 + 1] [i_14] [i_14 + 4])))));
                        var_30 = (arr_18 [i_11] [i_14 + 3] [i_14 + 1]);
                        var_31 = (min(-7855557276108801653, (arr_45 [i_10] [i_10] [i_14 + 3] [i_14 + 4])));
                    }
                }
            }
        }
        arr_48 [i_4] = (((((var_9 ? var_3 : (arr_32 [i_4] [i_4] [i_4])))) ? (((arr_42 [i_4] [i_4] [13] [i_4] [i_4]) ? (arr_42 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_32 [i_4] [i_4] [i_4]))) : (((arr_25 [i_4]) ? -66 : 27583))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_51 [i_15] [i_15] = ((((arr_34 [i_15] [6]) - (arr_24 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [12]))));
        arr_52 [i_15] [i_15] = ((((((arr_34 [i_15] [4]) ? var_5 : var_2)))) ? ((+(((arr_0 [0]) ? (arr_31 [1]) : (arr_12 [i_15]))))) : (arr_23 [i_15] [i_15] [i_15] [0] [14] [i_15]));
        var_32 |= ((11711 ? 1 : -2147483603));
    }
    #pragma endscop
}
