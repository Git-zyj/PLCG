/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_9;
    var_20 = ((~(min((min(281474976710655, var_8)), (var_5 && var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = ((!(arr_0 [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (arr_2 [i_1] [i_4 + 2]);
                                var_23 = (max(var_23, var_10));
                                var_24 = (0 <= -756077919);
                            }
                        }
                    }
                }
            }
        }
        var_25 = (~10138);
        var_26 = (var_10 >> var_4);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_27 = (!4294967295);
        arr_13 [i_5] [i_5] |= ((!(~var_3)));
        var_28 = var_12;
        var_29 = ((9223372036854775807 ? (~var_0) : var_17));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_30 = (min(var_30, -63));
                        var_31 |= (var_8 | var_1);
                        var_32 -= 756077918;
                        arr_21 [i_8] [i_6] [i_6] [i_5] = 91;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_24 [i_9] [19] = (((((min(var_2, 10138))) || (arr_1 [i_9]))) && (9465515762891551067 - var_3));
        var_33 = var_15;
    }
    var_34 &= (((~(6002996989061847414 * 0))));
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {
                var_35 = (arr_0 [i_10] [i_11]);
                var_36 = (max(var_36, ((((-1956513281 - var_8) <= (((((min(257391020, var_11))) ? var_0 : (arr_9 [i_11] [i_10] [i_11])))))))));
                arr_31 [i_11] [i_10] = (min(((((min(var_1, 65535))) ? var_2 : var_12)), (~-43)));
            }
        }
    }
    #pragma endscop
}
