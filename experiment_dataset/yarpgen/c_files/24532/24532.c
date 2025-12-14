/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!(28702 && -166247793)))) * (((!(~var_1))))));
    var_14 = ((!(1 != -166247793)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-(1 > 237)));
        arr_4 [i_0] [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((5133005150211629681 ? 3340 : 455628294074803507)) - var_3));
        arr_8 [i_1] = (((((arr_5 [12] [i_1]) / (arr_5 [23] [i_1]))) * (arr_0 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_15 = (((arr_5 [i_2] [i_2]) / (((((-166247806 <= 0) && var_3))))));
        var_16 = ((var_6 ? ((((var_1 != (((arr_9 [i_2]) + (arr_2 [i_2]))))))) : ((((((arr_0 [i_2] [i_2]) >> (var_6 + 486795381)))) - (((arr_5 [i_2] [i_2]) >> (((arr_6 [i_2]) - 15571966223019973086))))))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] = var_5;

                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            var_17 = (min(var_17, var_4));
                            var_18 += (((arr_0 [23] [i_3]) >> (((((arr_6 [i_6]) | (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) ^ (arr_14 [i_5] [i_4] [i_3]))))) - 15608276740130839013))));
                            var_19 = (min(var_19, var_6));
                        }
                        arr_22 [i_4] [i_2] [i_2] [i_2] = ((var_6 ^ (((arr_14 [5] [5] [11]) - ((var_9 ? (arr_15 [i_2] [i_2] [i_2] [12]) : var_10))))));
                    }
                }
            }
            var_20 *= (3269281554 || 1);
            var_21 = (arr_14 [i_2] [1] [i_2]);
            arr_23 [i_2] [i_2] = var_2;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_26 [i_2] [i_7] [i_2] = ((+(((((arr_13 [i_2] [i_2] [i_2]) + (arr_2 [i_2]))) + var_11))));
            arr_27 [i_2] [1] [i_2] |= var_7;
            var_22 = (max(var_22, (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) - ((((!var_1) - var_10)))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_23 = (((((var_6 ? (arr_30 [i_2] [20] [i_2]) : (arr_1 [23] [i_8])))) ? (arr_9 [i_8]) : (var_9 | var_8)));
            var_24 |= (((arr_28 [i_8] [i_8]) + (arr_28 [i_8] [i_8])));
        }
        var_25 = (((arr_10 [i_2]) + ((((var_6 && (arr_5 [12] [i_2])))))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((arr_34 [i_9]) & var_6)))));
        var_27 = ((((0 ? 0 : (1 | 13))) >= 5547129014032021181));
        var_28 = (-56 >= 0);
        var_29 = ((+(((arr_2 [i_9]) & (arr_2 [i_9])))));
    }
    #pragma endscop
}
