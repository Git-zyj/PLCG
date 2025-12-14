/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (!var_5);
        var_17 |= (~-30293);
    }
    var_18 = var_11;
    var_19 |= -var_3;
    var_20 = ((((!var_13) ? var_3 : (var_5 && -24401))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_21 = (min(var_21, (arr_9 [i_1 - 1] [i_2])));
                arr_10 [i_2] [i_1] = var_10;
                arr_11 [i_1] [12] [i_2] = (((((393055838 ? ((62220 ? 30304 : var_7)) : 1))) >= (max((arr_9 [i_1 + 2] [i_1 - 1]), (min((arr_5 [i_2]), (arr_8 [1] [1])))))));
            }
        }
    }
    #pragma endscop
}
