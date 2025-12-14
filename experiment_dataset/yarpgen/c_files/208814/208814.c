/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((((1 ? var_4 : var_2))) & var_5)) & ((((1 ? 0 : var_0)) | var_10))));
    var_12 = -50;
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 -= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_15 = ((1048575 ? 48 : 1048573));
            arr_6 [i_0] [i_1] = var_2;
            arr_7 [i_0 - 1] [i_1] = (max(-27, 252));
            var_16 = (((arr_4 [i_0 + 1]) >= (((((arr_4 [i_0 - 2]) >= (arr_4 [i_0 + 1])))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_17 = ((((var_0 ? (arr_4 [i_0 + 1]) : var_6)) == var_5));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_13 [i_3] = (~var_6);
                arr_14 [i_0] [i_2] [i_3] = (arr_5 [i_3]);
                var_18 *= (((((~(arr_10 [i_0 - 2] [i_0 - 1])))) ? (max((var_8 - var_7), (min((arr_1 [i_0]), var_5)))) : ((((((max((arr_8 [i_0] [i_3 - 1]), (arr_9 [i_0 - 2] [i_0 - 2] [i_3])))) && 48))))));
                var_19 = ((+(((arr_8 [i_0 + 1] [6]) ? (arr_8 [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_2])))));
            }
            var_20 = (min(var_20, (((max(0, 2095859770555636893))))));
        }
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_21 = (min(var_21, 7));
        var_22 = (max(var_7, 1650863476));
        arr_17 [4] &= -2147483632;
        var_23 = (arr_1 [i_4]);
        var_24 = (min(var_24, ((max(((~(arr_11 [16] [i_4 + 1] [i_4 - 1] [16]))), (((!(arr_9 [i_4 + 1] [i_4] [i_4 - 1])))))))));
    }
    #pragma endscop
}
