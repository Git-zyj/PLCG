/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((var_10 ? (arr_0 [i_0 - 1]) : 246));
        var_19 = ((-(arr_1 [i_0 - 2])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_20 = (min(((0 ? 109 : (arr_6 [7] [i_1 + 2] [7]))), 71));
            arr_7 [i_2] &= (233 ^ 18446744073709551615);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_11 [i_3] [10] = (var_8 ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 - 2]));
            arr_12 [i_1] [i_1] = 11;

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_21 |= var_18;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [4] [4] [1] [i_1] [7] [i_4] = (((var_18 ? var_4 : (arr_15 [i_1] [i_3] [i_3] [i_1]))));
                            arr_23 [i_1] |= 10711589428206801320;
                        }
                    }
                }
            }
        }
        var_22 ^= ((-((((min((arr_15 [i_1] [i_1] [10] [i_1 + 1]), (arr_21 [i_1]))) <= ((1 ? 242 : var_12)))))));
        arr_24 [i_1 + 1] = (arr_0 [i_1 - 2]);
    }
    var_23 = (var_6 != var_8);
    #pragma endscop
}
