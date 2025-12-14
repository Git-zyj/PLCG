/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = (min(var_19, var_13));
        arr_2 [i_0] = (~12);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, (((-(((((1 + (arr_4 [i_1] [i_1])))) ? ((((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1])))) : (arr_3 [i_1]))))))));
        arr_6 [i_1] = ((min((arr_4 [i_1] [i_1]), var_4)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 = ((((((!156243097) ? (((arr_8 [i_2]) / 1152514412)) : (((max(var_7, (arr_8 [i_2])))))))) ? 6840341375095550912 : (arr_7 [i_1])));
            var_22 = (((~var_9) != ((((max((arr_8 [i_1]), var_12)))))));
            var_23 ^= ((var_9 != (((-(((!(arr_5 [i_1] [i_1])))))))));
            var_24 = (arr_7 [i_1]);
            arr_9 [i_2] = ((var_5 * ((469762048 / (arr_7 [i_2])))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_18 [i_4] [i_3] [i_4] = var_11;
                var_25 += (((!2612076551) || ((min((max((arr_3 [i_1]), (arr_4 [i_1] [i_1]))), (187040616102185834 != -2147483630))))));
            }
            var_26 = (!((((((arr_5 [i_1] [i_3]) + 2147483647)) << (((((arr_5 [i_1] [i_3]) + 31895)) - 3))))));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_27 = ((-(((((~(arr_21 [i_1])))) ? -1484497559 : (arr_5 [i_5 - 1] [i_5 - 1])))));
            arr_22 [i_1] [i_1] [i_5] = ((~(max((arr_4 [i_1] [i_5]), -18174))));
        }
        arr_23 [i_1] = ((!(((~(4294967295 / 21))))));
        arr_24 [i_1] = 65535;
    }
    var_28 = (!-12635);
    #pragma endscop
}
