/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = (((((-var_5 % (max(var_1, (arr_0 [i_0 - 1] [i_0])))))) && ((max((arr_1 [i_0] [i_0 + 1]), 8870469361985443387)))));
        arr_3 [i_0] [i_0] = (min((((arr_1 [i_0 + 2] [i_0 - 1]) && var_2)), (((arr_1 [i_0 + 3] [i_0 + 2]) || (arr_1 [i_0 - 2] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_18 = (max((((((max((arr_4 [i_1]), var_15))) ? -var_12 : (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_3))))), (max(-var_0, ((8870469361985443398 ? -8870469361985443381 : 12540250924776542091))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {
                    var_19 += max((((!(arr_7 [i_3] [i_1 + 4])))), ((max(var_11, -8870469361985443387))));
                    arr_10 [i_1] [i_3] = (((arr_9 [i_1 + 1] [i_2 - 1] [i_3]) == ((((-29 >= (arr_9 [i_1 + 3] [i_2 - 2] [i_3])))))));
                }
            }
        }
        var_20 = ((((((~(arr_5 [i_1]))))) % (max(var_12, (min((arr_4 [15]), var_12))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_21 = (arr_11 [i_4]);
        var_22 = ((((max(var_15, var_3))) ? ((((((!(arr_11 [i_4]))) || ((max(var_4, 8870469361985443390))))))) : (max(((485040233 ? var_9 : var_8)), (var_6 / -8870469361985443399)))));
    }
    var_23 |= 25815;
    #pragma endscop
}
