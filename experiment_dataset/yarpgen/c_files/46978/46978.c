/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((17467096826771714285 ? ((~(min(9223372036854775807, var_3)))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (54579 < 511);
                        var_18 = (min(var_18, (!61992)));

                        for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((var_8 ? (arr_13 [i_0] [i_1] [i_3] [i_2] [i_1]) : (arr_13 [i_3] [i_1] [i_2] [i_3] [i_4])));
                            var_19 = (arr_4 [i_0] [13] [14]);
                        }
                        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_20 &= (arr_17 [12] [i_1] [i_2] [i_3] [i_5 - 2]);
                            var_21 -= arr_2 [i_0] [i_1] [i_1];
                        }
                    }
                    var_22 += ((var_13 ? ((~(arr_6 [i_0]))) : 22623));
                    var_23 &= var_0;
                }
                var_24 = ((1 >= ((((min(-2084618995, 511))) ? 1 : ((max(var_1, 511)))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((-(~1))))));
                            arr_24 [i_7] = ((max((((!(arr_1 [i_0]))), var_15))));
                            arr_25 [i_0] [i_1] [i_6 + 4] [i_7] = -26907;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                {
                    var_26 = (min(((((max(22615, 511))) / ((18446744073709551610 ? (arr_30 [i_8]) : var_14)))), ((-(!var_12)))));
                    arr_33 [i_8] [i_8] = (((arr_32 [i_9] [i_8] [i_10] [i_10 + 1]) ? ((~(arr_31 [i_8] [i_8] [i_9] [i_10]))) : var_11));
                    var_27 = (max(-46, ((-84 ? 2296710938 : -2084618975))));
                }
            }
        }
    }
    var_28 = (42920 + (~var_10));
    #pragma endscop
}
