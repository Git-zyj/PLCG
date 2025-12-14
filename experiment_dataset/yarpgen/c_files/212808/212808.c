/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((min(var_0, var_14))) > (var_3 ^ var_7)))), ((~(max(1536995383, var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [1] = ((var_2 > 0) >> (((~var_3) - 2122339026)));
        var_16 += -118;
        var_17 = (((arr_2 [i_0 + 1]) != (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((arr_1 [i_0] [i_0 + 1]) <= (-41 <= -822520751059435042)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 &= ((var_0 >> (var_5 - 460659720955465529)));
                        var_20 = ((0 ^ (arr_0 [i_0 + 1])));
                        var_21 ^= (~40);
                        var_22 = (max(var_22, (118 > -113)));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_23 = ((~(var_4 ^ 58477)));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((!800644850) >> (((arr_3 [i_4 + 1]) - 2879215849)))))));
                            var_25 = ((-(arr_6 [i_4 - 1] [i_4] [i_0 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_26 = ((-41 != (!var_8)));
                            var_27 = ((var_8 >> ((((arr_14 [i_1] [i_1] [i_2] [i_4]) > 15485947399907911749)))));
                            arr_21 [i_6] = (~268434432);
                            var_28 = (((168 == 16999549388939624509) == var_1));
                            var_29 = (1005473406 > 16999549388939624509);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_30 = 16999549388939624509;
                            var_31 = (max(var_31, (((((((arr_10 [i_0] [i_2] [i_0] [i_2] [i_7]) == (arr_13 [i_1] [i_4 - 1] [i_1] [i_0 + 1])))) > (arr_5 [i_0 + 1]))))));
                            var_32 = (((var_6 >> var_13) >> (((~var_13) + 62))));
                        }
                    }
                    var_33 = (((-6553412725356065422 + 9223372036854775807) >> (-44 + 73)));
                    var_34 *= ((((~(arr_8 [i_2] [i_1] [i_0 + 1] [i_0 + 1]))) <= var_10));
                }
            }
        }
    }
    #pragma endscop
}
