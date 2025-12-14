/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_6 <= (!var_14))) ? var_11 : var_14));
    var_16 = var_8;
    var_17 = var_7;
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_3] = ((~((((arr_8 [i_3] [i_2] [i_1] [i_0]) || (!var_6))))));
                        var_19 = ((((((((arr_9 [i_3] [i_2] [i_2] [i_1] [i_0]) ? (arr_1 [i_0]) : 3343736122)) & (((var_3 ? var_7 : (arr_6 [i_0] [i_0] [i_2]))))))) ? (arr_8 [i_3] [i_2] [i_1 + 1] [i_0]) : ((var_1 >> (((arr_2 [i_0] [i_0]) + 4253921853087183139))))));
                    }
                }
            }
        }
        var_20 = ((-(((var_13 | var_8) ? (arr_7 [i_0]) : (max((arr_2 [8] [i_0]), var_8))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_16 [i_4] = (arr_12 [i_4] [i_5]);
                    arr_17 [i_4] [i_4] [i_0] [i_4] = (arr_11 [i_4] [i_4]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_21 = (arr_18 [i_6]);
        var_22 = (((max(((((arr_19 [i_6]) ? 951231173 : (arr_18 [i_6])))), (max(var_7, (arr_19 [i_6]))))) | ((((((var_11 ? var_7 : 6))) ? var_13 : 951231186)))));
        var_23 = var_10;
        var_24 = ((~(((((7 | (arr_18 [i_6])))) & var_5))));
    }
    #pragma endscop
}
