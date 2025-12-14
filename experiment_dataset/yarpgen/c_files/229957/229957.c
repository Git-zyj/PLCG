/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (!248);

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((min(((((((arr_1 [i_0] [i_0]) & 110))) ? (arr_0 [8]) : (((4294967287 ? 8910109101209138907 : 16777215))))), 16589212888238537555)))));
        var_22 = var_4;
        arr_2 [i_0] [i_0] = (((min(var_5, -51)) & ((((520093696 < (-9223372036854775807 - 1)))))));
        var_23 = (min(var_23, ((min((((2556538344206359416 ? 120 : -5165685952720615516))), (max((arr_0 [0]), (arr_0 [16]))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = -1052233359;
        var_25 = 3;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_26 = (~18446744073709551615);
        var_27 = (min(var_27, (arr_1 [i_2] [i_2])));
        var_28 = ((var_19 ? (~-3) : 52));
        var_29 = (((var_2 || 18446744073709551603) ? 3774873600 : (((((arr_5 [i_2] [i_2]) && var_0))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_30 = var_4;

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_31 = var_14;
                var_32 = 240;
                var_33 = arr_1 [i_2 - 1] [i_2 - 1];
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_34 &= 3774873607;
                arr_19 [i_2] [11] = 240;
            }
            arr_20 [i_2] [i_3] = 1;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_35 = 4277736003;
                        var_36 &= ((+((((arr_7 [i_7]) != 67108800)))));
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            arr_28 [i_2] = (14 % (arr_18 [i_2 - 1] [i_2] [i_2 - 1]));
            var_37 = (min(var_37, (-32767 - 1)));
        }
    }
    var_38 += min((min((~var_18), var_19)), (!2945998817));
    #pragma endscop
}
