/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = -18446744073709551615;
        var_16 = 11;
        var_17 = 69;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (min(9223372036854775807, 4841900835392536982));
        arr_5 [i_1] = 1;
        var_19 += (min((((-7862279854636526055 ? 0 : 50))), ((-7862279854636526055 ? 3 : -1445860623436170739))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 ^= ((((arr_2 [i_1]) ? 4841900835392536988 : ((5 ? 18013848753668096 : (arr_0 [6]))))));
            var_21 = 18446744073709551588;
            var_22 = (min(((((min(7936, 18446744073709551604))) ? (arr_4 [i_2]) : (min(var_11, 6)))), (((-(arr_8 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = ((~((min(250, 17)))));
            var_24 = (max(var_24, ((((((18838 ? (((!(arr_6 [3] [3] [3])))) : (!65509)))) ? ((min(var_13, -4341))) : (((~var_10) ? (8 > 1) : -1725951314)))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_25 = (max(var_25, (arr_8 [i_4])));
            var_26 = -18459;
        }
    }
    var_27 = (((-1 ? (~var_7) : var_1)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_28 = 765255037100383304;
                var_29 = ((!((((arr_7 [i_5]) ? (arr_7 [i_6]) : 252)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 17;i_9 += 1)
                            {
                                var_30 |= 1;
                                arr_26 [i_5] [i_6] [i_7] [i_7] [i_9] = min(((10 ? var_10 : (arr_24 [i_5] [i_5] [i_5] [14] [i_5]))), (((arr_23 [i_5]) ? var_3 : (arr_24 [i_9] [13] [i_6] [i_6] [1]))));
                            }
                            arr_27 [8] [8] = ((765255037100383293 ? (~var_9) : 35184372088831));
                            var_31 = (min(39, (arr_18 [8] [i_8])));
                            var_32 = (min(0, 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
