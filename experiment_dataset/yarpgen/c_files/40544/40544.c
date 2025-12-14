/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((((min((arr_2 [i_0]), (arr_3 [i_0] [i_0])))) ? ((max(1, 96))) : -32744))) ? (((~((1 ? 61 : (arr_0 [i_0])))))) : (arr_2 [i_0])));
                var_11 = min((((arr_1 [i_1 - 2] [i_1 - 2]) ? (arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 2]) : (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 2]))), (((min(var_1, (arr_1 [4] [i_1]))))));
                var_12 = ((~((1 ? (arr_1 [i_1 + 2] [i_1 - 1]) : (arr_6 [2] [i_1 - 2])))));
            }
        }
    }
    var_13 = (max(var_13, ((min(3, 3)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = (arr_14 [9] [9] [i_4] [i_5]);
                                var_15 = (arr_20 [i_2] [i_3] [i_4] [1] [i_3]);
                            }
                        }
                    }
                }
                arr_22 [i_2] = (arr_19 [i_2] [i_2] [i_2] [i_2]);
                arr_23 [i_2] [i_2] = ((var_10 ? (min(334914440, (min((arr_20 [i_2] [i_3] [9] [3] [i_2]), (arr_17 [i_3]))))) : ((max(((61333 ? (arr_14 [i_2] [i_2] [i_3] [i_3]) : var_3)), ((var_2 ? (-2147483647 - 1) : (arr_10 [i_2]))))))));
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
