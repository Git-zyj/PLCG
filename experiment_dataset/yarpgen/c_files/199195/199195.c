/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_12, (244 * 45149)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_21 = (((max((var_14 % 31), (1048689270788266700 - -1211626922)))) ? (((((arr_3 [i_0 - 1] [i_0 + 1]) != (min((arr_3 [i_0] [i_0]), 3304)))))) : (min((~var_16), (min((arr_0 [i_0 - 2]), (arr_1 [i_0]))))));
        arr_4 [i_0 - 2] = (min(((25243 - (min(60848, 17398054802921284928)))), var_16));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            {
                var_22 = (min(((((arr_5 [i_1]) < -106))), ((var_10 ? (arr_5 [i_1]) : (arr_5 [i_1])))));
                var_23 = (max(var_23, (((((!((max(-62, (arr_6 [i_1])))))))))));
                arr_9 [i_2] = (((-(((arr_0 [i_1]) ? 4823741194940612413 : var_1)))));
            }
        }
    }
    var_24 &= ((((((var_8 ? var_2 : 1337384015805923800))))) | (max(var_3, 17398054802921284931)));
    var_25 = (max(var_0, (((var_8 || (((var_5 ? var_1 : var_0))))))));
    #pragma endscop
}
