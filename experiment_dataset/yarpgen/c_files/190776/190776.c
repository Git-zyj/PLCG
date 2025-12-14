/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((62890 < 24703) % (max(var_4, (~var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] = (((max(var_2, (arr_4 [i_0] [i_1 - 3])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 &= ((((((arr_1 [i_2]) - 11561035713603129208))) ? (min(((((arr_6 [i_0] [i_0] [i_0]) || (arr_3 [i_2])))), (((arr_2 [17]) + (arr_1 [11]))))) : ((max(38698, (6885708360106422407 || 10873))))));
                        var_17 = (min(6885708360106422379, (((((min((arr_0 [i_0]), -4297))) | ((min((arr_3 [i_0]), (arr_0 [i_2])))))))));
                        var_18 -= ((+(((128 || ((((arr_10 [i_2] [i_2] [i_2] [i_2]) ? 252 : -27369))))))));
                        var_19 += ((-(((arr_11 [19] [i_1 - 3] [i_1 - 4] [i_1 - 3]) + (arr_11 [i_1] [i_1 - 3] [i_1 - 3] [i_1 + 2])))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = 4;
                        var_21 *= ((((min(var_3, var_5))) ^ 14));
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_0] = (((((var_6 ? var_2 : -16384))) ? 3772115604223082562 : 46));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [12] [i_1] [i_2] [i_6] [i_6] = (arr_14 [i_6] [19] [i_5] [5] [6] [1]);
                            var_22 -= (11 && -19189);
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_23 += (((arr_10 [i_1 - 3] [i_1 - 4] [i_1 - 3] [i_5]) ? (arr_9 [i_0] [i_0]) : 223));
                            var_24 = (var_9 * 19189);
                            var_25 = (max(var_25, 77));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_26 = (((arr_8 [i_0] [i_0] [i_8 + 2] [i_8 + 2]) ? (arr_8 [i_0] [i_2] [i_8 + 2] [13]) : (arr_8 [i_2] [i_8] [i_8 + 2] [i_8 + 2])));

                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            var_27 = (arr_19 [i_0] [i_0] [3] [i_0] [i_0]);
                            arr_29 [i_9] [i_8] [i_2] [12] [i_1] [i_1] [i_0] |= 209;
                            var_28 = (((var_14 ? 20 : (arr_2 [i_9]))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_29 = ((-19211 < (arr_3 [i_10 + 2])));
                            arr_32 [i_10] [i_1 - 1] [i_10] = 19189;
                            var_30 = (((((arr_25 [i_0] [19] [i_2] [9]) && 252)) ? (arr_14 [i_0] [i_8 + 1] [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_10 + 2]) : var_10));
                            var_31 &= (arr_4 [17] [i_1 - 1]);
                        }
                    }
                    arr_33 [i_2] [i_2] [i_2] = ((((+((((arr_16 [i_0] [i_0] [i_0] [i_0]) <= (arr_6 [17] [i_1] [17])))))) * var_14));
                    var_32 = 16405370622087229408;
                }
                var_33 = ((((-(arr_12 [i_0] [i_0] [i_0] [i_1 - 1]))) | (((((((arr_15 [i_0] [17] [16] [i_0]) || (arr_20 [i_0] [i_1] [i_0] [i_0] [i_1 + 1])))) == (~var_2))))));
            }
        }
    }
    var_34 |= max((((min(31301, 11561035713603129208)) ^ 11561035713603129211)), var_13);
    #pragma endscop
}
