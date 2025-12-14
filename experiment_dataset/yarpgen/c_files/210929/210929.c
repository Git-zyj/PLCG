/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = 705274651128301746;
                var_21 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_22 = (((arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 3]) ? var_12 : (268435328 != 1240646062)));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_12 ? (arr_0 [i_1]) : -13225)));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_23 += (((((((((-13225 + 2147483647) << (((((arr_0 [i_0]) + 9462)) - 24))))) ? 28066 : var_2))) / ((((var_13 ? var_12 : (arr_4 [i_5] [i_5] [i_3 - 2]))) << (var_11 - 232)))));
                                var_24 = (!65527);
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_5] = (((((-13225 || (arr_10 [i_3] [i_3] [i_3] [i_3 - 2]))))) - ((var_8 % (arr_10 [7] [i_3] [i_3] [i_3 + 1]))));
                            }
                            var_25 = min(13225, ((((~1287583530) < (((0 ? -13251 : 13230)))))));
                            var_26 = ((((((((((arr_8 [3] [i_2] [i_2] [i_1] [i_1] [i_0]) ? var_9 : -14)) + 9223372036854775807)) << (((~-2) - 1))))) ? (((arr_14 [i_3 - 2] [i_1] [i_2] [i_2 - 2] [i_2] [i_2]) ? 13225 : var_1)) : ((((arr_7 [i_1] [i_2] [3]) * (13254 > var_1))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_1, 13251));
    var_28 &= (min((min(((61545 ? var_3 : var_10)), (3461 < var_7))), 30369));
    var_29 &= (min(-1229520665, (min(((-341812502 ? var_15 : -13222)), 1))));
    var_30 = ((((var_12 ? (((var_16 ? -3623 : -8958))) : ((var_8 ? var_0 : var_4)))) >> (((var_7 >= (32912 <= var_2))))));
    #pragma endscop
}
