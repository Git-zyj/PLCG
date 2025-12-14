/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_18);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 1;
            var_20 = ((~(max(var_5, 1))));
            var_21 = var_0;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = var_12;
            var_22 -= var_9;
        }
        var_23 = var_2;
    }
    for (int i_3 = 1; i_3 < 6;i_3 += 1)
    {
        arr_13 [i_3] = ((!((max((max(var_4, (arr_2 [i_3 + 1] [2]))), ((max(var_6, var_0))))))));
        arr_14 [i_3 + 2] = ((var_0 ? ((-var_2 ? ((var_18 + (arr_7 [i_3]))) : ((var_5 ? (arr_4 [12] [i_3 + 1] [12]) : var_2)))) : var_14));
        var_24 = ((((arr_4 [i_3] [i_3] [12]) ? (!var_16) : var_8)));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_18 [i_4] = -var_18;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_5] [i_5] [12] [i_7] &= (~73);
                        var_25 = (min(var_25, ((((((max(var_17, var_5)) | var_7)) >> (-var_17 + 118))))));
                        arr_26 [i_4] [i_7] [i_6] [i_4] [i_6 - 4] = (((1 ? 1 : 14003501079030804651)));
                        var_26 = ((18040335196847401604 << (14003501079030804648 - 14003501079030804589)));
                    }
                }
            }
        }
    }
    var_27 = (((((var_1 ? (!var_1) : var_10))) ? (((((max(var_16, var_8))) < var_1))) : ((min(var_13, var_10)))));
    #pragma endscop
}
