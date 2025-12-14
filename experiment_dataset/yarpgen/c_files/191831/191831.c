/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_13 = (max(var_13, var_2));
            var_14 = (-(((81 || (((var_6 ? var_8 : var_0)))))));
        }
        var_15 += ((((max(81, (!var_10)))) ? (min((((!(-32767 - 1)))), ((var_10 << (((arr_2 [i_0] [i_0]) - 113)))))) : (((arr_1 [i_0]) ? var_1 : ((1073741824 % (arr_1 [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_9 [i_2] = (((arr_6 [i_3 + 1]) ? (arr_6 [i_3 + 1]) : var_4));
            var_16 ^= (((var_11 <= (arr_5 [1]))));
        }
        var_17 ^= (min(4375864185472184722, (arr_8 [i_2])));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            var_18 *= (~0);
            arr_13 [i_2] [13] [i_4 - 1] = arr_11 [i_2] [i_4 + 1];
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_19 = 17;

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_16 [i_4] [i_4 + 1] [i_5 - 1] [i_6]) <= var_4)))));
                            arr_22 [i_2] [i_2] [i_5] [i_2] [i_2] = var_3;
                        }
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            var_21 *= (arr_5 [i_8]);
                            var_22 = (min(var_22, (arr_4 [i_4])));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            arr_27 [i_2] [i_2] [18] [18] [i_2] = ((!(!2958620144709205709)));
                            arr_28 [i_2] [i_4 + 2] [i_5] [1] [i_9] = -2037148489;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_23 += 71;
                            var_24 = var_10;
                            var_25 += (var_8 ? var_12 : 8);
                            arr_31 [i_2] [i_2] = ((!((((arr_24 [i_2] [i_4] [i_5 + 1] [i_5 + 1] [i_10]) + var_2)))));
                        }
                    }
                }
            }
            var_26 = (min(var_26, (arr_29 [i_2] [1] [15] [17] [i_2] [i_4 - 1] [i_4])));
            var_27 ^= ((!(((-(arr_8 [i_2]))))));
        }
    }
    var_28 += var_5;
    #pragma endscop
}
