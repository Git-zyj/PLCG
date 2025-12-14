/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((var_12 ? (arr_3 [i_2] [i_1]) : (((arr_3 [i_0] [i_0 + 2]) >> (((arr_3 [i_1 + 2] [i_0 + 1]) - 8754393349719888125))))));
                    var_15 *= ((((((((var_12 | (arr_8 [i_2] [i_1 - 1] [i_0 + 1] [9])))) ? ((var_5 ? var_4 : 0)) : (6155655 == -123)))) >= (((arr_3 [i_0] [i_1 + 2]) ? (((((arr_3 [i_0 - 2] [i_1 + 2]) == (arr_8 [i_0] [i_0] [i_2] [i_2]))))) : (min((arr_2 [i_1]), (arr_3 [i_0] [i_0])))))));
                    var_16 = max((((((max(var_7, (arr_4 [i_2] [i_0])))) && (arr_1 [i_2])))), (arr_8 [i_0 - 1] [i_1] [i_1 + 2] [9]));
                    var_17 = ((((((((max((arr_0 [i_0 - 1] [i_2]), 1)))) + (~0)))) > (arr_1 [i_2])));
                }
            }
        }
    }
    var_18 = 225;
    var_19 = ((var_11 ? ((((var_12 * var_2) && (var_8 >= var_12)))) : 0));
    var_20 = var_12;
    #pragma endscop
}
