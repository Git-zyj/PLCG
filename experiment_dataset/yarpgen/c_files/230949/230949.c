/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2593152757932307060;
    var_14 |= -var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = -var_11;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 = ((-(arr_4 [i_0] [i_0] [i_0])));
                        var_16 = (arr_3 [i_0]);
                        var_17 = (min(var_17, var_1));
                    }
                }
            }
        }
        var_18 = 1;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_19 = (arr_8 [i_4] [1] [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                {
                    var_20 *= ((!(arr_2 [i_6])));
                    var_21 = 15;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_22 = (((((var_9 ? var_5 : var_10))) ? ((var_1 ? (arr_12 [i_4]) : 20)) : (!4677794662552924090)));
                                var_23 = ((((arr_18 [i_4] [i_5] [i_6] [i_6] [i_6]) - 17179586207851392592)));
                                var_24 |= ((arr_6 [i_6] [i_4] [i_6] [i_7]) ? (arr_6 [i_8] [i_4] [i_4] [i_8]) : (arr_6 [i_8] [i_5 + 2] [i_6] [i_7]));
                            }
                        }
                    }
                    var_25 = ((117 ? -9965 : 1267157865858159022));
                }
            }
        }
        arr_25 [i_4] [i_4] = ((58965 ? var_4 : (!1)));
        var_26 += (((arr_3 [1]) < (arr_13 [i_4] [i_4] [i_4])));
        arr_26 [i_4] = var_7;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_27 = ((~((var_8 ? 0 : var_8))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 9;i_12 += 1)
                {
                    {
                        arr_40 [i_9] [i_9] [i_9] [i_9] = ((((((arr_16 [i_9] [i_12] [i_9]) ? var_11 : 0))) ? (((min(var_4, 1)))) : var_8));
                        var_28 = 3004083373;
                        var_29 = var_9;
                        var_30 = (max(var_30, (((((-(arr_9 [i_9] [i_10] [i_11 - 4] [i_12]))) < var_6)))));
                    }
                }
            }
        }
        arr_41 [i_9] = (((4 << (var_2 - 17858126106890905410))));
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        var_31 = (max(var_31, ((1 ? (((((((var_2 ? (arr_4 [16] [i_13] [i_13]) : var_10))) && var_12)))) : (~var_12)))));
        arr_44 [i_13] [i_13] = (((var_11 + (arr_4 [4] [4] [i_13]))));
        var_32 = (((((var_6 / var_2) & 7923386700319262479)) / (var_4 && var_2)));
        var_33 = (max(var_33, (((var_5 ? (arr_31 [i_13] [i_13]) : (arr_31 [i_13] [i_13]))))));
    }
    var_34 = 2;
    var_35 = -9965;
    #pragma endscop
}
