/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 |= (((~240) % (+-114)));
                    arr_6 [12] [12] [i_2] [i_2 - 4] = (((~var_7) ^ ((~((1152921502459363328 ? 21956 : 127))))));
                    var_12 = (max(var_12, ((((((-(arr_3 [i_2 - 2] [i_2 - 4])))) ? ((-(arr_3 [i_2 - 3] [i_2 - 1]))) : (((arr_3 [i_2 - 4] [i_2 - 4]) + var_2)))))));
                    arr_7 [i_0] [i_0] [i_0] = ((((var_3 ? 262128 : (arr_2 [i_0] [i_0]))) << (((242 || var_2) - (((3010440726 && (arr_5 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_13 = var_3;
    var_14 = (min(var_14, var_10));

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 = (min(var_15, 33686));
        arr_10 [i_3] = var_0;
        var_16 = 1;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_17 = arr_3 [i_4] [i_5 - 1];
            var_18 = (min(var_18, (((~(min(-13, (arr_1 [i_5 - 1] [i_5 + 1]))))))));
        }
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_19 = ((~(arr_23 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 2])));
                        arr_26 [i_4] [i_6] [i_4] [i_4] = (arr_19 [i_8] [i_4] [i_4]);
                        arr_27 [i_6] [i_6] [7] [i_8] = ((~(((arr_9 [i_6 + 1]) ? (arr_9 [i_6 + 1]) : var_0))));
                    }
                }
            }
            var_20 &= ((!(((var_4 ? (arr_5 [i_4] [i_6] [i_6 + 1]) : (((arr_14 [8] [i_4]) ? (-127 - 1) : (arr_11 [i_4]))))))));
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 7;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_21 = (max(var_21, var_2));
                        var_22 ^= var_5;
                        var_23 = var_5;
                    }
                }
            }
            arr_36 [i_9 - 2] [i_4] = 10;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_24 = (894491824 && 19);
                            var_25 = (((((240 ? 2504770741 : 1))) ? (arr_12 [i_4]) : (arr_9 [i_14])));
                            arr_48 [i_14] [i_13] [i_12] [i_9 + 1] [i_4] = ((!(var_9 - 12)));
                        }
                    }
                }
            }
            var_26 = (min(var_26, 4294967295));
            var_27 = (arr_18 [1] [i_4]);
        }
        for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
        {
            var_28 = (((((arr_37 [i_15 - 2] [i_15 - 1] [i_15 - 1] [i_15 - 1]) | (arr_37 [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1]))) | ((~(arr_37 [i_15 + 1] [i_15 - 2] [1] [i_15 - 1])))));
            var_29 = (max(var_29, (arr_28 [i_4] [i_15 - 1] [i_15 - 2])));
            arr_51 [i_15 - 1] &= (arr_35 [i_15 - 2] [i_15] [i_15] [i_15 + 1]);
            var_30 = (max(var_30, ((((((24 ? 127 : 3177720821))) ? (max((arr_25 [4] [4] [9] [1] [i_15] [1]), (((arr_33 [i_4] [i_4] [i_15] [8] [i_4]) - var_0)))) : 894300535)))));
        }
        var_31 ^= (((((arr_29 [i_4] [i_4] [0]) << (((arr_42 [i_4] [i_4] [i_4] [i_4]) - 31800)))) != (~-1)));
        arr_52 [i_4] = ((3400475472 ? var_9 : 1701295348));
    }
    #pragma endscop
}
