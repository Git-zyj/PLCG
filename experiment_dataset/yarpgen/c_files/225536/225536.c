/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] &= (((max(35404165875907844, 31744)) == var_0));
            var_11 = (min((min(1022619936, 3696132359)), 33792));
            arr_5 [i_0] &= (!-3555761875982556856);
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0 + 1] [i_2] [i_2 + 1] = 2124;
            var_12 = (((arr_7 [i_0] [i_0] [i_0]) - (arr_2 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_13 = ((1 ? (((arr_6 [i_0] [i_0] [i_0]) << 0)) : (((-6071 && (arr_11 [i_0] [i_2] [i_3] [i_3]))))));

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_14 |= arr_1 [i_0 + 2];
                            arr_17 [i_5] &= (arr_1 [i_0]);
                        }
                        var_15 += -3272347364;
                        var_16 = (min(var_16, (!-118)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((0 ? (arr_13 [i_8] [i_7] [i_0] [i_0]) : 1))))));
                        var_18 += ((-((((arr_9 [i_0]) && 0)))));
                        arr_27 [i_0] [i_0] [i_8] [i_0] = 94;
                        var_19 = (min(var_19, (arr_15 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8 - 1] [i_8])));
                    }
                }
            }
            arr_28 [i_6] [i_6] [i_0] = ((-(arr_21 [i_6] [i_6 - 1])));
        }
        var_20 += (((max((arr_1 [4]), (3586054699504136872 & 14039))) & (min((arr_1 [i_0 - 2]), (~0)))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_44 [i_9] [i_10] [i_11] [i_10] = (min((((var_0 ? var_6 : var_6))), (arr_3 [i_9] [5])));
                                arr_45 [i_10] [i_10] [i_11] [i_10] [i_10] = ((max((arr_34 [i_12] [i_9] [i_9]), (arr_29 [i_9]))));
                                var_21 = (min(var_21, (max(((((min(1022619921, -115985620))) ? 1 : -4554837399794097482)), ((((arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [1]) ? ((((arr_19 [i_9]) >= 1))) : 6071)))))));
                            }
                        }
                    }
                    var_22 ^= (!-125);
                }
            }
        }
    }
    var_23 = (max(var_23, var_7));

    for (int i_14 = 3; i_14 < 24;i_14 += 1)
    {
        var_24 = (min(var_24, (!var_3)));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 24;i_17 += 1)
                {
                    {
                        arr_55 [i_14] [5] [15] [i_14] = (((min(((((arr_54 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [i_14 - 1]) == (arr_50 [i_15] [i_15] [i_15] [i_15])))), (arr_47 [i_15]))) - 149));
                        var_25 = (max(((min(((max(122, var_10))), ((-5262 ? (arr_53 [i_14] [17] [i_14 - 1] [i_14] [i_14]) : var_10))))), ((max(var_4, 1022619921)))));
                        arr_56 [i_14] = (max((((2471 - var_3) >> ((((max(11752, -116))) - 65400)))), 33792));
                    }
                }
            }
        }
        var_26 = ((((715680025 >= (!0)))));
    }
    #pragma endscop
}
