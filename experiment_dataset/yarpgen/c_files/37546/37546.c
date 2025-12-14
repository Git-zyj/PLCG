/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = ((-var_11 ? 4095 : 32767));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_0] [i_2]);
                    arr_9 [10] [i_1] = ((-var_11 ? var_16 : var_15));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (!var_7) : (arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1])));
                                var_19 = ((((((arr_1 [i_0]) >> (((arr_0 [i_4] [i_0]) - 36))))) ? (arr_11 [i_1] [i_1] [15] [15] [i_1]) : ((var_2 >> (((-32767 - 1) + 32792))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] = (4095 < var_12);
                            }
                        }
                    }
                }
                arr_16 [i_1] = var_6;
                var_20 = ((-4107 ? var_7 : (max(((24 ? 62546 : 32124)), (((-32767 - 1) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 32124))))));
            }
        }
    }
    var_21 = (((((var_0 ? var_7 : (var_16 != var_6)))) ? (((2476646349 ? (393216 > var_0) : (((-2147483647 - 1) ? 206 : 0))))) : ((var_8 ? ((var_12 ? var_1 : var_14)) : (((var_16 ? var_7 : var_15)))))));
    var_22 = ((-(((((var_15 ? 4195776966 : var_10))) ? (32766 && var_7) : var_6))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_23 = (arr_12 [i_7] [i_6] [i_7] [i_8] [i_6] [i_5]);
                                var_24 = (max((arr_7 [i_8] [i_6] [i_7] [i_8]), ((var_7 < (arr_7 [i_7] [i_7 + 2] [i_7 + 2] [i_9 + 1])))));
                                arr_29 [i_6] [14] [i_7 - 1] = (min((((((var_4 ^ (arr_26 [i_6])))) ? (arr_13 [i_9 + 1] [i_6] [i_9 + 1] [i_6] [i_9 + 1]) : (min((arr_14 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5]), var_10)))), (((32124 >> (((((arr_6 [i_5] [i_6] [i_9 + 1]) + 5)) - 108)))))));
                                var_25 = (min(var_25, var_3));
                            }
                        }
                    }
                    arr_30 [i_5] [i_6] = -89;
                    var_26 = ((-(((arr_18 [6]) ? var_7 : (var_12 || var_15)))));
                    var_27 -= (-4095 >= 35);
                }
            }
        }
    }
    #pragma endscop
}
