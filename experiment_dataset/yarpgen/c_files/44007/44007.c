/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_16, (((-var_3 ? (((22 ? (((31 ? 31 : 31))) : ((~(arr_0 [i_0])))))) : 18446744073709551604)))));
        arr_3 [i_0 + 2] [9] = ((~(max(var_7, ((min(var_14, -30652)))))));
        arr_4 [i_0] [i_0 - 1] = (min(var_13, (((max(var_3, var_5)) / var_9))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_16 [i_3] [i_3] [i_1] [i_3 + 1] [i_3] [i_3] = ((var_8 ? (((32 || (((var_6 ? var_3 : var_10)))))) : ((((var_13 ? 0 : -17412))))));
                        arr_17 [i_0 + 3] [i_1] [11] [i_1] = (max((min((arr_14 [i_0 + 3] [i_2] [i_1] [i_0 + 3]), (var_5 || var_9))), var_5));
                        var_17 = (((var_14 + 2147483647) >> (var_13 + 36)));
                        var_18 = (arr_12 [i_0 + 1] [i_0 - 2] [i_0]);

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((var_8 ? var_13 : ((var_2 ? var_15 : (arr_15 [i_0] [i_1 - 2] [i_1 - 2] [i_4] [i_4])))))) ? (((min(8460, var_13)))) : var_1));
                            arr_21 [i_1] = ((+(((arr_8 [i_1] [i_1]) ? var_9 : var_9))));
                            var_19 = (((arr_0 [i_0 - 3]) ? ((min(((var_7 ? var_11 : (arr_6 [i_2] [i_3] [i_4]))), var_13))) : (max(-65517, 1094417064156710211))));
                            var_20 ^= (((arr_5 [i_0 - 1] [i_1 + 1]) ? ((max((arr_5 [i_1 + 1] [i_4 + 2]), var_14))) : ((-(arr_5 [i_0 + 2] [2])))));
                            arr_22 [i_1] [i_2] = -var_4;
                        }
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_1] [17] [i_1] [i_3] [3] = (min((-1 * 14), (max((min((arr_8 [14] [i_1]), 3)), var_3))));
                            arr_27 [1] [i_1] [i_1] [i_1] [i_1] = var_15;
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_3 + 3] [i_2] [i_1] = (max(-31, var_12));
                        }
                    }
                }
            }
        }
    }
    var_21 = (((var_13 ? 65535 : 1197700049173160854)));
    var_22 = var_4;
    var_23 = (-var_13 / var_13);
    #pragma endscop
}
