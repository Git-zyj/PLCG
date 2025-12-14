/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [3] [0] = arr_4 [i_0] [2] [i_1];
                arr_6 [i_0] [i_0] [0] = var_13;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [5] [i_3 - 1] [i_4] = ((min(((min(-45, 109))), (min(var_8, 124)))));
                    arr_14 [i_3] [i_3] = arr_11 [i_2] [i_2] [i_2];
                    var_16 *= ((((min((arr_10 [i_2] [i_2] [7]), ((var_5 ? 125 : (arr_12 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 2])))))) ? ((max((min(-63, -57)), (-894571940 != 1065096707)))) : (max(407934997, -1065096707))));
                    arr_15 [i_2] [1] [i_4 + 1] = max(((((((arr_8 [i_4] [i_3 + 1]) + (arr_10 [i_4] [i_4 + 1] [i_4])))) ? (((arr_12 [i_2] [i_3 + 1] [i_4] [i_4 - 2]) - 1023)) : (min(-300208736, -45)))), (max((min(-1783786732, 118)), -119)));
                    arr_16 [5] [i_3 - 1] [i_4 + 1] = (min(((((var_2 ? var_14 : var_7)) + (min(var_9, -21)))), -2043674228));
                }
            }
        }
    }
    #pragma endscop
}
