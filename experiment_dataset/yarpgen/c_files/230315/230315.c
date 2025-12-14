/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((((((((var_5 ? 24618 : (arr_3 [i_0] [i_1 + 1] [i_1 + 1])))) ? (arr_2 [i_0] [i_1] [i_2]) : (((!(arr_3 [i_0] [i_0] [i_0]))))))) != (((~var_9) | 1044632509211193787))));
                    var_18 &= ((((((arr_1 [i_0] [i_0]) ? (((min(var_15, (arr_2 [i_0] [i_1] [i_2]))))) : var_4))) ? var_0 : var_10));
                    var_19 = ((12604 > (((((~(arr_0 [i_2] [i_1]))) >= (arr_0 [i_0] [i_1]))))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_20 = ((((max(-3760620051244616720, -1679475778))) ? (((max(var_10, 23)))) : (((((arr_2 [i_0] [i_2] [i_1]) < var_11)) ? -24 : (var_16 < var_12)))));
                        var_21 = var_1;
                    }
                }
            }
        }
        var_22 = (min(-24, (((((((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : var_10))) && (((var_3 ? var_2 : var_5))))))));
        var_23 = 23;
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_24 = (((((min(var_15, (arr_1 [i_4] [i_4]))) + (~19))) >= var_16));
        var_25 = (min(((min((max(var_10, var_1)), ((28443 ? -7 : var_14))))), (arr_7 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 2])));
        var_26 = ((((var_0 ? (!var_3) : (((arr_1 [i_4 - 2] [i_4 - 1]) ? var_0 : var_2))))) ? (!var_11) : (((!var_5) ? -24 : (arr_0 [i_4 - 2] [i_4]))));
    }
    var_27 = (max(var_9, (((!(((var_6 ? 3113770808 : var_14))))))));
    var_28 = var_0;
    #pragma endscop
}
