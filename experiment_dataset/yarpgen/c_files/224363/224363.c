/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 *= (max((min(var_10, (var_8 + 263882790666240))), (((-((var_11 ? (arr_1 [i_0] [8]) : var_10)))))));
        arr_3 [i_0] = ((!((min((((arr_0 [i_0]) ? var_1 : var_11)), (((var_8 >> (var_6 - 97)))))))));
        var_21 = ((((((arr_0 [i_0]) ? 164 : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) * (arr_2 [i_0]))) : (!99)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (((((((0 - (-127 - 1)))) >= -263882790666240)) ? ((((((arr_6 [i_0]) ? 0 : 1753750767110985288))) ? (((62741 << (88 - 76)))) : (((arr_5 [i_2]) | var_7)))) : (arr_4 [i_0])));
                    arr_10 [i_0] = ((!((max(-263882790666240, (arr_7 [i_1] [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 *= (arr_8 [i_4] [i_3] [i_0] [i_0]);
                                var_23 *= ((((((((55649 ? (arr_4 [i_2]) : var_18))) || ((min((arr_8 [i_0] [i_0] [i_0] [i_3]), var_18)))))) != var_3));
                                arr_17 [i_0] = (max((-4905541868450741928 || 4294967288), (!91)));
                            }
                        }
                    }
                    arr_18 [i_0] = ((65532 ? 91 : (((arr_7 [i_2] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : 127))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [i_5] = ((arr_21 [i_6 + 1] [i_5]) || var_2);
                    var_24 *= (((arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 4]) != var_16));
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_25 *= (((!-7) < (!8397600279017367164)));
                            arr_41 [i_5] [i_5] [i_5] [i_11 + 2] = var_1;
                        }
                    }
                }
            }
            arr_42 [i_5] [i_5] = (((arr_19 [i_5] [i_5]) >= (arr_8 [i_5] [i_5] [i_5] [i_8])));
            var_26 *= ((-(arr_7 [i_5] [i_5] [i_5] [i_5])));
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = ((-7625936586255516289 / ((((arr_36 [i_12] [i_12] [i_12] [i_12]) > 23669)))));
        arr_46 [16] [i_12] = (arr_8 [i_12] [i_12] [5] [i_12]);
        arr_47 [i_12] = -107;
        arr_48 [i_12] [i_12] = ((((min((arr_27 [i_12] [i_12] [i_12]), (arr_16 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? ((var_17 ? (arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]))) : ((var_5 ? (arr_27 [i_12] [i_12] [i_12]) : (arr_27 [i_12] [i_12] [i_12])))));
        arr_49 [i_12] = (((((((((-263882790666240 + 9223372036854775807) << (((var_7 + 441172019) - 39))))) ? (var_9 & -7625936586255516289) : ((min(var_0, var_6)))))) ? ((((((((arr_6 [i_12]) > var_14))) > (arr_7 [i_12] [i_12] [17] [i_12]))))) : (min(((max(30800, 50530))), ((var_0 ? 39668 : (arr_6 [i_12])))))));
    }
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        var_27 = -12374;
        arr_52 [i_13] [i_13] = (max(var_17, (max(var_15, 65535))));
    }
    #pragma endscop
}
