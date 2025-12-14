/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_12));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = 31951;
                                var_17 *= var_10;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3] = (max(((78 ? -31946 : (arr_6 [i_3 - 2] [i_3] [i_0 + 2] [i_0 - 1]))), (arr_6 [i_3 + 1] [12] [i_0 + 1] [i_0 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 48;
    var_19 = (((var_0 && -31951) ? (((((var_0 ? 24658 : -552146758450484109)) % (((min(1, var_1))))))) : var_0));
    var_20 = (((((!((min(var_6, -31929)))))) << (var_7 - 44895)));

    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    var_21 *= ((((max(var_1, (arr_22 [i_5] [1] [i_7])))) + (((var_6 <= ((1 / (arr_20 [i_5]))))))));
                    arr_24 [i_5 + 2] = (((max(-0, ((var_13 * (arr_19 [i_5]))))) >> (((min(33554431, var_6)) * ((13847788697784617060 ? 43535 : 13148636621423086121))))));
                }
            }
        }
        var_22 = (arr_16 [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_23 = ((-31944 ? (((31929 ? 17253 : 248579843))) : ((156 ? var_1 : (arr_8 [i_9] [i_9] [i_9] [i_9])))));
                            var_24 = (max(var_24, ((((31946 ? 6 : 33554431))))));
                            var_25 = -var_14;
                        }
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((-(arr_38 [5] [i_8] [1] [i_9] [i_10] [i_10] [i_13])));
                            arr_45 [i_13] [i_13] [i_13] [i_13] [i_13 - 3] [i_10] [i_13 - 3] = (6286410132327646866 == 0);
                            var_26 = (max(var_26, (((arr_39 [i_11 - 2] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 4]) < (arr_39 [i_11] [i_11] [3] [i_11 + 1] [i_11 + 2])))));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_27 = (((arr_47 [9] [i_14] [i_14] [9] [i_10]) ? (arr_16 [i_11 + 2] [i_11 - 2]) : var_13));
                            arr_49 [i_8 + 1] [i_14] &= (var_13 / 104);
                        }
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            var_28 = (min(var_28, (((-31946 ? 0 : ((((arr_2 [i_8 + 1] [5] [i_10 + 1]) && 1))))))));
                            var_29 = (((((var_3 ? (arr_23 [i_8] [i_8]) : 1))) ? 0 : (arr_12 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_11 - 3] [i_11])));
                        }
                        var_30 = (0 + 224);
                    }
                }
            }
        }
        arr_52 [i_8 + 1] [i_8] = ((((((arr_17 [i_8]) ? (arr_40 [10]) : 8236360172149534524))) ? 1 : (arr_27 [i_8])));
    }
    #pragma endscop
}
