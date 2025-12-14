/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!9) != (~-10)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-9 % -2031597988);
        var_21 = 120;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 = (min((((18 ? 1 : ((min(1, var_19)))))), var_18));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_23 |= -87;
            var_24 += (arr_4 [i_1 + 1]);
            var_25 ^= min((min((min(-378822461, 927676712)), (arr_7 [i_1 + 1]))), ((242 ? (var_5 - 378822460) : -1)));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] = -1662451572686543103;
            var_26 = arr_7 [i_1];
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    var_27 = (~(-2031597988 ^ var_14));
                    arr_16 [0] |= ((((1 <= (((min((arr_0 [4]), (arr_6 [i_1]))))))) ? (min((13152 * var_4), (-127 - 1))) : ((~(!113)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_19 [5] [i_6] = -2031597995;
        arr_20 [i_6] [i_6] = (((var_16 & 6) << (241 - 226)));
        var_28 = (((46 / 679874372) - 8131784));
    }
    var_29 = (min(((var_11 ? 1 : var_1)), ((min((min(15505, 127)), 0)))));
    #pragma endscop
}
