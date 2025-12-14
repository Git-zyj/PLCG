/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [11] [i_0 - 1] = var_7;
        arr_4 [3] = (min(((min((((var_11 ? var_8 : 1072228251))), (min(var_0, var_0))))), (min(var_10, ((var_10 >> (var_1 - 1245510063)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_5 [13] [0]);
        var_13 = (min(var_13, (~var_2)));
        var_14 = (((!var_2) || (var_10 < var_0)));
        var_15 = (~var_8);
    }
    var_16 = ((((min(var_7, var_11))) - (min((max(var_1, var_6)), var_11))));
    var_17 = (min(-var_1, var_10));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = (min(var_18, ((max(((max(var_12, var_11))), var_1)))));
                    var_19 = (max(var_19, (~var_8)));
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
