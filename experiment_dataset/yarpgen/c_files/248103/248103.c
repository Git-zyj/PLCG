/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((-65530 ? (max(((15 ? 0 : 24)), var_1)) : -var_7));
    var_14 -= var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (arr_5 [i_0] [4] [i_0 + 1] [i_0 + 1]);
                    arr_6 [i_2] [i_0] [i_0] = 4294967281;
                    arr_7 [i_2] |= 63488;
                }
            }
        }
    }
    var_16 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_17 ^= ((((-127 >= (arr_11 [i_3] [14]))) ? 1 : ((4294967281 * (arr_11 [i_3] [0])))));
                var_18 -= -var_4;

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 -= (var_9 && var_1);
                                var_20 *= (min((((arr_9 [i_5]) > (arr_9 [i_5]))), (((arr_9 [i_5]) || 26741))));
                            }
                        }
                    }
                    var_21 *= (((arr_10 [i_3] [i_5]) * (min(0, 54495))));
                    var_22 = ((max((min(9223372036854775790, (arr_15 [i_3] [i_4] [i_4] [i_5]))), -2366208322632832906)));
                    var_23 = (max(var_23, (arr_15 [i_3] [i_4] [i_5] [i_5])));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_24 *= (max(((min((arr_12 [i_8]), 0))), (max(40, 2366208322632832905))));
                    var_25 += (arr_8 [0] [i_4]);
                    var_26 |= (min(1, 54473));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_27 *= (arr_21 [i_3] [i_9] [6] [16]);
                    arr_26 [i_4] [10] = ((-(-1 * -67)));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_28 -= (var_6 * ((min((arr_18 [i_10] [i_3] [i_4] [1] [i_3] [i_10]), (arr_18 [i_10] [i_4] [18] [i_10] [1] [i_10])))));
                    var_29 ^= (((min(24576, -27))) ? var_12 : 52);
                    var_30 = ((0 ? (arr_28 [i_3] [i_4]) : (arr_16 [1] [1] [i_4] [i_10])));
                    var_31 = var_5;
                    var_32 = -122;
                }
            }
        }
    }
    #pragma endscop
}
