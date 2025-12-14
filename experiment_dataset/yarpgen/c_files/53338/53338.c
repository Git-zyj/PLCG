/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((!(((2369887475 << (2369887475 - 2369887464)))))) ? var_0 : (~var_1))))));
    var_16 |= var_3;
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((max(2369887475, var_4)));
                var_18 = (((!18446744073709551611) >= (arr_6 [0] [i_0] [0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = ((((((arr_4 [i_1] [i_1 + 3]) > (arr_5 [i_1 + 4] [12] [i_1 - 1])))) << (((max((var_4 / var_2), (arr_9 [i_0] [i_0] [i_0] [4]))) - 4903473902629597800))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1 + 3] [i_1 + 3] = var_10;
                        arr_13 [i_1] [i_1 + 3] [i_1] = ((arr_2 [i_3]) && 18446744073709551611);
                        var_20 = (min(var_20, var_8));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_21 = 5869147917941837438;
                        var_22 += ((-(arr_5 [i_0] [i_1] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = ((+(((arr_5 [i_1 + 3] [i_1] [i_1 + 3]) / ((12577596155767714170 << (((arr_5 [i_1] [i_1] [i_1]) - 89683880))))))));
                            var_24 = (max(var_11, ((((arr_20 [i_1 + 4] [i_1 + 2] [i_1 - 2] [i_1 + 4] [i_1 - 1]) << (var_5 - 122))))));
                        }
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1] = (min(((max((arr_23 [10] [i_7 + 1] [i_7 - 3] [i_7 + 1] [i_7 - 3]), (arr_23 [i_7] [i_7 + 1] [12] [i_7] [12])))), ((-(arr_11 [i_7 + 2])))));
                            arr_25 [1] [i_1] [i_7] [2] [i_5] [i_1] [i_1] = 3;
                        }
                        var_25 = (max(var_25, (arr_18 [i_0] [i_1])));
                        arr_26 [i_1] [i_1] = var_7;
                        arr_27 [i_0] [i_1] = arr_19 [1] [i_1] [i_2];
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_26 = (min(var_26, (((-((min((arr_4 [i_0] [i_0]), 74))))))));
                    arr_30 [i_0] [i_1 + 2] [i_8] [i_1] = ((((!(arr_20 [1] [1] [16] [i_1 - 1] [2])))));
                    arr_31 [i_0] [i_0] [i_1] [i_8] = ((((((min(1925079821, var_7)) >= var_5))) + (((!(arr_21 [i_1] [i_1]))))));
                    var_27 &= 186;
                }
                arr_32 [10] [i_0] [i_0] &= ((var_4 ? (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (var_11 - var_9) : var_13)) : var_5));
            }
        }
    }
    #pragma endscop
}
