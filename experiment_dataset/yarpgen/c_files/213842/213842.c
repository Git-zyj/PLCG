/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 + 1]) >= 65531));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] |= 65520;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_17 = (min(62, -74));
                            var_18 = (((((var_10 / ((4294967295 ? 4294967295 : 13679837554058530979))))) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_4] [i_3] [i_0])));
                            var_19 = -67108860;
                        }
                    }
                }
                var_20 ^= var_3;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_21 = var_13;
                    arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) + ((((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2]) && var_8)))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_22 = var_10;
                    var_23 = (min((((((max((arr_10 [5] [i_1] [i_2] [i_6] [i_6]), (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0])))) >> (((~4) + 34))))), ((var_6 ? var_2 : (~var_14)))));
                }
            }
        }
        arr_21 [i_0] = var_13;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                arr_26 [i_7] [i_7] = (max((((((max(4294967295, var_15))) && (((var_16 ? 0 : 0)))))), (max((((var_4 ? 4294967293 : var_6))), var_13))));

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_24 = (max(var_24, 21982));
                    arr_30 [19] [i_8] [i_9] = (((((~-8217733068426505535) <= (!1))) ? (arr_28 [i_7] [i_8] [i_7] [i_9]) : var_14));
                    var_25 = (min(var_25, (((max((max(var_8, 21978)), var_10))))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_34 [i_7] [i_7 + 2] = (var_12 % 4294967295);
                    arr_35 [i_7] [i_7] [i_8] [i_10] = (arr_28 [i_7] [i_8] [i_10] [i_8]);
                    var_26 = 0;

                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        arr_38 [i_8] [i_8] [i_8] [i_8] = (!1);
                        var_27 = (min(var_27, (((((var_6 ? var_5 : (arr_23 [i_7 - 1]))) >> (((max(var_12, 4294967294)) - 4294967289)))))));
                        arr_39 [i_11] [10] [10] [i_11] = (arr_23 [i_10]);
                    }
                    var_28 = ((((((arr_29 [0] [i_7] [i_8] [i_10]) ? var_14 : (-9223372036854775807 - 1)))) ? (arr_29 [i_7] [i_7 - 1] [i_10] [i_7 - 1]) : (4294967295 || 1)));
                }
            }
        }
    }
    var_29 &= (var_0 && var_14);
    var_30 = var_12;
    #pragma endscop
}
