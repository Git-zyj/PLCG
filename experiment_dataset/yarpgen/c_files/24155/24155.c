/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 += ((((max(var_6, var_15))) && (((arr_1 [7] [i_0 + 2]) < (arr_1 [i_0] [i_0 - 1])))));
        var_21 -= (max((arr_0 [i_0]), (((arr_2 [i_0 + 2]) ? ((var_12 ? var_8 : (arr_0 [16]))) : ((var_18 ? (arr_1 [18] [i_0 - 1]) : -75))))));
        var_22 = ((!(((~(min(17123447043311781405, (arr_2 [i_0]))))))));
        var_23 = (((((-81 * ((-(arr_0 [i_0])))))) ? (((62 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1])))) : ((((max((arr_1 [i_0] [i_0 + 1]), (arr_2 [i_0 + 2])))) ? -var_10 : (((arr_1 [i_0 + 2] [i_0 + 2]) ? (arr_2 [i_0]) : 493083015))))));
        var_24 = (max(75, ((~(arr_1 [i_0 + 1] [i_0 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    var_25 = (min(((min((arr_4 [i_1 + 1]), var_4))), ((88 + (arr_4 [i_1 + 1])))));
                    var_26 = -var_4;
                }
            }
        }
    }
    var_27 = min(((((var_1 ? var_7 : var_6)) | var_7)), (((-((-89 ? var_16 : var_2))))));

    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_28 = var_2;
        var_29 = (max((min(-var_16, (arr_3 [i_4]))), ((((arr_3 [i_4 - 2]) && (!var_16))))));
    }
    #pragma endscop
}
