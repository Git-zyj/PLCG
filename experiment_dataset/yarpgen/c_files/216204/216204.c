/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        arr_4 [0] &= -var_14;
        var_17 *= (((arr_1 [1]) % (arr_2 [i_0 + 2] [i_0 - 2])));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_18 *= ((((min(3, (arr_1 [1])))) ? (min(((-68 ? -12543 : 4294967295)), ((min(-2, var_1))))) : var_8));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_19 += ((-26 && var_9) ^ (var_11 && var_16));
                    var_20 = (min(var_20, 2));
                    arr_12 [i_2] = -1445381943;

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_16 [i_1] [i_4] [i_2] [i_4] [i_3 + 1] [i_4] = (((min(107, var_5))) ? ((min(0, (arr_7 [i_2 + 2] [i_2 + 4])))) : ((max(var_1, (arr_7 [i_2 - 2] [i_2])))));

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_2] [i_5 - 2] = 1939550051;
                            arr_20 [1] [i_2] [i_2] [i_4] [i_5] = (58964 ? ((var_8 ? (var_4 / 49984) : var_7)) : (arr_7 [9] [i_5]));
                        }
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_3 + 3] [i_4] [i_2] = var_15;
                            var_21 -= (max(((min((arr_21 [i_2]), (min(-82, var_7))))), ((-2147483632 ? var_5 : (arr_14 [i_2] [i_2 - 1] [i_4] [i_2 - 1])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_27 [i_7] &= var_8;
                            var_22 = (0 - 86);
                            var_23 *= ((((((max(var_7, var_5)) ^ (arr_8 [i_1])))) ? ((min((arr_26 [i_1] [i_3 + 4] [i_1 - 3] [i_4] [i_2 - 2] [i_3 + 4] [i_4]), 101))) : (min(((var_2 ? -68 : var_7)), ((-4 ? var_10 : (arr_25 [i_2 + 1] [i_3] [i_4])))))));
                            arr_28 [1] [i_7] [i_2] [7] [i_7] = ((((min(97, var_3))) + 22));
                        }
                        var_24 = (min(var_24, (arr_15 [i_1] [i_2] [i_3] [i_4])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, 3186904942));
                                var_26 ^= -2147483632;
                                var_27 -= ((((min(var_1, (max(107, 9248))))) / ((((min(var_10, (arr_32 [6])))) ? ((var_0 << (var_14 - 3430559644))) : (arr_1 [1])))));
                                var_28 = (max(var_28, ((min((((arr_6 [i_3 + 2]) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 - 2]))), ((max(-75, 48))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_35 [i_1] [i_1] = var_5;

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_39 [i_1] = var_4;

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_29 = 133693440;
                            var_30 |= (max(21, (min(2790232171762386498, var_5))));
                            var_31 += ((-2790232171762386506 / (((((max(var_10, (arr_13 [i_1] [i_10] [i_11] [i_12] [i_13] [i_10])))) ? 110 : -1)))));
                            arr_50 [i_1] [i_10] [i_11] [i_12 - 1] [i_13] = 1;
                        }
                    }
                }
                var_32 = ((((((((-15634 ? (arr_0 [2] [i_11]) : 56287))) ? ((min((arr_14 [6] [6] [i_11] [1]), 41121))) : var_10))) ? ((min((arr_48 [i_1] [i_1] [1] [i_11] [7]), (~10678)))) : (max((~268434944), (max(var_1, (arr_9 [8] [i_11])))))));
                arr_51 [2] [i_10] = arr_40 [i_1] [5];
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_55 [i_14] [i_14] = (min((((arr_8 [i_1]) + ((~(arr_49 [i_10] [i_10] [i_14] [i_14] [i_1 + 2]))))), var_13));
                var_33 = 58960;
            }
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                var_34 = -112;
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_35 = (arr_62 [i_1] [i_1 - 1] [i_15] [8] [i_17] [i_17] [i_17]);
                            var_36 = (min(var_36, 110));
                        }
                    }
                }
            }
            var_37 = (max(var_11, -29));
        }
        for (int i_18 = 4; i_18 < 8;i_18 += 1)
        {
            var_38 = (min(-82, 9274));
            arr_69 [i_18] [i_18] = ((((var_1 >> (82 - 62))) % ((~((max(var_8, 1)))))));
        }
    }
    var_39 = var_14;
    #pragma endscop
}
