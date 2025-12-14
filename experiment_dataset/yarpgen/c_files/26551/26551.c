/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = (min(var_14, ((+(((arr_3 [i_0] [i_0] [i_0]) ? (arr_4 [i_0]) : ((max(4, var_6)))))))));
            var_15 += (arr_0 [i_1]);
            var_16 = (max(var_16, (((((max(-var_13, (max(0, (arr_2 [i_0] [i_1])))))) / (min(-66, ((66 ? var_6 : var_0)))))))));
            var_17 = (max(var_17, (arr_2 [i_0] [i_1])));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_18 = (min(var_18, (!var_12)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_19 *= (!11);
                            arr_16 [i_0] [i_2] [i_3] [i_0] |= ((((((arr_10 [i_5 + 2] [i_4 + 2] [i_2 + 1]) / 2106213864))) ? (arr_3 [i_2 - 1] [i_4 - 1] [i_5 - 1]) : ((min(-115, 2106213864)))));
                        }
                    }
                }
            }
            var_20 = (max(var_20, ((min((max((arr_13 [i_0] [i_2 + 1]), (arr_13 [i_0] [i_2 + 1]))), (arr_8 [i_2] [i_2 + 1] [i_2]))))));
        }
        var_21 = (max(var_21, ((max(((((-(arr_14 [i_0] [1] [i_0] [i_0] [i_0] [i_0]))) - 2106213864)), (arr_9 [i_0]))))));
        var_22 *= arr_2 [i_0] [3];

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_23 = (min(var_23, ((((-(arr_13 [i_0] [i_6])))))));
            var_24 = ((((min(((min(var_5, var_6))), (arr_18 [i_0] [i_0])))) ? ((~((var_4 ? 5017 : 3722078226)))) : (((-(!var_12))))));
            var_25 -= var_7;
            var_26 = (max(var_26, ((min(120, var_13)))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_27 |= (min((arr_22 [i_0]), var_1));
            var_28 = (max(var_28, (((~(((arr_18 [2] [i_0]) | (-5871556494687541334 ^ -114))))))));
        }
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] [0] |= 0;
        var_29 = (min(var_29, var_10));
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_30 ^= (((((var_10 / (((arr_25 [i_9] [i_9]) * (arr_12 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 1] [14] [i_9])))))) ? ((min((arr_10 [i_9 + 2] [i_9 + 2] [i_9 + 1]), (arr_10 [i_9 + 2] [i_9 + 1] [i_9 + 2])))) : (((var_7 != (((arr_13 [i_9 + 1] [i_9]) ? 2292906323 : (arr_7 [i_9]))))))));
        arr_30 [i_9 + 2] &= -5;
        var_31 = (min(var_31, (572889069 < 8443830909355048590)));
        var_32 = (min(var_32, ((((((763160238 << (((arr_14 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9]) - 8234010950807248250))))) ? (((arr_24 [i_9] [i_9 + 2]) ? (arr_24 [i_9] [i_9 + 2]) : (arr_13 [i_9 + 2] [i_9]))) : (60518 | 4))))));
    }
    var_33 = (max(var_33, var_7));
    var_34 |= (((((-(~var_4)))) ? var_6 : 4149992196));
    #pragma endscop
}
