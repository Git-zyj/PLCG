/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (+-0);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((((max(6, var_3))) ? ((var_11 ? 0 : -2147483636)) : -153)) / (((((min((arr_5 [i_0] [i_1 - 1] [i_2] [i_1 - 1]), (arr_3 [i_1] [i_0]))) + 2147483647)) >> (((-97838696 ^ 866598385) + 913562543))))));
                    var_21 = 217;
                }
            }
        }
        var_22 = ((((var_4 ? (min(var_0, -84)) : ((-(arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? 13 : (min((177 >= 116), ((65024 ? 97838696 : var_8)))));
        var_23 = ((((max(((max((arr_6 [i_0] [i_0] [i_0] [i_0]), var_4))), -1587818149))) ? var_14 : (max((((arr_1 [i_0] [i_0]) ? 65024 : 38)), 248))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_24 = (((~var_0) ? 1408525042 : ((min(var_8, 160)))));
        var_25 = ((+(((((var_18 ? (arr_9 [i_3] [i_3]) : var_1))) ? (((-97838696 == (arr_7 [i_3] [0])))) : (((!(arr_7 [i_3] [i_3]))))))));
        arr_10 [i_3] = var_8;
        var_26 ^= (max(((min((arr_7 [i_3] [i_3]), (arr_9 [i_3] [i_3])))), (((arr_7 [i_3] [i_3]) ? (((arr_8 [i_3] [i_3]) ? (arr_9 [i_3] [i_3]) : 536870911)) : ((-875558107 ? -2131240975 : (arr_9 [i_3] [i_3])))))));
    }
    var_27 = (((max(var_1, var_14)) <= ((max(var_11, var_2)))));
    var_28 = (min(var_5, var_15));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_29 = var_0;
                            var_30 = (max(var_30, (((((min(20, (arr_14 [i_4 + 2])))) ? (arr_21 [i_7] [i_7] [i_7 - 2] [i_4 - 1]) : -var_16)))));
                            var_31 = ((((((~(max(var_0, (arr_17 [i_4 + 3] [i_6] [i_7]))))) + 2147483647)) << (((105 ^ var_12) - 209))));
                        }
                    }
                }
                var_32 = -var_15;
            }
        }
    }
    var_33 = 49;
    #pragma endscop
}
