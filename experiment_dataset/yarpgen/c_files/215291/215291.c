/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = (min(var_18, (arr_3 [i_1])));
                    var_19 = (min(var_19, ((((arr_5 [14] [i_1] [i_0]) - ((((((arr_1 [i_0]) / (arr_6 [i_0] [i_0] [i_0])))) ? (arr_5 [10] [10] [i_2]) : (max(var_12, (arr_5 [i_0] [i_1] [i_0]))))))))));
                    var_20 = ((~(((!(arr_6 [1] [0] [i_2]))))));
                }
                var_21 = (((~var_11) & (((arr_4 [i_0]) & var_11))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_22 = -58213;
                    var_23 -= (((1466329505118001913 - var_10) ^ 3447899286525140705));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [1] = (((arr_12 [i_1] [i_3] [i_3]) ? var_4 : (arr_12 [i_0] [i_0] [i_3])));
                        var_24 = (((arr_8 [i_0] [i_3] [i_4]) ? (arr_8 [i_0] [i_1] [i_3]) : var_0));
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_1] = (((-1466329505118001916 + 9223372036854775807) >> (16515733832631089679 - 16515733832631089657)));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_25 = ((((((arr_18 [i_0] [i_1] [i_5] [i_1]) + (arr_18 [i_6] [2] [i_1] [4])))) ? (((arr_18 [i_0] [i_0] [i_0] [i_0]) + var_4)) : (arr_16 [i_0] [i_1])));
                        var_26 = (max(((((((arr_19 [i_0] [7] [i_5]) ^ var_3)) | ((max(9904, (arr_6 [i_0] [i_0] [7]))))))), (((~var_4) ^ (16515733832631089680 ^ 4279429422086849322)))));
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6] = 216;
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_27 = ((var_8 ? (((((min(86, var_13))) ? ((((arr_26 [i_0] [i_5] [9]) ? var_8 : 4053387566))) : ((var_15 - (arr_19 [i_0] [13] [i_0])))))) : (min(var_7, (((var_10 ? var_12 : var_2)))))));
                        var_28 = ((-((((var_12 ? var_6 : (arr_22 [i_0] [13] [i_0] [i_0] [15] [i_0]))) - (arr_17 [i_7 - 1] [10] [i_7] [i_7])))));
                        var_29 = (((arr_7 [i_1] [i_5] [i_7 + 1]) ? (((!(arr_27 [i_7 + 2] [i_7 + 2] [i_7] [i_7] [i_7] [19])))) : (((!((min(1931010241078461937, 965370163953707919))))))));
                        arr_28 [i_0] [i_0] [18] [i_5] [i_7 - 1] [i_0] = (arr_23 [12] [12] [i_7]);
                    }
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_30 = (min(var_30, ((((((-var_3 ? (((~(arr_14 [i_8] [i_0] [15] [i_0])))) : var_11))) ? ((((arr_21 [i_0] [i_1] [i_1] [i_0] [i_8]) + (((arr_13 [i_0] [i_1] [i_8] [i_8]) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [16] [i_8])))))) : (((((arr_24 [17] [i_8] [i_8] [i_0] [i_0] [i_8]) | var_7)) & var_7)))))));
                    arr_33 [i_1] [i_8] [i_1] = ((((((((var_16 ? (arr_16 [12] [i_8]) : (arr_4 [i_0])))) ? (arr_13 [i_0] [i_0] [i_8] [i_8]) : (~var_13)))) ? (17682013947763727680 <= 26909) : -58092));
                }
                var_31 = (max(var_31, (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
