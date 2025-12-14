/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = ((-var_0 ? var_11 : (((((arr_9 [9] [9] [9] [i_1] [i_1] [16]) ? var_7 : var_8))))));
                        arr_11 [10] [10] [i_2] = (max((min((((arr_0 [i_0]) >> (var_2 - 13119738312493774233))), (var_2 > var_0))), (var_7 >= var_6)));
                    }
                }
            }
        }
        var_17 &= (arr_6 [i_0]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] [i_4] |= (((-(((arr_2 [i_4] [i_4]) << (var_11 - 50101))))));
        var_18 = ((!((min((arr_5 [i_4] [10] [4]), (arr_5 [i_4] [13] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [6] [6] = -var_12;
        var_19 = var_12;

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_26 [0] [i_6] [i_6] = (((!(arr_23 [i_5] [i_5] [i_5] [7]))) && (arr_13 [i_5] [7]));
                var_20 = ((-(arr_5 [i_5] [11] [15])));
            }
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                var_21 = (max(var_21, (arr_30 [i_6] [i_6] [7] [i_6])));
                var_22 -= ((((arr_22 [1] [1] [1]) != (arr_15 [i_6]))));
                var_23 += (((arr_9 [10] [i_8] [i_8 - 1] [i_6] [11] [i_6 - 2]) <= var_1));
            }
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                var_24 = (max(var_24, ((((arr_23 [i_9] [i_9] [i_9 + 3] [i_6 + 1]) != (arr_24 [i_9 + 2] [i_6 - 2]))))));
                arr_33 [i_6] [15] [3] = (((arr_19 [i_6 - 1] [i_9 + 3]) ? var_12 : ((var_12 ? (arr_22 [i_5] [i_6] [9]) : (arr_4 [i_5] [i_5])))));
                var_25 += ((((-(arr_17 [i_5] [1])))) >= (((arr_29 [i_9]) & (arr_0 [3]))));
            }
            var_26 += ((!((((arr_12 [i_6]) ^ (arr_16 [i_6]))))));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_36 [i_5] = ((~(arr_2 [i_6 + 1] [0])));
                var_27 = ((~(arr_9 [3] [3] [3] [i_6 + 1] [3] [3])));
            }
        }
    }
    var_28 = min((((+(((var_13 + 2147483647) << (var_4 - 77)))))), var_6);
    var_29 = (((((((max(var_5, var_10))) >> (var_15 - 2377935609)))) || ((!((max(var_11, var_12)))))));
    #pragma endscop
}
