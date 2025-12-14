/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [19] = ((((((arr_1 [17] [i_0]) * ((var_18 * (arr_1 [i_0] [i_0 - 1])))))) ? (((arr_0 [i_0 - 1]) ? 2670395469 : (((arr_1 [i_0] [i_0]) ? var_12 : -4)))) : 2670395469));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_1] = (min((arr_4 [i_1] [15] [i_1]), (min(4850228403988974562, 56876))));

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_20 = 2670395465;
                            var_21 = (((1624571827 >> (((arr_9 [i_0]) - 13104)))));
                            var_22 = (arr_4 [13] [i_3] [i_4]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((var_12 ? (((((245 ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2]) : var_7))) ? 148 : -9)) : (max(((((arr_18 [i_0 - 2]) && (arr_14 [i_0] [18] [i_5] [18] [i_1] [18] [i_0])))), ((var_7 | (arr_9 [i_2])))))))));
                        var_24 = var_12;
                        var_25 = ((((((arr_14 [i_1] [i_0] [i_0] [13] [13] [i_0] [i_0 - 1]) ? (arr_14 [i_1] [i_0] [i_0 - 2] [i_0] [8] [8] [19]) : (arr_14 [i_1] [i_1] [i_1] [9] [i_0] [i_1] [i_0])))) ? -6394522869771582907 : 224));
                        var_26 = (((((arr_0 [i_5]) % (arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [4]))) >> (((-9223372036854775807 - -9223372036854775786) + 29))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_27 = ((((!(arr_17 [i_0] [i_0]))) ? ((max((!10), ((6 ? (arr_0 [i_2]) : 28383))))) : (((1152921504606846464 | 33804) ? var_17 : 170))));
                                var_28 *= (((min(11, 116))) ? (~var_12) : ((((arr_7 [i_6 - 1] [i_1 + 1] [i_0 - 2]) ? (arr_7 [i_0 - 1] [i_6 - 1] [i_7]) : (arr_7 [i_0] [i_2] [i_2])))));
                                var_29 *= var_17;
                            }
                        }
                    }
                    var_30 = (arr_15 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 2]);
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_31 = (max(var_31, (((-32760 ? (2147483647 & -975718017) : 6376994326104209877)))));
        var_32 = var_19;
        var_33 = (!var_7);
        var_34 *= -57;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_35 = 1;
                    arr_37 [i_9] = ((9223372036854775785 ? 122 : (min((arr_4 [i_9] [17] [i_11]), 31871))));
                    var_36 = (((-(arr_5 [i_9] [i_10] [10]))));
                    var_37 = (var_10 ? (min(8280573174708571503, ((min(975718022, var_4))))) : ((var_9 ? var_5 : (0 + 10))));
                }
            }
        }
    }
    #pragma endscop
}
