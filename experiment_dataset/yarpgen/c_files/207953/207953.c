/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 -= (((((((-1188206153 ? var_8 : 2190433320960)) != 7864320))) << 2190433320960));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((var_0 % (min(18446741883276230674, -1188206155)))))));
                    var_16 ^= var_11;
                }
            }
        }
        var_17 = 1188206145;
        var_18 = (((arr_0 [i_0]) % (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_4] [i_4] [i_3 - 4] = (245 ? (((var_4 ? var_7 : var_4))) : ((var_0 ? var_9 : 18446741883276230677)));
                    arr_17 [i_3] [i_3 - 3] [3] [i_5] = ((131 ? (((-1188206126 && (arr_2 [i_4])))) : ((((arr_15 [1]) == var_5)))));
                    var_19 = (arr_12 [i_5] [i_3 - 4]);
                    arr_18 [i_4] = (((var_0 * (arr_5 [11] [i_5]))));
                    var_20 = (((var_11 / (arr_13 [i_5] [i_3]))));
                }
            }
        }
        arr_19 [i_3] = (var_13 * var_13);
        var_21 -= ((var_10 ? 15 : var_10));
        arr_20 [5] = var_0;
    }
    var_22 = (min(var_22, var_0));
    var_23 -= 17;
    var_24 = ((!(3467212661666420605 / var_3)));
    var_25 = 1;
    #pragma endscop
}
