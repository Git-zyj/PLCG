/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-(max(0, var_12))))) ? var_0 : ((-1 ? 63 : 255))));
    var_19 = (max(var_19, var_8));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = ((166 ? (~12) : ((max(var_11, var_6)))));
            arr_5 [6] [i_1] [i_1] &= var_4;

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_21 = var_12;
                arr_9 [i_0] [14] [i_0] = ((15 ? (arr_6 [i_0] [i_0] [i_0]) : (((arr_6 [i_0] [i_0 + 1] [i_2 + 1]) ? (arr_6 [15] [i_0 + 1] [i_2 + 1]) : (arr_6 [i_0 - 2] [i_0 - 1] [i_2 - 1])))));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_22 = (min(var_22, (min(var_1, (arr_11 [i_0] [i_1] [i_3])))));
                var_23 = var_4;
                var_24 = (arr_1 [i_0]);
            }
        }
        var_25 = ((-((-12 ? (!var_12) : ((var_1 & (arr_11 [i_0] [i_0 + 1] [i_0])))))));
        var_26 = (min(var_26, ((max(var_6, ((-(arr_8 [i_0 - 1] [i_0 - 1]))))))));
        var_27 = (((((!(arr_0 [i_0 - 1])))) % 12));
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_28 *= (((!-3927236896919249036) + (~-6)));
        var_29 = ((-var_5 ? (arr_14 [i_4]) : (((arr_14 [i_4 - 1]) ? (arr_13 [i_4 - 1]) : (arr_14 [i_4])))));
    }
    #pragma endscop
}
