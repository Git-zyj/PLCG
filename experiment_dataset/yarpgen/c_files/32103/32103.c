/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_6 + 3675687722) + var_12));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (arr_2 [i_0 - 1]);
        var_18 *= ((~((var_1 ? -47 : 0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_19 = ((((-25370 ? var_2 : var_1)) ^ ((var_7 ? var_7 : var_8))));
                        var_20 = (var_4 == ((((arr_4 [i_3] [i_2]) ? 239 : 233))));
                        var_21 = (max(var_21, (((((arr_8 [i_0]) ? var_2 : -25370))))));
                        var_22 = (arr_8 [i_3]);
                    }
                }
            }
        }
        var_23 = (((47097 / var_8) ? (var_2 * var_15) : ((25369 ? 1 : var_15))));
        arr_11 [i_0] [i_0] = (arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_24 += (arr_7 [i_4]);
        var_25 = (arr_0 [i_4 + 2]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_26 = 1805829866;
        var_27 = (max(var_27, (((-553585068 && (arr_7 [i_5]))))));
        var_28 = (46 ? 2 : (var_15 | -49));
        arr_16 [i_5] = 25376;
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_21 [i_6] = 180;
        arr_22 [i_6] = (min((((((7817953850989828815 ? 15904 : 47097))) ? var_11 : -40)), 46));
        var_29 ^= ((47 ? ((((min(-1079097208429365642, 25370))) ? -var_16 : 213)) : (arr_9 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6])));
    }
    var_30 = -1;
    var_31 = (min((min(2634551317392602013, 40)), 7));
    var_32 = 46;
    #pragma endscop
}
