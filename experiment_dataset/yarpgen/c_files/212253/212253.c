/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 |= (((((var_4 * var_1) / (var_12 * var_5))) / (((((var_11 ? var_6 : var_6)) / var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = max((arr_3 [i_1 + 1] [i_1 - 2] [i_1]), ((((arr_0 [i_1 - 1] [i_0]) || (arr_2 [i_0])))));
                arr_4 [i_0] &= (-18008 + 18008);
                var_16 = ((-18008 ? 32 : 138));
                arr_5 [i_0] [i_1] = (((((arr_0 [i_0] [i_0]) - ((((arr_1 [1]) >> (((arr_2 [i_0]) + 741236069))))))) == (((((arr_3 [i_0] [2] [i_1]) / (arr_0 [i_0] [i_1]))) << ((((1742271284 ? 1742271284 : 32763)) - 1742271242))))));
                var_17 = (((((arr_0 [i_1 - 2] [i_1 - 1]) - (((arr_2 [i_1 - 2]) / (arr_0 [i_0] [i_1]))))) <= ((((!((((arr_2 [21]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_2 [7]))))))))));
            }
        }
    }
    #pragma endscop
}
