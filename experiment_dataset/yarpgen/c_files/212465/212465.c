/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_10 = 0;
            var_11 = 177;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_7 [i_2] = ((((var_1 ? ((((arr_6 [i_0]) >> (var_3 - 39850)))) : (min((-9223372036854775807 - 1), 9587816964699495919)))) ^ (((((arr_6 [i_2]) > ((48499 / (arr_0 [i_2])))))))));
            arr_8 [i_2] = ((((min(2902634889, (arr_6 [i_2])))) ? var_0 : ((((arr_6 [i_2]) * (((arr_0 [7]) / var_2)))))));
            var_12 = max((max((((arr_6 [i_0]) - var_1)), 244)), ((min((arr_6 [i_0]), (arr_0 [i_2])))));
            arr_9 [i_2] [i_0] = (((((var_8 % 1) ? ((var_1 / (arr_6 [i_2]))) : (((min(11, 141)))))) > 1389076291));
        }
        var_13 = var_5;

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_14 -= ((134 ? ((((max(var_3, 52))) ? (arr_11 [i_0] [i_0]) : 1)) : (arr_5 [i_0] [i_0])));
            var_15 = (arr_3 [i_3] [i_3]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_16 ^= 1;
            arr_16 [i_4] = ((~65530) | (min(10546456386538090998, (arr_14 [i_4] [i_4] [i_4]))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_17 = (((((!134) == (arr_0 [i_0]))) ? (arr_6 [i_0]) : var_5));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_18 = var_4;
                            var_19 = ((min(((min(var_9, 45515))), var_0)));
                            var_20 *= ((((((((max(4, 9997424621671711662))) || var_3)))) > (min(((0 - (arr_20 [i_6] [i_7] [i_6]))), (min((arr_12 [i_6] [8]), 205728533033581040))))));
                        }
                    }
                }
            }
            var_21 = (((((var_8 ? var_0 : var_3)))) || ((((1 || (arr_14 [i_0] [i_0] [8]))) || 10112249329901829723)));
        }
    }
    var_22 = (136 ? -var_8 : ((min((min(0, 2902634886)), var_2))));
    var_23 = (max(65535, 44388));
    #pragma endscop
}
