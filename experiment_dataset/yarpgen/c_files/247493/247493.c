/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = ((+((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))));
                            arr_10 [i_0] [i_1] [i_0] [3] = (+-65535);
                            var_20 &= -960349641;
                            arr_11 [9] [9] [2] [i_3 + 1] [i_3 + 2] = (arr_4 [i_0]);
                            var_21 = (min((min((~12731998318417090463), 82)), (80 & 14969858576520723332)));
                        }
                    }
                }
                var_22 = (min(var_22, (((-(arr_8 [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_23 = (var_6 <= var_16);
    var_24 = var_4;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_25 = (min(((min((arr_14 [i_5]), ((4294967281 >> (61684 - 61659)))))), (~17)));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((min((arr_12 [i_4] [i_5]), (min((((-3220409265386720696 + 9223372036854775807) << (21 - 21))), var_0)))))));
                            var_27 = (min((((-(arr_15 [i_7] [i_6 - 2] [i_6])))), (~1)));
                        }
                    }
                }
                var_28 = (max(var_28, (21 ^ -1)));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_29 = (min(var_29, (arr_18 [i_4] [i_4] [i_4])));

                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 19;i_10 += 1)
                            {
                                var_30 = (max(var_30, (((!(arr_13 [i_4] [i_10]))))));
                                var_31 = (max(var_31, ((((arr_18 [i_10] [i_9] [i_4]) / 1)))));
                            }
                            arr_28 [i_5] [i_5] [i_5] = 61704;
                        }
                    }
                }
                var_32 -= (max(((min(var_3, (arr_12 [i_4] [i_5])))), (min((arr_12 [i_4] [i_4]), 18446744073709551593))));
            }
        }
    }
    #pragma endscop
}
