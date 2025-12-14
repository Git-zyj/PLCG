/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = var_1;
                var_17 = ((((max((arr_3 [i_1 + 2] [i_1 - 3]), (arr_3 [i_1 + 1] [i_1 + 1])))) ? ((var_11 ? (arr_3 [i_1 - 2] [i_1 - 2]) : (arr_3 [i_1 - 1] [i_1 - 3]))) : (arr_3 [i_1 + 2] [i_1 - 2])));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (min((((-832023840 + 2147483647) >> ((((-11185 ? 1828 : 0)) - 1819)))), var_0));
                    var_18 = (min((min((max(var_7, 2642239853987468544)), var_14)), (((var_8 ? (((arr_4 [i_2] [i_0]) % var_2)) : var_6)))));
                    arr_10 [i_2] = (((((121 ? var_0 : 252))) || (arr_5 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (min((max(-19, 16906)), (min(6793970514833464115, var_3))))));
                                var_20 = (((((var_1 % ((-124 ? 2005385464 : (-127 - 1)))))) || var_2));
                                var_21 = 1618957162;
                                arr_16 [i_4] [i_4] [17] [i_3] [i_4] [i_4] [i_4] = ((((min(65, (-32767 - 1)))) | (((arr_3 [i_4] [i_2 - 2]) >> (((~var_5) - 11111070086181397893))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_23 = (((1 % 54) ? (arr_12 [i_5] [i_5] [6] [i_5]) : (min(var_7, (max(var_9, var_4))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_24 = (min(var_10, ((((((1179249711 ? var_12 : var_2))) || ((max(1, var_3))))))));
                        arr_27 [i_5] [i_6] [i_5] [i_8] [i_5] [i_5] = (((((var_8 ? (0 % var_14) : ((var_9 ? var_11 : (arr_14 [i_5] [i_6] [4] [i_5] [i_5] [i_8])))))) ? 1 : (((arr_19 [i_5] [i_7 + 1] [i_8]) ? var_8 : (arr_12 [i_5] [i_5] [i_8] [i_8])))));
                    }
                }
            }
        }
        var_25 *= (max((arr_18 [i_5 + 3]), (((arr_6 [i_5 + 1]) ? 0 : var_8))));
        arr_28 [i_5] |= var_4;
    }
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        var_26 += ((((min((196 || var_14), (min(var_6, var_5))))) || var_5));
        var_27 = (((((var_6 ? (max(var_9, -728850086)) : (1578527705 || -87)))) ? 0 : (min((min((arr_30 [1]), (arr_29 [i_9] [i_9]))), ((((arr_31 [i_9]) ? var_7 : var_8)))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_28 = 3115717589;
                                var_29 = (min(var_29, ((max(var_9, ((min(255, (arr_43 [i_12])))))))));
                                arr_44 [i_9] [i_9] [i_12] [i_12] = ((max((arr_34 [i_9 - 1] [i_9 + 1] [i_9 + 1]), var_8)));
                                var_30 = var_8;
                            }
                        }
                    }
                    arr_45 [i_9] [i_10] = (-37 / -11167);
                }
            }
        }
        var_31 = ((((((~var_2) & 65))) ? ((-66 ? 1074 : 1179249707)) : ((((arr_36 [i_9 + 1] [i_9 - 1]) & var_1)))));
        var_32 = (min(var_32, (((((arr_31 [i_9 - 1]) ? ((17997 ? 2882272248091400999 : 227)) : ((var_15 ? var_8 : var_5))))))));
    }
    #pragma endscop
}
