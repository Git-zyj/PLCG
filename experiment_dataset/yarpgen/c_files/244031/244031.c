/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((min(1, 1))))));
                                var_15 = var_7;
                            }
                        }
                    }
                    var_16 = 2;
                    var_17 = (max(var_17, (((((min((((!(arr_10 [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_2] [24] [i_2])))), var_8))) ? var_10 : var_3)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            {
                var_18 ^= ((min((arr_7 [i_5] [i_5] [17] [i_5] [i_6 - 2]), ((var_7 ? 1 : 1)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_19 = (((((-((var_12 << (var_9 + 2751)))))) == (min((arr_8 [i_8 - 1] [i_9 - 3] [i_9] [i_9 - 3]), var_7))));
                                var_20 = (min(((min((!1), 1))), ((~(max(1796678798, (arr_14 [i_7] [i_8 + 1] [i_9])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {
                var_21 ^= (max((min(((27 ? 18 : 242)), 1)), -22));

                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    var_22 = ((((-(~39097)))) ? -1796678814 : (max((max(var_7, var_1)), ((32767 ? 32767 : (arr_27 [0] [i_10 + 1]))))));
                    var_23 ^= ((3733590364 == 18060) ? ((22168 ? 561376931 : 1)) : var_9);

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 17;i_13 += 1)
                    {
                        var_24 = ((var_6 ? 561376926 : ((~(arr_27 [i_10] [i_13])))));
                        var_25 &= (768 || (arr_6 [i_10 + 1] [i_11] [i_11] [i_12] [10]));
                        var_26 = (max(var_26, -467631273));
                    }
                    var_27 = (1796678798 * 0);
                    var_28 = (max(var_28, (!1)));
                }
                arr_35 [i_10] [i_10] = 51943;
                var_29 = var_2;
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            {
                                arr_43 [i_10] [i_11] [i_14 + 1] [i_14] [i_11] [i_14] [i_14] = var_7;
                                arr_44 [i_10] [i_11] [i_14] [i_10] [i_15] [i_16] = ((min(var_7, 1)));
                                var_30 = ((~((192 ? 1 : 4269386243))));
                                var_31 = ((!(((((51929 ? var_7 : (arr_25 [i_15]))) >> (((max(1728510089, -32060)) - 1728510045)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = 1;
    #pragma endscop
}
