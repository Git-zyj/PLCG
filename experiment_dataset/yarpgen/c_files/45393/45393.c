/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((min(-1, -39))) ? 31645 : ((~(-127 - 1))))), ((((0 >= var_7) || (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = 1;
                    var_13 = (((var_9 ? ((arr_0 [i_0]) : (arr_1 [i_0])))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] = ((-1 ? var_2 : -97));
                        arr_12 [0] [6] [i_2] [i_3] [0] |= var_1;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0 + 1] [i_0] [10] [2] [1] [i_3] [i_0] = (arr_8 [i_0] [i_3 + 2] [i_2] [i_2 - 1] [i_0 - 2]);
                            var_14 = (min(var_14, var_5));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_15 = 1;
                            arr_19 [i_0 + 2] [i_1] [i_0] [1] [i_5] = (~22081);
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_16 = (((arr_21 [i_0] [i_6]) ? -22161 : 22161));
                var_17 = 1;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_18 *= (arr_18 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]);
                arr_28 [i_0] [i_0] = (((var_0 >= (arr_18 [i_8] [i_6] [i_0] [1]))));
                var_19 = (arr_0 [i_0]);
                var_20 -= (((arr_20 [2] [i_8] [2]) ? (arr_4 [0] [i_0 - 2] [i_0 + 2]) : (arr_4 [0] [i_0 + 1] [i_8])));
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_21 ^= -85;
                            arr_40 [i_0] [i_6] [i_0] [i_10] [i_11] = ((-97 ? (arr_6 [i_0]) : ((29809 ? (arr_31 [i_0] [6] [i_9] [7]) : var_7))));
                        }
                    }
                }
            }
            var_22 = (min(var_22, -7902));
            arr_41 [i_0] [i_0] [i_6] = -68;
            arr_42 [i_0] [0] [i_0] = 28969;
        }
        var_23 += -1023;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_24 = ((((min(0, -95))) ? ((((min(0, 12316))) ? -432 : (1 / var_1))) : (arr_26 [i_0] [i_0] [i_13])));
                    var_25 = -7911;
                }
            }
        }
    }

    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_51 [i_14] [i_14] = (arr_50 [i_14]);
        var_26 &= (((((((22847 ? (arr_49 [8] [i_14]) : var_5))) ? 1 : (((arr_50 [1]) ? var_4 : -1)))) <= ((44 ? ((1 ? 16320 : var_1)) : 12288))));
        var_27 = ((((((arr_50 [i_14]) ? (arr_50 [i_14]) : -14288))) ? 1984 : ((0 ? 32 : ((15123 ? 58145 : -1))))));
    }
    var_28 = (min(var_11, 96));
    #pragma endscop
}
