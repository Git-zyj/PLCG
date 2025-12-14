/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((-var_13 ? (((!var_2) ? ((max(var_15, var_8))) : (-63 | 20))) : ((((var_9 ? var_4 : (-2147483647 - 1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 *= arr_4 [i_2];
                                arr_11 [i_0] = -2147483635;
                                var_19 -= (max(var_9, (min((arr_4 [i_4 - 3]), (arr_7 [i_1] [i_0])))));
                            }
                        }
                    }
                    var_20 = (arr_6 [i_0]);
                }
            }
        }
    }
    var_21 |= ((268435456 ? (((~var_2) ? var_14 : (~var_6))) : var_13));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 6;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    var_22 -= (max((max((((arr_14 [i_5] [i_7]) ? var_1 : (arr_10 [i_5 - 1] [11] [i_7] [i_7 + 1] [i_7] [i_7] [i_5 - 1]))), (arr_1 [i_6 + 4]))), (arr_12 [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 ^= ((((((-(arr_17 [i_9]))) ? (arr_9 [3]) : 576179277326712832))));
                                var_24 = ((~(max(var_12, 11))));
                                arr_25 [i_8] [i_8] = ((((+((227 ? (-2147483647 - 1) : -68)))) == (arr_1 [i_8])));
                                var_25 = (max(var_25, ((((~68) == ((min(10451, (43054 > -1471714814)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                arr_32 [i_10 - 1] = (((((!(((-(arr_5 [20] [i_11] [20]))))))) <= 337833660));
                /* LoopNest 3 */
                for (int i_12 = 3; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_26 += (arr_31 [i_10] [i_11] [i_12]);
                                var_27 = (min(var_27, ((min((((((max(var_9, (arr_26 [i_10 - 2])))) ? ((~(arr_39 [i_10 - 3] [i_10 - 4] [i_10]))) : (((arr_38 [i_10] [i_11] [i_12 - 1] [i_13]) ? (arr_9 [23]) : (arr_5 [i_14 - 1] [13] [i_10])))))), 3807612635832257594)))));
                                arr_42 [i_10] [i_11] [i_12] [i_10] |= ((-4208778096973714287 | (((((-31454 ? 1724798137 : (arr_31 [i_11] [i_13] [i_14 - 1]))))))));
                                var_28 = (min(var_28, (!var_13)));
                            }
                        }
                    }
                }
                var_29 &= ((!(arr_9 [i_10 + 1])));
            }
        }
    }
    #pragma endscop
}
