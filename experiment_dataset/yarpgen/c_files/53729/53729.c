/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (var_15 * var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 *= (-2147483647 - 1);
        var_19 = ((-((5044908061801230794 ? var_14 : var_8))));
        var_20 = var_6;
        arr_4 [i_0] = -var_9;
        arr_5 [16] [i_0] = (((((-1169745103 ? 1 : (arr_2 [i_0])))) + (((-2147483647 - 1) + (arr_0 [4] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = (((4294967288 * 1) ^ (((arr_0 [15] [i_1]) >> (-28154 + 28208)))));
        var_22 = ((-(arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((242 << (2147483647 - 2147483632))) * (((!(var_15 || 255))))));
        var_23 += (((((((arr_0 [i_2] [i_2]) ? -1568752819 : 0)) + 2147483647)) >> (0 + 0)));
    }
    var_24 = (((((1 || -2147483647) >> (((var_5 - var_2) - 15101011619028985864)))) & (((var_14 == var_10) ? var_4 : (~var_8)))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_25 = ((((((((var_5 && (arr_13 [1] [i_4] [i_4])))) % 244))) ? (((~(((4294967276 != (arr_17 [i_3] [i_3 - 1]))))))) : (((((arr_11 [i_4]) != (arr_16 [7] [i_4] [18]))) ? ((var_14 ? var_3 : (arr_11 [i_4]))) : ((var_9 ? var_1 : (arr_13 [i_3] [i_3] [i_3])))))));
                    var_26 -= (((((~(var_6 != 255)))) + ((+(((arr_11 [i_5]) >> (((arr_17 [i_3] [i_3]) - 191))))))));
                    arr_18 [i_3] [i_3] [i_4] [i_5] = (((~0) ? ((71 ? 1 : 248)) : (((((((arr_16 [i_3] [i_4] [i_3]) ? var_11 : var_10))) || (arr_11 [i_3 - 1]))))));
                }
            }
        }
    }
    var_27 = (min(var_27, (((~(((~var_4) ? ((245 ? var_2 : var_10)) : var_4)))))));
    #pragma endscop
}
