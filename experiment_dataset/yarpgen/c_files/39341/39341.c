/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_8 ? var_15 : ((var_12 ? var_14 : 21229))))) ? (~var_2) : (~118)));
    var_20 = (var_7 + var_8);
    var_21 = (((47510 <= 21229) ? ((((min(43838, 240))) ? ((4 ? var_6 : 44307)) : var_3)) : ((var_0 ? ((var_5 ? var_16 : var_3)) : var_15))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((65535 ? (arr_1 [i_0]) : ((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_22 = (min(var_22, (((var_15 ? (~var_5) : ((max((min(14310, var_6)), 1024))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_23 -= (((arr_3 [i_0] [i_0] [i_0]) & (arr_3 [i_1 + 1] [i_1] [i_1 + 2])));
            var_24 = (((arr_6 [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1 + 1] [i_1 + 1])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_25 = 65535;
                var_26 *= (((((var_2 ? 22289 : ((max(var_3, (arr_10 [i_0] [0] [i_2] [12]))))))) ? ((((max(44307, 41969))) ? ((max(65535, -21))) : ((var_4 ? 1 : (-127 - 1))))) : ((((max((arr_9 [6] [10] [10] [10]), var_13))) ? ((var_2 ? var_1 : 12523)) : 61172))));
            }
            var_27 = ((((((arr_6 [i_0] [i_2]) / var_10))) ? (~64700) : (((-127 - 1) ? ((-117 ? 0 : 5950)) : ((43246 ? 30401 : 4909))))));
            arr_12 [i_2] [6] = (max((max((arr_9 [i_0] [i_2] [i_2] [i_2]), (arr_9 [i_0] [i_0] [i_0] [i_0]))), 7341));
            var_28 = ((((((arr_1 [i_0]) ? 53012 : ((31702 ? (arr_11 [i_0] [i_0] [i_2]) : var_11))))) ? var_5 : ((min((min(64700, var_9)), (arr_1 [i_0]))))));
        }
        arr_13 [i_0] |= ((~(min(((40911 ? (arr_7 [i_0]) : 12523)), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = ((57778 & ((var_17 ? 15360 : 4629))));
        arr_16 [i_4] = var_17;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {
                    var_30 = (var_7 / var_5);
                    var_31 |= ((61172 ? 5950 : 34683));
                }
            }
        }
        var_32 = (((((var_7 ? (arr_6 [i_5] [9]) : -62))) ? 1 : -1));
        arr_23 [3] = ((var_11 >> (3893 - 3880)));
    }
    #pragma endscop
}
