/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((67 ? -1 : 67))) ? ((((arr_2 [i_0] [i_1]) ? 61 : (arr_1 [i_1])))) : var_0));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 -= ((+((((max((arr_1 [i_2]), var_1)) > var_11)))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] &= var_6;
                            var_13 = (min(var_7, (~55)));

                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                var_14 = 3;
                                var_15 = (arr_5 [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_4] [i_4] [i_4] [i_1] [i_4] = (~0);
                                arr_16 [i_0] &= (!9680258599724385921);
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = -62;
                                var_16 = (((((var_11 ? -65 : (arr_14 [i_1 + 2] [i_1] [i_1 - 2] [i_1] [i_1 - 2])))) ? -61 : (((188 & 74) ? 57 : var_4))));
                                var_17 &= ((((arr_19 [i_3 - 2] [i_2] [i_2 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_10 [i_1 + 2] [i_1] [i_2 + 1]) : var_5)));
                                var_18 = (!var_6);
                                var_19 = ((!(((var_6 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (!28050))))));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_20 = (min((((min(16777215, (arr_5 [i_1] [i_3] [i_1]))))), (min(1467667006, 2270877644081608321))));
                                var_21 |= (max((min(((((arr_1 [i_0]) ? var_8 : var_9))), (arr_0 [i_1 + 1] [i_3 - 1]))), (((1 ? -8057 : 6510222415827159091)))));
                                var_22 = (65535 <= 60);
                                var_23 += (((((((((var_4 ? (arr_2 [i_0] [i_1]) : var_4))) ? ((1 ? -7140757646815137094 : 1969096906)) : (min((arr_8 [i_0] [i_2] [i_2] [i_6]), (arr_3 [i_0] [i_3] [i_6]))))) + 9223372036854775807)) << (((!0) ? 1 : ((569532642 ? 3 : -112))))));
                                var_24 &= 16175866429627943295;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 100;
    var_26 = var_4;
    var_27 = (!-9);
    #pragma endscop
}
