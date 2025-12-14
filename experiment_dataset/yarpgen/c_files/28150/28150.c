/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((((max(var_15, (arr_2 [i_0 + 1] [i_0 + 2])))) || 12741));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (max(((-(max(1802933380, 9)))), ((((arr_6 [i_0 + 2]) * 214)))));
                    var_20 = (min(var_20, var_15));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = (min(((min(1, var_17))), -var_17));
                    var_22 = (min(var_22, (arr_7 [i_0] [i_0] [i_3])));
                    var_23 = (min(var_23, ((((max((((11175 / (arr_4 [5] [3] [i_0] [i_0 + 2])))), ((215 ? var_12 : 2034868628)))) / (((~(((arr_4 [i_0 - 1] [i_1] [i_0 - 1] [11]) ? var_0 : 37))))))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_24 &= (((-394 & var_1) & ((var_3 >> ((((23245 ? var_17 : 214)) - 53076))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_25 = (max(var_25, (188 < 30709)));
                                arr_17 [i_6] [i_4] [i_4] = 214;
                                var_26 = (min(var_26, ((((-(((arr_8 [i_6] [i_6]) + 21))))))));
                            }
                        }
                    }
                }
                var_27 = max(((min(var_3, (min(21278, 21264))))), ((0 / (((var_16 ? 207 : var_4))))));
                var_28 = arr_14 [i_0] [i_0] [4] [1] [i_1];
            }
        }
    }
    var_29 = var_17;

    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_30 = 1;
        var_31 = (min(21298, (min(1, (max(44444, 49037))))));
        var_32 = (max(var_32, ((min(192, var_15)))));
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_33 ^= ((-21081 & (11908 | 9382)));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_34 [i_9] [8] [i_9] [i_9] &= (max(231, 3000243546));
                            var_34 = ((min((((arr_23 [i_8 - 1] [i_9]) ? 44248 : 214)), 65535)));
                            arr_35 [i_10] [i_8 + 1] [i_10] = (max((((arr_29 [i_8 + 2] [i_10] [i_12 + 1]) | (arr_29 [i_8 - 1] [i_10] [i_12 - 3]))), 1));
                            var_35 &= ((-(min((min(var_0, var_12)), (((62 << (43044 - 43032))))))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_36 = (18131 == 28672);
            arr_40 [i_13] [i_8 + 2] = (((((-1 ? var_15 : (arr_23 [i_8 - 1] [i_8 + 1])))) ? (~var_10) : (max(1716598045, 1))));
            var_37 = ((var_12 > ((max((var_17 % 44237), var_6)))));
            var_38 = (max(var_38, ((((1 && var_6) ? var_3 : 1)))));
        }
        var_39 = ((((36215 ? 38845 : 1)) <= ((max(var_8, var_6)))));
        var_40 = (min(var_40, ((min(var_6, ((((~(arr_33 [i_8] [i_8] [i_8]))) | var_6)))))));
    }
    #pragma endscop
}
