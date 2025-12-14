/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (i_1 % 2 == 0) ? ((((arr_3 [i_0] [i_0]) << (((min((arr_4 [i_0] [i_1] [i_1]), (max((arr_5 [i_1]), var_8)))) - 10034127046696374336))))) : ((((arr_3 [i_0] [i_0]) << (((((min((arr_4 [i_0] [i_1] [i_1]), (max((arr_5 [i_1]), var_8)))) - 10034127046696374336)) - 3252954512965069251)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = ((-10 ? 1014117116 : 2439));
                    var_14 = (((arr_5 [i_1]) << (-16 + 44)));
                }
                arr_12 [i_0] [i_1] = ((-(min(1559772488, (3802387487125017991 == 0)))));
            }
        }
    }
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, (min((arr_27 [i_6 + 1] [i_6 + 2] [10] [i_6 + 2] [i_6]), (((arr_27 [i_6 + 1] [i_6 + 2] [1] [i_6 + 2] [i_6 + 1]) - var_10))))));
                                var_17 = (min(2735194807, 15638899698801691960));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_30 [1] [1] [i_5] [i_3] [i_5] = 2932128275;
                        arr_31 [i_3] = (((((((!(arr_26 [11] [11] [11] [i_8]))) ? var_6 : (arr_15 [i_3] [i_4] [i_4])))) ? var_12 : (((var_8 & 65535) - (var_10 && var_12)))));
                        var_18 = ((((min((arr_18 [0] [i_4] [13]), (-1956412803 - 0)))) ? (arr_19 [i_8] [4] [i_3]) : 32767));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_34 [18] [i_4] [15] [i_5] [i_5] [i_3] = (2147483647 != var_2);
                        var_19 = var_1;
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_20 = 21;
                        var_21 = (((min(32767, var_12))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        arr_39 [i_3] [i_4] [i_5] [i_3] = (arr_37 [i_3] [i_3] [i_3] [i_11 + 1]);
                        arr_40 [20] [8] [8] [i_3] &= 15638899698801691960;
                    }
                }
            }
        }
    }
    var_22 *= (((((min(var_2, 0)))) ? 17839981081596831556 : (((var_8 << (var_0 < var_0))))));
    var_23 ^= 65535;
    #pragma endscop
}
