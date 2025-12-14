/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((10381216075562472429 | 45) ? (arr_2 [i_0]) : (((arr_2 [i_0]) / (arr_0 [i_0] [i_0]))))) % (arr_0 [i_0] [i_0])));
        var_11 = (min(209, 3412978035942949769));
        var_12 = (((var_6 ? (min(var_0, (arr_1 [i_0] [i_0]))) : (var_9 / var_2))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [0] = (((arr_1 [i_1] [i_1]) | (max((arr_0 [13] [i_1]), var_10))));
        arr_8 [i_1] [14] = (max(((min((arr_3 [i_1]), (arr_3 [i_1])))), (((min(3632064907, var_5)) >> (var_8 < var_6)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = var_10;
        arr_12 [i_2] = var_2;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (37774 - var_5);
        var_13 -= ((var_7 && (arr_10 [i_3] [i_3])));
    }
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_15 = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_16 *= ((20003 << (((min(var_8, var_7)) - 82))));
                                arr_32 [i_4] [i_6] |= var_10;
                                arr_33 [i_4] [i_4] [23] = (arr_24 [i_4] [i_4]);
                                var_17 = var_2;
                                arr_34 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8] [i_8] &= (((((((var_4 ? var_0 : -802807214))) && ((((arr_25 [i_5]) ? var_7 : var_9))))) ? ((((min(1973125400, 14))) + var_6)) : var_2));
                            }
                        }
                    }
                    arr_35 [i_4] [17] [i_6] [i_6] = (max((var_4 + var_9), ((((((3632064907 ? 1 : 62868))) || var_4)))));
                    arr_36 [i_4] [i_5] [i_6] [i_6] = (min((((var_9 ? 1973125423 : ((var_7 ? var_10 : 62857))))), (arr_25 [i_4])));
                }
            }
        }
    }
    var_18 = (min(var_18, (((((min(var_4, var_3))) ? ((((max(802807223, 48)) < var_2))) : ((((var_0 + 10972312983218825628) <= var_6))))))));
    #pragma endscop
}
