/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= -6865110558808781148;
    var_13 = (min(33, ((-(min(var_9, 65535))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_3 [i_0])));
        var_15 = ((~(~0)));
        var_16 *= (((arr_1 [i_0 - 1]) > (arr_2 [i_0 + 3])));
        var_17 = (1 >> 1);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 = 18446744073709551615;
        var_19 = (max(var_19, 1));
        arr_7 [i_1] = (((-(arr_6 [i_1]))));
        arr_8 [i_1] = 2732023937973637815;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_20 += (max(1, var_5));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_21 = 2732023937973637815;
                            var_22 *= (max((7345602927220835710 >> 1), 1566903189380698985));
                            var_23 = (max(var_23, ((((((arr_18 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1]) ? ((1 ? 1396106836905658282 : 28586)) : (124 != 1))) * (1396106836905658282 / 15714720135735913799))))));
                            arr_19 [i_2] [i_2] [i_2] [1] [i_4] [i_5] [i_6] = (~15714720135735913829);
                            var_24 -= (~13163301038530175630);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_23 [i_2] [i_3 - 1] [i_2] [i_5] [i_5] [i_3 - 1] [4] &= var_11;
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] [i_7] = (min((((var_3 >= (~1)))), -41));
                        }
                        var_25 = (max(var_25, 349002333));
                        var_26 = ((+((1 & (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_4]) ? var_5 : var_3))))));
                        var_27 = (min(3160386282, 1));
                        var_28 = (min(var_28, (arr_18 [i_2] [i_3] [i_4] [i_3] [1])));
                    }
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
