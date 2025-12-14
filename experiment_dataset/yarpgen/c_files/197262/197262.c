/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((min((min(4129823342536561741, (arr_3 [i_0])), ((min(917810695, 1))))))))));
                                var_17 = (((-18529 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))));
                                arr_11 [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_0] [i_0 - 1] = (var_10 ? (((-1852501011480304061 != (arr_7 [i_0] [i_1] [i_2] [i_2] [i_0] [19])))) : ((var_5 ? 0 : (arr_2 [i_1]))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (min((min(-18446744073709551615, -33554432)), ((((arr_5 [i_1]) ? (((var_5 ? (arr_5 [i_1]) : 4261412872))) : (8349257876196341434 / var_7))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 &= ((-(((((4261412853 ? -14300 : -18529))) ? (~-79) : (min(250, (arr_18 [i_0] [i_1] [i_0] [i_2] [i_0])))))));
                                var_19 = (min(-var_13, (-2147483647 - 1)));
                                arr_19 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 1] [i_1] [11] = (min(((((arr_14 [i_0] [i_0 - 1] [i_0] [i_6] [i_6]) == 268419072))), (min(4283910806, (arr_17 [i_1 + 1] [i_0 + 1] [i_0])))));
                                var_20 = ((((min(var_14, ((var_9 ? (arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_6] [i_1]) : (arr_17 [i_6] [i_2] [i_2])))))) / ((((min((arr_2 [i_1]), 536870911))) + (min(16, 2147483647))))));
                                var_21 = ((-((max(var_1, var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_22 = ((((-108 * (arr_10 [i_7] [i_7] [i_8] [i_7])))) ? ((var_7 ? (-9223372036854775807 - 1) : (arr_3 [i_7]))) : (((((arr_3 [14]) <= 255)))));
                var_23 = (max((max((arr_18 [i_7] [i_7] [i_7] [i_7] [i_8]), (arr_24 [10] [10] [i_8]))), (min((arr_18 [i_7] [i_8] [i_8] [i_7] [i_8]), var_1))));
            }
        }
    }
    #pragma endscop
}
