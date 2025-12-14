/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = -1009006915;
                    var_18 = (((((+-1) + 2147483647)) << (((((((!var_3) ? (var_2 <= 0) : -19434)) + 19450)) - 16))));
                }
            }
        }
    }
    var_19 = var_1;
    var_20 ^= (~8711);

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 &= 4294967293;
        arr_10 [i_3] = (((arr_6 [i_3] [17] [i_3] [i_3]) ? -8691 : var_4));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_13 [i_4] [3] = (((~-1583930064) ? ((((min(2886907201876988293, 3))) ? (arr_4 [i_4] [19] [i_4] [i_4]) : (min(var_14, var_7)))) : (((((max(2967097381938661726, (arr_5 [i_4] [10] [i_4])))) ? -24953 : (arr_12 [i_4]))))));
        var_22 &= -458524078535910567;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = (((!var_16) & (var_13 + 1)));
            var_24 -= ((-((var_11 ? (arr_15 [22] [20] [i_5]) : -8706))));
            arr_18 [i_5] = ((-4985788017160152502 ? (arr_16 [i_5]) : (arr_16 [i_5])));
            var_25 ^= (!var_14);
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_22 [1] [0] = ((((((((arr_14 [i_6] [i_6 - 2] [i_4]) ? (arr_14 [i_4] [i_4] [i_4]) : 114))) && 66)) ? ((max(17663, (arr_0 [i_4])))) : var_0));
            var_26 = (((arr_14 [i_4] [i_6 + 1] [i_6 - 2]) ? ((985 / (arr_14 [i_4] [i_4] [i_6 - 2]))) : ((-1690814044 ? (arr_14 [i_4] [i_4] [8]) : (arr_14 [i_4] [i_6] [i_6])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_26 [i_4] = (arr_16 [i_7]);
            var_27 |= ((!(((~(arr_21 [15] [i_7]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_30 [i_4] [15] = (((((arr_12 [i_4]) * var_10)) / (arr_20 [i_8])));
            arr_31 [i_4] [15] [15] &= (!var_1);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    {
                        var_28 = (arr_25 [i_10 + 2] [i_10] [i_9]);
                        var_29 *= (((arr_34 [i_4] [i_8] [i_10 + 1]) && -24919));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_30 = (!-18412);
                        var_31 = (min(var_31, ((((((156 ? 129 : 3676149763))) ? (arr_40 [i_4] [i_8] [16] [i_12] [i_11] [1]) : -4985788017160152515)))));
                        var_32 = (((arr_23 [i_4] [i_8] [i_8]) * (arr_23 [i_4] [i_8] [i_4])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_33 = var_15;
                            var_34 = (max(var_34, var_10));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
