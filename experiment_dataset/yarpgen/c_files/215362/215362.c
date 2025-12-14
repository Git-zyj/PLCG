/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(var_7 | var_0)));
    var_16 *= (var_14 - 524287);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (var_14 ? ((~(arr_1 [i_0]))) : (((max(var_14, var_14)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [14] [7] [14] = ((-((var_11 ? (arr_0 [i_2 - 2] [i_2 - 4]) : (arr_0 [i_2 - 1] [i_2 - 1])))));
                    var_18 += ((((((var_3 ? (arr_6 [i_0] [i_0]) : var_1)) >= (arr_2 [i_2 - 2] [i_2 - 3] [i_2]))) ? (((!((min(0, 0)))))) : ((((var_11 ? 1 : (arr_6 [i_2] [i_1]))) * ((1995419596072013825 ? 0 : -1))))));
                }
            }
        }
        var_19 = var_3;
        var_20 = ((!(((var_8 ? ((((arr_5 [i_0] [i_0] [i_0]) ? 0 : (arr_4 [i_0])))) : 16451324477637537790)))));
    }
    var_21 = ((0 ? 0 : 1));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            {
                var_22 = ((((((((arr_8 [1]) * (arr_14 [i_3])))) ? (max((arr_10 [i_3] [i_3]), (arr_14 [i_4]))) : 17509181054968504122)) == var_12));
                var_23 *= (((!-6) > (~1)));
                var_24 = (((((471563078 ? (((arr_11 [i_3]) ? (arr_13 [i_4 - 1]) : (arr_14 [i_3]))) : -1813340816))) ? ((var_5 ? (16451324477637537790 >= 1) : (((arr_13 [i_3]) ? 623779784058240090 : (arr_12 [i_3] [i_3] [i_3]))))) : (arr_12 [i_4 - 1] [i_4] [i_4])));
                var_25 = (((arr_14 [i_3]) ? ((((2048 && (((222 ? -1158516038 : 153709815373771580))))))) : (((153709815373771580 | 365730715) ? (((arr_14 [i_3]) ? (arr_13 [i_3]) : var_3)) : 1046433039))));
            }
        }
    }
    #pragma endscop
}
