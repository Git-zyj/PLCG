/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_16 = ((~(min((1 / -117), (((arr_2 [14]) - 0))))));
                    arr_9 [i_0] = (((((arr_0 [i_1 - 2]) << (((arr_6 [i_1 - 1] [i_2 - 1]) - 25587)))) > (arr_0 [i_1 + 1])));
                    arr_10 [i_0] = ((((!(arr_5 [i_0] [i_0] [i_2])))) >> var_9);
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_13 [4] [4] |= (var_1 >= var_8);
                    arr_14 [i_0] [i_0] = var_6;
                    arr_15 [i_0] = ((((((((!(arr_1 [i_0]))))) < (arr_12 [i_0] [i_0] [i_0]))) ? ((((((arr_3 [i_0]) / (arr_7 [i_0] [i_0] [i_3])))) ? ((363432353 / (arr_0 [i_0]))) : ((((arr_4 [6]) ? -676953102 : var_2))))) : -38));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [7] [i_0] = -8039486772489716694;
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (((((arr_8 [i_1] [i_1]) == (arr_8 [i_1 - 1] [i_4 + 1]))) ? (((arr_2 [i_0]) * (arr_12 [1] [i_1] [1]))) : (arr_8 [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_5] = ((((((arr_17 [i_1 + 1]) - (arr_17 [i_1 - 1])))) ? (arr_17 [i_1 - 1]) : (arr_17 [i_1 - 2])));
                    var_17 = ((((max(var_5, ((((arr_0 [i_0]) || var_9)))))) || ((((min((arr_5 [i_0] [i_1] [5]), var_0))) && ((max((arr_11 [i_0] [i_1 + 1] [i_5] [i_0]), (arr_6 [5] [i_1]))))))));
                    var_18 = (min(var_18, 3931534957));
                    arr_24 [i_0] [i_0] [i_5 + 1] = (max((((((133948234 ? 2779860275471157250 : 3931534957)) > ((((arr_1 [i_0]) >> (((arr_6 [i_5] [9]) - 25575)))))))), ((676953101 << (!var_2)))));
                }
                arr_25 [i_0] [i_1] [i_1 - 2] = 3931534942;
                arr_26 [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_19 = var_8;
                            arr_32 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_0] = ((((max((24 ^ var_10), (((var_5 ? var_7 : 1)))))) ? (((((-(arr_28 [14] [i_7 + 1])))) ? (((arr_6 [9] [i_6]) * var_11)) : (((arr_0 [i_1]) ? 1 : (arr_20 [i_6] [i_1 + 1]))))) : 65532));
                            arr_33 [14] [12] [i_1] [14] |= ((14 | (arr_22 [i_1] [i_7])));
                            var_20 = (min(var_20, (((~(((arr_31 [1] [i_1] [i_1 - 2] [1]) * ((((!(arr_27 [10] [10]))))))))))));
                            var_21 = (~(((((arr_4 [i_0]) ? (arr_1 [i_0]) : 255)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_13));
    var_23 = (-127 - 1);
    #pragma endscop
}
