/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = ((((!0) ? (((arr_1 [i_0]) ? 0 : 32745)) : (((120542230264674432 ? (arr_1 [i_0]) : 217))))));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [3]) * ((0 ? 113 : (arr_0 [i_0] [i_0])))));
        var_13 = 40783;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_14 *= 0;
        arr_6 [i_1] = ((-((3799928737526558555 ? (arr_0 [i_1] [i_1]) : 40783))));
        var_15 = (((((-32746 ? (arr_0 [i_1] [22]) : (arr_0 [i_1] [i_1])))) ? (((((arr_0 [i_1] [i_1]) > (arr_0 [i_1] [i_1]))))) : ((13580 ? (arr_0 [11] [i_1]) : 24))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (9384331436603234391 | 0);
        var_16 = (131 != (arr_5 [i_2]));
    }
    var_17 = (max(var_17, var_0));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    var_18 += (-32767 - 1);
                    arr_21 [i_3] = (arr_15 [i_3] [i_3] [i_3]);
                    arr_22 [i_5] [i_3] [i_3] [i_3] = (~22517);
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_19 = 24;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_36 [9] [i_6] [i_7] [i_7] [10] = ((((((arr_30 [i_6] [i_6] [i_6] [i_6]) ? 16463851907024922873 : 14587))) || (((arr_34 [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9 + 1] [i_9 + 3]) && (arr_34 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1])))));
                            var_20 -= ((~((24761 ? -31610 : 9))));
                        }

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            var_21 = (min(var_21, 15175));
                            arr_39 [i_6] [i_8] [i_8] = 32767;
                            var_22 = ((9223372036854775807 ? (arr_34 [i_7] [i_7] [i_7 - 1] [i_8] [i_11 + 1]) : (arr_7 [i_9 + 1] [i_7 - 1])));
                            var_23 = ((((((arr_1 [i_9 - 2]) ? 32767 : (arr_29 [i_11] [15] [i_11] [i_11 + 4])))) ? (arr_38 [i_6] [i_6] [i_6] [9] [i_6]) : 32744));
                        }
                        var_24 = (((arr_32 [i_6]) % -16057));
                    }
                }
            }
        }
    }
    #pragma endscop
}
