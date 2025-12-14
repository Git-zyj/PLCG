/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((91 / (min(var_7, 0)))));
                    arr_10 [i_1] [i_1 - 2] = 15708246578507158656;
                    arr_11 [i_0] [i_1] [i_1] = (((min(16, (arr_1 [i_1])))));
                    var_13 = var_4;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_14 = -var_3;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_15 = 15708246578507158667;
                            var_16 = ((min((max(19812, 45732)), ((((arr_7 [i_1]) <= (arr_9 [i_1] [6] [6] [i_1])))))));
                            arr_16 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = 0;
                        }
                        arr_17 [i_1] [0] [i_1 - 2] [i_1] = ((((((((arr_0 [i_2] [i_2]) / (arr_8 [i_0] [i_0] [i_1])))) || ((min(var_11, (arr_14 [i_3] [7] [7] [i_0] [i_1 - 1] [7] [i_0])))))) ? (--2738497495202392970) : (min(19798, 13371797809171052388))));
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((((15708246578507158634 | (arr_7 [i_1]))) != ((min(((~(arr_0 [i_0] [i_0]))), 0)))));
                    }
                }
            }
        }
        var_17 = (min((min((arr_7 [i_0]), (arr_7 [i_0]))), (max((arr_7 [i_0]), (arr_7 [i_0])))));
        arr_19 [i_0] [i_0] = (!1);
        arr_20 [i_0] = min((((min(var_10, (arr_0 [i_0] [i_0]))))), ((((min(var_5, (arr_6 [i_0] [i_0] [i_0])))) ? 15708246578507158656 : ((min(1342293389, 211994419))))));
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        arr_24 [i_5] = (arr_21 [i_5 + 2]);
        arr_25 [i_5] [i_5] = ((min((arr_12 [i_5 + 3] [i_5 + 1] [1] [i_5 - 2] [i_5 + 2] [i_5]), 6633269483747831613)));
        arr_26 [i_5 - 4] = (min(((~(~var_10))), ((~((18362420628963699758 ? 1 : 1))))));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_29 [i_6] = (min(((1 + (arr_28 [i_6] [i_6]))), (min(((max(var_9, (arr_28 [i_6] [i_6])))), 1342293398))));
        arr_30 [i_6] [17] = 1;
        arr_31 [15] [i_6] = ((2083788411202648227 ? (((min((min(1, (arr_28 [i_6] [i_6]))), (arr_27 [i_6]))))) : 15708246578507158656));
        arr_32 [i_6] = 3517550531858922873;
    }
    var_18 = (~(min(((min(var_8, 6))), 1935835907)));
    var_19 = (max(6208214582968282358, (-var_2 % var_8)));
    #pragma endscop
}
