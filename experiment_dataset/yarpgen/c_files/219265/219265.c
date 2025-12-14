/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(16413497723667616334, (((9223372036854775807 && (16413497723667616323 ^ var_1))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (~14671984435976824491);
        var_15 = ((!((!(arr_1 [i_0])))));
        arr_2 [i_0] = (!(((((((arr_1 [i_0]) != var_9))) + 2033246350041935305))));
        arr_3 [i_0] [i_0] = max((~16413497723667616345), ((-(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (arr_1 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_17 = (((((((arr_4 [i_1] [i_2]) != (arr_8 [i_1] [i_3 - 1] [1]))))) >= 953220681));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_18 = (arr_8 [i_1] [i_1] [i_1]);
                            var_19 = ((var_6 < (71 == 16413497723667616323)));
                            arr_16 [i_1] [i_2] [i_1] [i_4] = var_4;
                            arr_17 [i_1] [0] [i_3] [i_4 + 1] [i_5 - 1] [i_5 - 1] = (arr_0 [i_1]);
                            var_20 = -27899;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (((((arr_0 [i_4]) * var_12)) * (11 || var_8)));
                            arr_20 [i_1] [i_1] = (16413497723667616320 | var_2);
                            var_22 = (max(var_22, (((((arr_19 [i_1] [i_2] [4]) <= (arr_19 [i_1] [i_1] [8]))) && (((var_8 ^ (arr_6 [2] [i_2]))))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_4] = (arr_19 [i_1] [i_2] [i_1]);
                            var_23 |= ((178 >> (-1 + 15)));
                            var_24 = (-((18316062599944882956 >> (127 - 86))));
                            arr_25 [i_1] [i_1] [i_1] [9] = ((((((arr_15 [i_4] [i_7]) * 12))) ? 13943451014578373084 : 3410));
                            var_25 = (((16413497723667616362 < 27927) * (((3633271845173472100 >= (arr_19 [i_3] [i_4] [i_1]))))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_26 = (((arr_18 [i_4 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]) >> (arr_18 [i_4 - 1] [i_3 - 1] [i_3 + 1] [i_1] [i_1])));
                            var_27 = (1 < var_11);
                        }
                        var_28 ^= (((arr_6 [8] [i_2]) ? (var_5 * var_6) : var_10));
                    }
                }
            }
        }
    }
    var_29 = (max(var_29, (((32754 && ((min(27952, 1972387240))))))));
    #pragma endscop
}
