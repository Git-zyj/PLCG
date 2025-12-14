/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (arr_5 [i_0] [i_0] [i_1]);
                var_16 = (arr_5 [i_0] [i_0] [i_0]);
                var_17 = (min((((arr_2 [i_1]) ? var_10 : (max((arr_4 [i_0] [i_1]), (arr_0 [i_0] [i_1]))))), ((min((((arr_5 [i_0] [i_0] [22]) ? (arr_4 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_2] = ((((min((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [19] [i_1] [i_2]) : var_7)), (arr_5 [19] [i_1] [i_1])))) * (arr_8 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = (((((arr_14 [i_0] [1] [i_0] [i_3] [i_3]) | (((arr_14 [i_0] [i_0] [7] [i_3] [i_4]) ? (arr_3 [3] [i_1]) : (arr_3 [i_0] [16])))))) != (min((arr_9 [i_0] [i_2]), (arr_4 [8] [i_3]))));
                                var_18 = ((((max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), (arr_2 [i_0])))) ? (arr_12 [i_0]) : (min((arr_5 [i_0] [i_0] [i_0]), (arr_7 [i_3] [i_0])))));
                                var_19 = (arr_11 [i_4] [1] [i_0] [i_3] [i_4] [1]);
                                var_20 = (arr_1 [i_3] [i_2]);
                            }
                        }
                    }
                    arr_16 [i_2] [i_2] [i_2] = ((((((arr_9 [i_2] [i_2]) % (arr_9 [i_0] [i_0])))) ? (arr_9 [i_1] [i_2]) : (((((min(var_7, (arr_5 [i_0] [i_1] [i_2]))) + 9223372036854775807)) << (var_8 && var_14)))));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_21 = (((arr_3 [i_0] [i_1]) ? (((112 ? (arr_7 [i_0] [i_0]) : ((max(-441763269, -24305)))))) : (min((min((arr_1 [i_0] [i_0]), (arr_2 [i_0]))), (arr_6 [i_0] [i_0] [19])))));
                    var_22 = (min((arr_4 [i_0] [i_1]), (((arr_7 [i_1] [i_0]) ? (arr_12 [i_0]) : (arr_7 [i_0] [0])))));
                }
            }
        }
    }
    var_23 = (min((max(((min(var_5, var_11))), (var_1 - var_7))), ((max((((var_14 + 2147483647) << (var_1 - 1636877523029334870))), var_14)))));
    #pragma endscop
}
