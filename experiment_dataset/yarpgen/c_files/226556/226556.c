/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((!var_4) ? ((var_5 ? var_6 : 50)) : (-522142648 & var_8))))));
    var_13 = ((((((!var_0) ? (-997868155 || 16842789718476593738) : ((var_6 ? var_1 : var_5))))) ? ((((var_3 - var_5) == (!var_11)))) : var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 &= (((((~var_6) <= (((min(var_7, (arr_0 [i_0] [i_0])))))))) == (((((var_8 ? 4095 : var_6))) ? ((24 ? -56 : var_9)) : (!26160))));
        arr_2 [i_0] = min(-var_7, ((min(var_8, var_2))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 -= ((-522142634 ? (((arr_3 [i_1] [i_1]) ? 39375 : 26160)) : 21));
        var_16 &= ((~((var_3 ? 5195664828020724989 : (arr_0 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_17 += (((((39376 ? 1 : var_7))) ? ((var_5 ? (arr_1 [i_5]) : var_6)) : 380211353));
                            var_18 = (min(var_18, ((((-522142640 / 139) - ((~(arr_13 [i_1] [i_2] [i_3 - 1] [i_4] [i_4] [i_5]))))))));
                        }
                        var_19 = (min(var_19, (((~((var_1 ? -66 : (arr_10 [i_1] [9] [i_3] [i_4]))))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (!((((((1 ? -34 : var_6))) ? ((var_0 * (arr_16 [2] [i_6] [i_6] [i_6] [2] [i_6]))) : (((var_2 + (arr_0 [i_6] [i_6]))))))));
        var_20 = (min(var_20, (((!(((61 ? var_5 : var_11))))))));
        var_21 |= (((((((((arr_7 [i_6]) - 78))) ? (var_6 - 42) : ((((arr_1 [10]) + var_10)))))) ? ((((~3968007207) ? (min(107, 1369332495)) : 119))) : -3098131820));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_22 = (min(var_22, (((!(var_0 << 1))))));
        arr_23 [i_7] = -6776;
    }
    var_23 *= ((var_5 ? (var_3 | 1196835491) : ((((var_1 & var_2) ^ ((1196835461 ? 39890 : -9)))))));
    var_24 = ((((min(var_7, ((3098131805 ? 6291868776097741145 : 1196835510))))) ? var_2 : (!var_9)));
    #pragma endscop
}
