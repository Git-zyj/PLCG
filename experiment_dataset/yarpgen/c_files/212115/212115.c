/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = ((arr_0 [i_2]) ? 1 : (((arr_0 [i_0 + 1]) ? (arr_0 [i_1]) : (arr_0 [i_0 - 1]))));
                            arr_13 [i_1] [i_2] [i_2] [i_3] = (arr_10 [i_0] [i_0] [i_2]);
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_4] [i_0 + 3] = ((min((((~(arr_15 [i_0])))), (arr_10 [i_4 - 2] [i_0 - 1] [i_1]))));
                    var_15 = 4857081944106353811;
                }
                for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_16 = (arr_17 [i_0] [i_5 - 3] [i_5]);
                        var_17 = 12376;
                    }
                    var_18 = (arr_15 [i_0 + 3]);
                }
                arr_21 [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                var_19 = (min(var_19, ((max(0, 268421460)))));
            }
        }
    }
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_26 [i_8] [i_7] = (min(1282990296, 14355208279770654934));
                arr_27 [i_7] [i_7] [i_8] = (arr_10 [i_7] [i_8] [16]);

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_21 = (i_9 % 2 == zero) ? ((((((((((var_1 & (arr_6 [i_9] [i_9] [i_7]))) + 9223372036854775807)) >> (2147483647 - 204)))) ? ((((arr_24 [i_8]) > (arr_24 [i_7])))) : (((1 && var_10) ? (!1) : (arr_3 [i_8] [i_9])))))) : ((((((((((((var_1 & (arr_6 [i_9] [i_9] [i_7]))) - 9223372036854775807)) + 9223372036854775807)) >> (2147483647 - 204)))) ? ((((arr_24 [i_8]) > (arr_24 [i_7])))) : (((1 && var_10) ? (!1) : (arr_3 [i_8] [i_9]))))));
                    arr_30 [i_7] [i_9] = ((+(((arr_4 [i_7]) / (arr_4 [i_7])))));
                    arr_31 [i_7] [i_7] [i_9] [i_9] = (arr_12 [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]);
                    arr_32 [i_7] [i_7] [i_9] [i_9] = (min((((-((30 ? 44460 : (arr_29 [i_9] [i_9] [i_9] [i_9])))))), (arr_12 [i_7] [i_7] [i_7] [i_9] [i_7] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
