/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((-(((((((arr_0 [i_0]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_1])))) || (53769 ^ -2084432665483453759))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 |= (7 >= 73);
                                var_19 += (!(arr_8 [i_2] [2] [i_2] [i_2]));
                                var_20 |= ((~((-7 ? -18314 : 8435320967751064888))));
                            }
                        }
                    }
                    var_21 += -4764561751241886812;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_14 [i_0] = (((((((-2147483647 - 1) ? -8388 : 2934272925)) & 0)) | (((8388 ? -1 : 255)))));
                        var_22 = ((((-1544597932 ? 1 : 5203797275850480204))) || (18789 && 139903928));
                        var_23 = ((!(((-(((var_7 == (arr_2 [i_1] [i_1])))))))));
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_24 |= ((((((var_9 ? var_12 : (arr_6 [i_2] [i_1] [i_1 + 1] [i_1 - 2]))) == ((((var_0 > (arr_10 [i_0] [i_2] [i_2] [i_6] [i_0] [i_2] [6]))))))) ? ((~((var_6 ? (arr_0 [i_2]) : (arr_11 [i_0] [5] [5] [5] [i_0] [5] [i_0]))))) : (arr_0 [i_2])));
                        var_25 = (((((((min(var_1, var_3))) ? var_3 : (min((arr_11 [i_0] [i_0] [i_1] [8] [i_2] [i_6 - 2] [i_0]), (arr_0 [i_0])))))) + (min((((arr_15 [i_0] [i_0] [i_0]) & (arr_5 [i_0] [i_1 - 2]))), ((~(arr_5 [11] [2])))))));
                        var_26 += (arr_0 [i_2]);
                        var_27 = (var_14 ? ((var_8 ? (arr_15 [i_1] [i_0] [i_6]) : (arr_9 [0]))) : (((((((arr_4 [i_1] [i_2 - 1] [i_6 - 2]) ? (arr_1 [i_0]) : var_14)) == (arr_4 [i_0] [9] [9]))))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_28 -= ((((((((-(arr_18 [i_7] [i_7] [i_2] [i_2] [i_2])))) ? (arr_11 [i_7] [i_7] [i_2 - 1] [i_2] [7] [1] [i_0]) : (var_8 <= var_5)))) & (((((var_6 ? (arr_9 [i_0]) : (arr_3 [i_0])))) ? (min((arr_8 [i_2] [i_2] [4] [i_2]), (arr_8 [i_2] [i_1 - 1] [i_1] [i_1]))) : (((0 ? -7511058798947705054 : -8)))))));
                        var_29 = (((((~(((arr_3 [i_0]) ? (arr_11 [1] [i_1 - 1] [i_1] [i_1] [i_2 - 1] [i_7] [1]) : (arr_6 [i_0] [i_0] [i_2] [i_7])))))) <= (max(153830303947892296, 87))));
                        var_30 = ((((min((arr_4 [i_1 + 1] [i_1] [i_0]), var_13))) ? (((arr_4 [i_1 + 1] [i_1 - 1] [i_2]) ? (arr_4 [i_1 + 1] [i_1] [1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_2]))) : (((arr_4 [i_1 + 1] [i_7] [i_0]) >> (((arr_4 [i_1 + 1] [i_1 + 1] [i_2]) - 577312405))))));
                    }
                }
            }
        }
    }
    var_31 = (~var_4);
    #pragma endscop
}
