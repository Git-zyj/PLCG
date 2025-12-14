/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 *= (!((3483910471 || (214 || 15417112316833630841))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((var_8 << (58475 - 58458))));
            var_19 = 58475;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [2] [0] [i_4] [i_4] |= (((((-7 ? (arr_3 [i_5] [i_2]) : -1))) ? (-32767 - 1) : 62));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [0] [i_2] = (max(28873, (((arr_8 [i_0] [i_2] [i_3] [i_4]) & 80))));
                        }
                    }
                }
            }
            var_20 += (((((((!(arr_13 [i_0] [i_0] [i_0] [i_2])))) << ((80 ? 1 : -27261)))) / ((var_2 * (arr_4 [5])))));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_21 = (min(var_21, 134));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_22 = (min(var_22, (80 >> 1)));
                    arr_25 [i_0] [i_0] [i_2] = ((-28858 * ((14226507327770803473 ? ((1 ? 0 : var_13)) : (((arr_9 [i_0]) ? (arr_10 [9] [i_2] [1] [2]) : (arr_22 [i_2] [1])))))));
                    var_23 = (max(var_23, 22));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] |= (min((min(((var_2 ? var_15 : var_7)), (arr_21 [i_0] [i_2] [i_0]))), ((((var_6 > 0) != -17192875747911383383)))));
                        var_24 &= ((((max(255, var_5))) ? (min((0 | 17192875747911383383), (~var_3))) : -9282));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_25 = (min(0, 1253868325798168220));
                        var_26 = (min(var_26, ((max(((14766321333663342876 ? var_11 : var_10)), (min((arr_3 [i_0] [i_0]), -1)))))));
                    }
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_27 *= (max((arr_32 [i_10] [i_2] [4] [i_2] [4]), (max(28873, 41122))));
                    var_28 = -28874;
                    var_29 = var_5;
                    arr_36 [i_0] [i_2] [i_6] [i_10] = 17832157598298858727;
                    var_30 *= ((((((min(30259, 53591))) * 14766321333663342876))));
                }
                var_31 = ((var_2 ? -124 : (min((min(1253868325798168220, (arr_35 [i_0] [i_0]))), 255))));
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {

                for (int i_12 = 4; i_12 < 8;i_12 += 1)
                {
                    var_32 = (max(var_32, (arr_38 [i_0] [i_12 + 2])));
                    arr_42 [i_2] [5] = ((~(arr_15 [i_12 - 3] [2] [i_2] [2] [i_2] [i_2])));
                    var_33 = ((-(arr_9 [i_0])));
                }
                arr_43 [i_2] = var_11;
                var_34 ^= -4471;
            }
        }
        arr_44 [i_0] [1] = ((((+(((arr_31 [i_0] [i_0] [i_0]) ? var_17 : 1)))) == (arr_12 [8] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_58 [10] [i_14] [i_15] [i_16] [i_15] [10] = (((-((-(arr_50 [i_15]))))));
                            arr_59 [i_13] [i_14] [i_15] [i_15] &= 1286446995;
                        }
                    }
                }
                var_35 = (min(var_35, (!-9152939752648105524)));
            }
        }
    }
    #pragma endscop
}
