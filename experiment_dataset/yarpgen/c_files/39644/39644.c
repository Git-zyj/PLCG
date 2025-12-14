/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((((var_4 ? (arr_2 [i_0]) : (arr_2 [1]))) * -0));
                var_12 &= (((arr_0 [i_0]) ^ (max((((arr_4 [i_1] [i_0] [i_1]) ? var_7 : (arr_4 [i_1] [i_0] [i_1]))), ((~(arr_2 [1])))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = ((arr_8 [i_1] [i_2]) ? (arr_3 [i_0] [1]) : (arr_8 [1] [i_0]));
                    arr_11 [i_0] = ((((arr_4 [i_0] [14] [i_0]) ? 49 : (-8690119641849829701 / 255))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = ((!(arr_12 [13] [i_1] [i_0] [i_1] [i_0] [15])));
                        var_14 = (+-17246);
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (((((arr_3 [i_1] [i_4 + 1]) + (arr_3 [1] [i_4 + 2]))) + ((-(arr_3 [i_0] [i_4 - 1])))));
                        var_15 = (((min((arr_13 [i_2] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 2]), (arr_13 [i_1] [i_4 - 1] [i_4 - 1] [1] [i_4] [i_4 + 1]))) + (min((arr_13 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4]), (arr_13 [1] [i_1] [i_4 - 1] [1] [5] [i_4])))));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_16 = (max(0, (~1879048192)));
                            var_17 = (min(var_17, (((-((-1073741824 ? (9223372036854775807 / 12) : ((((arr_3 [i_0] [10]) * 16))))))))));
                            var_18 ^= (max((min(0, 0)), ((((arr_16 [i_0]) ? (arr_12 [14] [i_1] [8] [i_4 + 1] [i_5] [i_2]) : 20)))));
                            var_19 = ((max((arr_13 [2] [i_4 - 1] [i_5 + 2] [i_4 - 1] [i_5 + 2] [i_0]), (arr_13 [i_1] [i_4 + 2] [i_5 - 1] [i_4 + 2] [i_5] [i_4]))));
                            var_20 = (max(var_20, ((max((min(((((arr_2 [15]) ? 4294967292 : 31460))), ((var_5 ? (arr_14 [i_0] [i_1] [15] [14]) : 0)))), ((((arr_21 [i_0] [4] [i_4 + 1] [i_5 - 2]) ? 0 : -1809564483))))))));
                        }
                        var_21 &= 1;
                        var_22 = (((var_3 ? (((var_4 + (arr_15 [i_4] [i_0] [i_0] [i_0]))) : var_8))));
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_23 |= (((min(-32645, (arr_22 [i_6 + 1] [i_6 + 1]))) % 2097151));
                        arr_24 [5] [i_0] [i_2] [i_6] = ((((max(52, -9223372036854775800))) ? var_1 : (arr_13 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 2])));
                        var_24 = (min(var_24, var_8));
                    }
                    var_25 = (arr_9 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
