/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (0 ? 4294967280 : 1);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        var_14 -= 8388607;
                        var_15 = (min(var_15, (((((((arr_8 [i_2] [i_1]) << (-22 + 27)))) ? (arr_4 [i_2 - 3] [i_2 + 1] [i_3 + 2]) : (arr_7 [8] [i_1]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    arr_16 [i_4] [18] [i_4] [i_4] = (arr_11 [i_5]);
                    var_16 = (max(var_16, ((((((-(arr_10 [i_5])))) > (arr_14 [i_6 - 1] [i_6 + 1] [20]))))));
                }
            }
        }
        var_17 ^= (-((((6334 + (arr_15 [i_4] [i_4]))) ^ var_2)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_18 = (arr_17 [i_9] [i_7]);
                                var_19 = (min((!4), (max(15058, 23637))));
                                var_20 = (~1);
                            }
                        }
                    }
                    var_21 ^= var_3;
                    var_22 = (((1 - var_11) ? -1 : 1));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_23 = ((-20399 & ((-1 ^ (arr_20 [i_13])))));
                        arr_41 [i_13] [i_13] [i_12] [i_11] [i_4] [i_4] = ((-(~var_11)));
                        var_24 = (((-20396 >= 125) ? (((arr_20 [i_4]) | 1)) : (((((((((arr_38 [i_4] [i_4] [i_4]) && (arr_20 [i_4]))))) > ((var_8 * (arr_38 [1] [i_12] [i_13])))))))));
                    }
                }
            }
        }
    }
    var_25 = (((((var_0 == 1) ? var_1 : var_4)) >> (var_12 - 3811780953)));
    var_26 = (max(var_26, (--1931456151)));
    #pragma endscop
}
