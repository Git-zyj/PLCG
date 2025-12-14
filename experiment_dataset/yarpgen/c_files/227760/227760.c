/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((!var_7) ? (min(116617205, (-1827392424 | 1))) : (~1)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 &= ((1 ? 1050700741 : 65521));
        var_22 = (max(var_22, (max((!var_10), (~44346)))));
        var_23 = ((54562 ? 26583 : (arr_0 [i_0] [i_0])));
        var_24 = ((-(((((arr_1 [i_0] [15]) ? (arr_2 [i_0]) : var_9)) - ((var_0 * (arr_3 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_25 = (((arr_3 [i_1]) - ((var_11 | (((arr_3 [i_1]) - (arr_1 [5] [i_1])))))));
        arr_7 [i_1] [i_1] = (min(((~((~(arr_3 [i_1]))))), (((!(((1804543376276253696 - (arr_0 [i_1] [i_1])))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_26 = var_18;
                    var_27 ^= (arr_13 [i_4] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
