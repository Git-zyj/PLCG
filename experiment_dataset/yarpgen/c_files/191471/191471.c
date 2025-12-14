/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 |= (min((!4088), (arr_4 [10] [10] [i_1])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 = ((((min(11184449311392424983, 4253762055151760041))) ? var_10 : -15271));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((7 ? 52 : -16));
                        arr_11 [i_0] [i_1] [i_1] [i_0] [11] [14] = (((max(((max(82, (arr_3 [i_0])))), 9800014130037319195))) && (((((min(var_16, var_15))) ? -15 : (2199006478336 * var_6)))));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_22 &= -45;
                        var_23 *= -8646729943672232405;
                        arr_14 [i_1] [i_0] [i_2] [i_0 - 3] = (min(6, -9223372036854775799));
                        var_24 &= var_13;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_25 = ((-100 ? 2756208759 : 1));
                        var_26 = 26330;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_27 ^= ((~(arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                        var_28 = (((((arr_0 [i_0] [i_0]) ? 118 : 16)) >> (-110 + 138)));
                    }
                    var_29 = 23;
                    var_30 = (max(var_30, ((max(22, -97)))));
                    var_31 = ((-178 + ((min(-23, -18)))));
                }
            }
        }
    }
    #pragma endscop
}
