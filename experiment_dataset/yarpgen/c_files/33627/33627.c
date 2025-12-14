/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = -19313;
        arr_3 [i_0] [i_0] = ((!(((var_15 ? 7503144627585024166 : (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((var_2 ? (max((arr_4 [i_1]), ((var_9 ? var_1 : var_11)))) : (arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_18 = min(((var_8 / (arr_1 [i_1]))), (min((~var_4), 40)));
                var_19 = ((((max(var_10, (var_14 | var_1)))) ? var_10 : var_4));
                var_20 += (min((max((arr_5 [i_1]), -1785827939)), ((var_4 ? var_12 : var_5))));
            }
            arr_10 [i_1] [1] [i_1] = -46;
            arr_11 [0] [0] = ((154 ? 3902979958940105164 : 24808));
            arr_12 [i_1] [i_1] = (((min((max(130048, 130048)), (arr_0 [i_1])))) ? ((var_12 ? var_5 : -24803)) : (((3106007242435074900 > (((-24801 | (arr_0 [i_1]))))))));
            arr_13 [i_1] [i_2] = ((((min(((max(0, var_0))), ((208 ? var_6 : 92))))) ? (((min(var_7, var_10)))) : ((-((var_5 ? var_8 : var_1))))));
        }
        var_21 = ((((var_7 * (arr_4 [i_1]))) >= (((arr_4 [i_1]) / var_13))));
    }
    var_22 = var_9;
    var_23 = (((min(var_2, (min(-24803, -24816))))));
    #pragma endscop
}
