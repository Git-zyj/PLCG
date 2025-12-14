/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] = 1;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (min((arr_0 [i_0]), (arr_1 [8])));
                    var_16 = (max(var_16, 10));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_12 [8] [i_1] [8] [i_2 - 2] [i_0] [i_2] |= (((arr_3 [i_2 + 1] [i_3 - 1]) ? (arr_3 [i_2 - 3] [i_3 + 1]) : 15));
                        var_17 = 21;
                        var_18 -= 16;
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_19 = 1;
                            arr_19 [i_0] [i_1] [i_2 + 1] [i_4] = arr_3 [i_0] [8];
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            arr_22 [i_4] [i_4] [i_0] = (((arr_14 [i_0] [i_1] [i_2] [i_4]) + ((((!12) || (!841180))))));
                            arr_23 [i_4] [i_4] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 4] = ((((!(arr_10 [i_0] [i_4 - 1] [i_2]))) ? 1535350505 : (!var_8)));
                            arr_24 [i_2] |= (arr_21 [i_0] [i_1] [i_2 + 2] [i_4] [i_4] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 8;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [6] [i_7] &= (((~var_12) / (arr_18 [i_1] [i_4 + 1])));
                            arr_28 [i_0] [i_0] [i_4] [4] [i_7] = (((arr_4 [i_0] [i_0]) ? var_10 : var_1));
                        }
                        var_20 = ((var_3 && -15925) * (((((-(arr_15 [i_0] [i_2] [i_0] [i_2] [i_1] [1] [i_2])))) ? var_5 : -10482)));
                        arr_29 [i_4] [5] [5] [1] = (((((36 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : var_10)) != (((((arr_4 [i_4] [i_4]) + 2147483647)) >> (-32765 + 32792))))));
                    }
                }
            }
        }
    }
    var_21 = (min(((16 ? var_14 : (!var_10))), ((((-69 ? var_7 : 30))))));
    var_22 ^= var_12;
    #pragma endscop
}
