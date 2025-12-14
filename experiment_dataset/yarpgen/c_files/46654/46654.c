/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_0] = (arr_3 [i_1]);
                var_16 = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_17 = 5596147331248630155;
                        var_18 |= (((arr_5 [i_3]) ? (arr_20 [i_2]) : var_0));
                        arr_22 [i_4] = (arr_4 [i_3] [i_3]);
                        arr_23 [9] [10] [i_4] [i_4] [i_4] = (((-5299907007723557933 + 9223372036854775807) << (var_4 - 4723878151654974900)));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 = (min(var_19, var_5));
                            var_20 = -1569372838;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_21 -= ((var_8 << (((arr_30 [i_4] [i_8] [i_4] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) + 702277111540534497))));
                            var_22 = ((var_0 << (var_12 - 1914536462)));
                        }
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            var_23 = 32;
                            var_24 = (min(var_24, (((((min((min(var_1, 53)), (((var_0 ? 234 : (arr_25 [i_2] [i_3] [i_4] [i_6] [i_9 - 2]))))))) ? (arr_33 [i_9] [i_9] [i_4] [i_4] [i_9 + 2] [i_9 - 2]) : var_8)))));
                            arr_37 [i_4] [i_9] [i_4] [i_4] [i_4] = (arr_28 [i_9] [i_6] [i_4] [i_3] [i_2]);
                            arr_38 [i_2] [i_2] [i_2] [i_9] [8] [3] = (min(-2027404276, (((arr_27 [i_2] [i_3] [i_4] [i_9 - 1] [i_9]) ? 4294967286 : 223))));
                            arr_39 [i_9 - 2] [i_9 - 1] [i_6] [i_9] [i_4] [i_3] [i_2] = (min((((-2147483647 - 1) ? 7512602506340014959 : -5299907007723557946)), var_4));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_25 = (min(var_25, var_12));
                            arr_42 [i_2] [i_3] [i_10] [i_6] = var_2;
                            arr_43 [1] [i_4] [i_4] [i_3] [i_2] [i_2] = max((((-16810 + 2147483647) << (((-8270 + 8280) - 10)))), (((-2147483647 - 1) ? -100 : 224)));
                        }
                        var_26 = -16826;
                        arr_44 [i_2] [i_2] [i_3] [i_3] [i_4] [i_6] |= (-9223372036854775807 - 1);
                    }
                    var_27 = (max(var_27, (((!((min((arr_7 [i_2] [i_3] [i_4]), 124))))))));
                    var_28 = 0;
                }
            }
        }
    }
    #pragma endscop
}
