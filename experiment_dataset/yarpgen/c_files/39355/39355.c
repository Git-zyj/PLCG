/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = (7168 >= -115);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [12] [i_2] [i_4] = 24973;
                            var_19 = (((7147 + var_11) + ((min(7168, var_2)))));
                            var_20 = ((var_16 ? (2147483629 > 65532) : (arr_1 [i_4])));
                            var_21 -= (((max((var_8 >= -1), -104)) ^ (((((9623 ? -7161 : -7169))) ? ((max(4599, 53047))) : -7169))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] = (-8683003123022368506 * 0);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = (15256 % 4095462886);
                        }
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_6] = var_8;
                            var_22 = ((var_4 || (arr_18 [i_6 + 1] [i_6] [i_6 - 2] [i_6] [i_3] [19])));
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_6] = 2147481600;
                        }
                        arr_27 [i_2] [i_1] [i_2] |= (max((((arr_1 [i_2]) ? var_10 : 7168)), (var_2 | var_2)));
                        var_23 *= ((max(1, 1854513326)));
                        var_24 = ((!(((var_4 ? var_5 : 37)))));
                        var_25 = (min(var_25, ((((97 ? 32704 : (arr_1 [i_2])))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = var_5;
                        var_27 = (min((!var_1), ((-29812 != (arr_5 [i_0] [i_2] [i_2] [i_7])))));
                    }
                    var_28 = (min(var_28, 65522));
                    arr_31 [i_2] = (~1);
                }
            }
        }
    }
    var_29 = ((-((min(1, -17827)))));
    #pragma endscop
}
