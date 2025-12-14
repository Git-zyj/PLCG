/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max(-29666, 29666)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((var_0 ? ((min((arr_3 [i_0]), var_14))) : (max((arr_7 [i_0] [i_1] [i_1] [i_2]), var_0))));
                    var_17 = (max(var_17, (((((max(var_2, var_10))) ? (-29638 ^ -983660608) : ((max(-29666, -7022))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_18 *= var_2;
                var_19 = (var_8 & 9223372036854775807);
            }
            var_20 = var_0;
            var_21 = (arr_7 [i_3] [i_3] [i_4] [i_4]);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_22 = var_9;
            var_23 *= ((((((arr_19 [i_3] [i_3] [i_6]) / -983660616))) > (min((arr_12 [i_3]), ((var_9 ? var_3 : var_13))))));
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 7;i_8 += 1)
            {
                {
                    var_24 = (arr_18 [i_7 + 1] [i_7] [i_7 - 3]);
                    var_25 = ((((min((arr_14 [i_3] [i_8 + 2] [i_8] [i_7 - 2]), var_7))) ? (((arr_14 [i_3] [i_8 + 2] [i_8] [i_7 - 2]) ? (arr_14 [i_3] [i_8 + 2] [i_8 + 2] [i_7 - 2]) : var_7)) : (((arr_14 [i_3] [i_8 + 2] [i_8 + 2] [i_7 - 2]) ^ (arr_14 [0] [i_8 + 2] [i_8 + 2] [i_7 - 2])))));
                    var_26 = ((((min(var_3, (arr_13 [i_8 + 2] [i_8 - 3] [i_7 - 3])))) ? (((arr_3 [i_3]) ? var_12 : (arr_14 [i_7 + 1] [i_7 + 1] [i_7] [i_7]))) : (((-(arr_15 [i_8 - 1] [i_7] [i_7 + 1]))))));
                }
            }
        }
        var_27 = (min(var_27, ((((124 ? 24437 : 29664))))));
        var_28 = (max(var_28, (((((max((arr_26 [i_3] [i_3] [i_3]), (arr_14 [i_3] [i_3] [i_3] [i_3])))) || ((min(var_15, ((var_13 ? var_0 : var_3))))))))));
        var_29 = (max(var_29, ((((((((arr_3 [i_3]) ? var_11 : var_9))) || (arr_8 [i_3] [i_3] [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_30 [6] = ((arr_24 [i_9] [i_9] [i_9]) & var_15);
        arr_31 [i_9] [1] = var_12;
        arr_32 [i_9] [4] = (((arr_23 [i_9]) | var_10));
        arr_33 [i_9] |= arr_1 [i_9] [i_9];
    }
    var_30 |= var_15;
    var_31 = ((24832 ? ((((!var_7) || -29641))) : ((min((min(100, 124)), 13)))));
    #pragma endscop
}
