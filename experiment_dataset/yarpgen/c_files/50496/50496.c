/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = (-352932009 ? 4923732391397367211 : ((((((var_2 > (arr_1 [6])))) ^ (min(131071, 1195164913))))));
        var_20 = var_6;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = (min(var_21, (((((((arr_6 [i_3] [i_3]) % var_1))) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3]))))));
                    var_22 = ((~(((arr_1 [i_2]) / (arr_1 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_23 += var_6;
                                var_24 -= (max(-3032755350995923859, 1605343424));
                                var_25 = (-(arr_0 [i_1] [i_3]));
                                arr_14 [i_1] [i_2] [i_2] [i_3] [i_2] [i_3] = ((((max(-var_6, (2097151 * var_9)))) ? 131071 : var_10));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_1] = ((((var_11 ? ((var_8 | (arr_4 [i_1] [i_1]))) : ((var_8 ? 131071 : var_5)))) % var_4));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_28 [i_7] [i_7] [i_7] [21] [i_8] [i_9] = (arr_24 [i_6] [10] [i_8] [i_9]);
                        arr_29 [i_6] [3] [i_7] [i_6] = (((arr_24 [i_6] [i_7] [i_6] [i_7 - 1]) - (arr_21 [i_6] [i_7] [i_8])));
                    }
                }
            }
        }
        var_26 = (max(var_26, var_17));
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {
        var_27 = (max(var_27, (arr_3 [i_10])));
        var_28 = (min(var_28, var_2));
    }
    var_29 = var_4;
    var_30 = var_17;
    #pragma endscop
}
