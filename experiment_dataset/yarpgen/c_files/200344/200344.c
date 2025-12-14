/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = (((arr_7 [i_0 + 1] [i_0 + 1]) < ((-(arr_7 [i_0 - 2] [i_0 + 1])))));
                    arr_11 [i_2] [9] = (((arr_4 [i_0 + 2]) ? (((((arr_8 [i_2 + 1] [i_1] [i_0]) * (arr_3 [i_2]))) | (arr_2 [1] [i_1]))) : (((~((-(arr_2 [7] [1]))))))));
                }
            }
        }
        arr_12 [i_0] |= (min((arr_2 [i_0 + 2] [i_0 - 1]), ((-(arr_0 [i_0 + 2] [i_0 + 1])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_17 = (arr_13 [i_3]);

        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_19 [6] [i_4] [i_4] = ((+((((-17433 > -1152921504606846976) == -var_11)))));
            arr_20 [i_4] [3] [i_4] = ((~(arr_16 [i_4])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_30 [i_3] [i_5] [i_5] [i_3] |= ((17432 & (min((arr_26 [i_5]), (((arr_15 [10] [10]) ? (arr_23 [i_6] [2]) : 17432))))));
                        var_18 += ((var_11 + (((arr_25 [i_7] [i_5] [i_3]) ? (arr_25 [i_3] [i_5] [i_5]) : (arr_25 [i_3] [i_6] [i_7])))));
                        var_19 ^= ((-24576 ? (arr_28 [i_7]) : (755247757 < -110)));
                    }
                }
            }
            arr_31 [i_5] = var_8;
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 10;i_10 += 1)
                {
                    {
                        var_20 = (min(var_20, ((min((((arr_32 [i_3] [i_3]) || (arr_24 [i_10 - 1] [i_9 - 1] [i_8 + 2]))), (((arr_32 [i_3] [i_3]) || (arr_34 [i_10 - 4] [i_9 + 2] [i_8 + 4]))))))));
                        var_21 = (arr_25 [i_3] [i_3] [i_10]);
                        arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_8] = arr_38 [i_8] [i_10] [i_10] [i_9] [i_8] [i_8];
                    }
                }
            }
        }
        var_22 -= ((((+((3178053917437999333 >> (((arr_17 [i_3]) + 8553429412241040638)))))) * ((((arr_17 [i_3]) >> (((arr_29 [i_3] [i_3]) >> (((arr_34 [i_3] [i_3] [i_3]) - 60785)))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_23 ^= (((arr_15 [4] [i_3]) & 1284017513));
                    var_24 -= ((17432 ? 63 : -1261155414));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_25 = arr_45 [i_13] [i_13];
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_58 [i_13] [i_15] [i_13] [i_15] [i_15] [i_13] = ((!((((arr_34 [i_16] [i_15] [i_13]) * (arr_13 [10]))))));
                        arr_59 [i_15] [i_15] = (arr_25 [i_14 + 1] [i_14 - 1] [i_14 + 1]);
                    }
                }
            }
        }
    }
    var_26 |= var_14;
    var_27 = min(var_15, var_13);
    var_28 = -var_7;
    var_29 = var_1;
    #pragma endscop
}
