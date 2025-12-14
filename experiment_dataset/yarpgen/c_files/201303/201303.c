/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = var_0;
                        arr_11 [i_0] = (-(120 - var_7));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_21 = (arr_13 [i_0] [i_1 + 1] [i_0] [i_4]);
                        arr_14 [i_0 - 2] [i_1 - 1] [i_0] [i_4] [16] [i_1] = ((((arr_3 [i_1 + 1] [i_0] [i_1]) ^ ((15 ? var_17 : var_4)))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_22 = (arr_10 [i_0 - 2] [i_1] [i_2] [i_4]);
                            var_23 = var_2;
                            var_24 = (max(var_24, ((max(((~((-(arr_15 [i_5] [i_4] [i_2] [i_1] [i_0 - 2]))))), -118)))));
                            var_25 = ((~(max((arr_10 [i_1 - 3] [i_0 - 1] [i_0 - 2] [i_0 + 1]), var_10))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_26 = 4194303;
                            var_27 = (max(-16, 423461875));
                        }
                    }
                    arr_20 [i_0] = (min(0, ((max((-4194317 >= var_19), (43 >= 0))))));
                }
            }
        }
    }
    var_28 = var_6;

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_23 [i_7] = ((((((max((arr_21 [i_7]), -37882947)) % (arr_2 [i_7])))) ? (min(var_10, var_14)) : (~var_15)));
        var_29 = -567039062;
        arr_24 [i_7] = ((-(((15 >= 284865224) ? var_11 : (var_16 / 1)))));
        arr_25 [i_7] = ((135 ? (max((((arr_21 [i_7]) | (arr_18 [i_7] [i_7] [i_7]))), ((((arr_13 [i_7] [i_7] [i_7] [i_7]) >= (arr_4 [i_7] [i_7])))))) : (((((((-87 >= (arr_1 [i_7] [i_7])))) >= (arr_9 [i_7] [i_7] [i_7] [i_7])))))));
        arr_26 [i_7] = (((((arr_4 [i_7] [i_7]) ? (max(var_1, (arr_4 [i_7] [i_7]))) : ((var_8 ? (arr_12 [i_7] [i_7] [i_7] [i_7]) : var_3)))) + (((min((-2147483647 - 1), -1923671031)) + 65535))));
    }
    #pragma endscop
}
