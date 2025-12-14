/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = (min((max((arr_0 [i_2]), (arr_4 [i_0 + 1]))), (((((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (max(3894873447, 1)) : (((var_14 ? 1 : (arr_3 [i_0] [i_1])))))))));
                    var_15 += 1;
                    arr_8 [i_2] [3] [9] [9] = 8;
                }
            }
        }

        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_16 &= (((arr_9 [2]) % 3894873447));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_17 = (min(var_17, (arr_14 [i_3 - 2] [i_0 + 1] [i_3])));

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    arr_18 [8] [6] [i_5] [1] = (!(((18362 | (arr_9 [i_0])))));
                    var_18 += ((~(!var_7)));
                    arr_19 [i_4] [i_5] [i_0] = ((18362 ? (((400093849 ? var_8 : var_1))) : (arr_5 [i_3 - 2])));
                    var_19 -= (400093865 << ((((1 ? 3894873447 : var_1)) - 3894873442)));
                }
            }
            arr_20 [i_0] [i_0] [i_0 + 1] = (max((arr_15 [i_3] [i_3] [i_0]), (((var_9 > var_7) ^ (arr_6 [i_3] [i_3 - 1] [i_3 + 1])))));
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] = (((((!(!var_12)))) > (((((65517 ? 19 : 65517))) ? (~var_13) : (arr_22 [i_0 + 1] [i_6 + 1] [i_6 - 2])))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_31 [i_0 + 1] [i_0] [7] [11] [i_0 + 1] [i_0] = ((~(((arr_28 [i_8] [i_8] [i_8] [i_8]) ? 0 : var_6))));
                            arr_32 [i_7] = (var_10 * 0);
                            arr_33 [i_9] [i_9] [i_8] [i_8] [i_7 - 1] [6] [i_0 + 1] = (~((1 & (arr_28 [i_0] [i_6] [i_8] [9]))));
                            arr_34 [10] [i_9] [10] [i_8] [i_9] [i_6 + 2] [10] = arr_16 [i_9];
                        }
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_20 = (!((((var_3 <= 6) ? (min(1, (arr_13 [i_8] [i_8] [i_8]))) : (arr_36 [i_0 + 1] [i_6 + 2] [i_7 - 1] [i_8] [i_10])))));
                            arr_37 [0] [i_6 - 1] [1] [i_8] [i_10] [i_7] [i_0] = (((((var_10 ? ((1 ? (arr_15 [i_0] [i_7] [i_10 + 2]) : -943349357156658098)) : (((arr_16 [i_6]) ? -67108864 : -943349357156658098))))) >= ((max(var_11, (arr_25 [i_0] [i_0] [i_7]))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_21 = var_6;
                            arr_40 [i_0] [i_6] [i_11] [4] [4] [4] = (((arr_23 [i_11] [i_6 + 2] [i_0 + 1]) ? (((15837 << (var_5 - 82)))) : (arr_3 [i_8] [i_6 + 2])));
                        }
                        arr_41 [i_0] = ((var_5 ? (arr_26 [3] [i_8] [i_8]) : (((!(379348337 < var_13))))));
                    }
                }
            }
        }
    }
    var_22 &= (((((!((max(var_2, var_6)))))) >> ((var_2 ? 23 : (~var_3)))));
    var_23 = (min(var_6, (((((var_10 ? var_8 : 4294967269))) ? 379348337 : var_0))));
    var_24 = (max(var_24, ((max(var_7, 18251)))));
    #pragma endscop
}
