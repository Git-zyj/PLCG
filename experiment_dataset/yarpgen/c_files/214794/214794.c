/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 = (arr_3 [i_2 + 2] [i_0 + 2]);
                        var_13 = max(var_9, (((arr_6 [i_0 - 1] [i_1] [i_2]) ? 1 : 285)));
                        arr_10 [i_2] = (~0);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_2] [1] [i_2] [1] [i_4] [i_4] [i_2] = ((var_7 ? -284 : (arr_5 [i_0 - 2] [i_0 - 1] [i_2 + 3])));
                            arr_15 [i_0] [i_2] [i_2] = (!-276);
                            var_14 = (((8052241306798562034 >> var_7) ? (arr_7 [6] [i_2 + 4] [i_0 - 2]) : (1 + 9)));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_15 = ((((min(((min(var_1, var_0))), var_3))) ? (((~(arr_5 [i_0 - 2] [i_0 - 2] [i_3])))) : ((~(arr_9 [i_0] [0] [i_2])))));
                            arr_18 [i_0] [i_2] [i_0 + 2] [i_0 + 2] [i_0] = var_8;
                            arr_19 [i_2] = (!(((~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))));
                            var_16 = (arr_2 [i_0]);
                        }
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] = (max(((((!var_0) > 1298492998694285178))), (((min(63, (arr_2 [i_0]))) ^ (((-(arr_21 [i_0] [i_0] [i_2] [i_2] [i_6] [i_6 - 1]))))))));
                        var_17 &= ((((2147483635 ? 0 : 302)) << (((max(((var_5 ? var_7 : -285)), -1282455047)) + 295))));
                        var_18 = (arr_9 [6] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 = ((-(arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_2] [i_0 - 2])));
                                arr_29 [i_2] [i_2 + 1] [i_2 + 1] = (((min(var_1, (arr_9 [i_0] [i_0] [i_0])))));
                                arr_30 [i_0 + 1] [i_7] [i_1] [i_2 + 1] [i_2 + 1] [i_8] |= var_1;
                                var_20 ^= var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -5541014246271112862;
    var_22 = var_10;
    #pragma endscop
}
