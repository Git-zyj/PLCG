/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 -= ((var_8 ? 1 : (max(1, (arr_1 [i_1])))));
                    arr_9 [i_1] [i_1] [i_2] = (56 && (arr_8 [i_0 - 1] [i_1] [i_2] [i_2]));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] = arr_12 [16];
        var_13 = (((0 ? var_2 : 7875743671151403829)));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_14 = (max(((-14461 ? -16383 : 1)), ((min(-16392, var_4)))));
            var_15 -= (arr_15 [i_3] [i_3] [i_4]);
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_16 -= (-127 - 1);
        var_17 += (max((arr_16 [i_5] [i_5]), (1 && 0)));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_22 [4] = 1;

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_32 [i_6] [i_9] [i_8] [i_9])));
                            arr_34 [i_7] [i_9] [i_8] = (max(var_1, (max((((-16383 ? 4801 : var_10))), 4294967295))));
                            var_19 = (((arr_18 [7] [i_7]) ? 1 : ((~((16403 ? 0 : var_8))))));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_20 += (max((((1 && (arr_19 [i_11])))), (!65535)));
                var_21 = (max(var_21, (((((((-(arr_16 [i_11] [2]))) == 1)) && var_8)))));
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_22 -= (1 >= -1);
                            arr_47 [i_6] [i_6] [i_13] = ((1 && (1 == 0)));
                            var_23 = (arr_15 [i_14] [1] [4]);
                        }
                    }
                }
            }
            arr_48 [1] = (min((((-16383 ? 1 : var_0))), (min((((arr_19 [i_6]) ? 65531 : (arr_33 [i_6] [16] [i_7] [i_6] [i_6]))), (((3 ? (arr_45 [i_6] [i_7] [i_6] [i_6]) : var_1)))))));
        }

        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
            {
                arr_54 [i_6] = -25874;
                arr_55 [i_6] = 1;
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
            {
                var_24 -= 1;
                arr_58 [i_17] [9] = ((-(min((arr_44 [i_15] [i_15] [i_17] [i_15]), (arr_20 [i_15 - 1])))));
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
            {
                arr_61 [i_6] [i_15] [i_18] = var_4;
                var_25 = (((arr_12 [i_6]) + ((((arr_39 [i_6] [9]) && (arr_50 [1]))))));
                var_26 = (max(var_26, -16383));
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
            {
                arr_65 [i_6] [i_15] [i_19] = 479482986;
                var_27 = (max(var_27, (((62060 >= ((1 ? -76 : 1)))))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        {
                            var_28 = ((-(1 & -1)));
                            arr_71 [2] [i_20] [i_19] [i_15] [i_20] [i_6] = (((arr_63 [i_15]) ? var_6 : 1));
                            arr_72 [i_20] = ((-854409259 ? 1 : ((3815484285 ? var_4 : var_7))));
                            var_29 -= 479482992;
                        }
                    }
                }
            }
            var_30 = -var_5;
        }
    }
    #pragma endscop
}
