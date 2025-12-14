/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((((arr_3 [i_0]) ? 32767 : var_7)))) ? var_4 : (arr_1 [i_0] [i_1])));
                arr_5 [i_0] = (max(((((1920 < (arr_0 [i_0]))))), (~60297)));
                var_18 = (((-(arr_0 [i_1]))) * (arr_0 [i_1]));
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_19 = (((min((arr_6 [i_2 + 2]), (arr_6 [i_2 + 1]))) * ((((!-441) ? var_10 : -448)))));
        var_20 = (arr_7 [1] [13]);
        var_21 = ((var_12 != ((-(arr_6 [i_2 + 2])))));
        var_22 = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 = (min(var_23, (((max(1920, (arr_6 [i_3])))))));
        arr_10 [i_3] [10] = var_6;
    }
    var_24 += ((var_3 ? ((~(max(var_17, var_15)))) : ((min((!var_12), (var_6 - var_16))))));
    var_25 = var_10;
    #pragma endscop
}
