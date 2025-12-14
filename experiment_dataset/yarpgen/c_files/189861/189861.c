/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min(var_12, ((((arr_0 [i_0]) ? 21566 : var_6)))));
        var_13 = ((var_9 != (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = (((arr_1 [i_1]) || (arr_1 [i_1])));
            var_14 = (((arr_0 [i_0]) ? (arr_3 [i_1]) : 4294967295));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_12 [10] [i_3 + 1] [i_3] [i_3] [i_2] [i_0] = (((arr_7 [i_2] [i_3] [i_4]) ? ((var_7 ? 0 : (arr_8 [i_3]))) : var_5));
                    var_15 = (min(var_15, ((((0 | var_0) ? (((arr_7 [i_0] [i_2] [i_3]) ? 0 : 0)) : -23285)))));
                    var_16 = (min(var_16, ((((arr_7 [i_0] [i_2] [i_3]) % (arr_7 [i_0] [0] [i_0]))))));
                    arr_13 [i_0] [i_2] [i_3] [i_4] = ((~((1794177324 ? -5081 : 5081))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_17 = ((arr_14 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) ^ (((arr_7 [i_0] [i_2] [i_3 - 1]) >> (var_4 - 13041110212693079014))));
                            arr_19 [i_0] [i_0] [i_6] [i_5] [i_3] [i_0] [i_2] = (!0);
                            var_18 = var_5;
                        }
                    }
                }
            }
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((~var_3) ? var_7 : -520686322)))));
                            var_20 = (min(var_20, ((((((var_4 ? (arr_21 [i_0] [i_0]) : var_6))) ? (arr_23 [i_0] [i_2] [i_7]) : var_11)))));
                        }
                    }
                }
                var_21 = ((arr_22 [i_7] [i_7 - 2] [i_7]) ? (arr_22 [i_0] [i_7 - 1] [i_7]) : (arr_22 [i_0] [i_7 - 1] [i_7]));
            }
            var_22 = 65535;
            var_23 = (max(var_23, (((13852698991555339569 ? 8041470852803512577 : 5697278896880519045)))));
            arr_31 [i_0] = ((((var_7 ? var_0 : var_7))) ? var_3 : var_7);
        }
        var_24 = (min(var_24, (((((var_8 / (arr_15 [8] [i_0] [i_0] [4]))) | var_2)))));
        var_25 = (min(var_25, ((0 ? 65535 : ((3363662640395774534 ? var_3 : 0))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_26 = ((((473600102 ? (((arr_32 [i_10] [i_10]) ? var_1 : 3607224132845045672)) : (((((arr_32 [i_10] [i_10]) > var_10)))))) < (((min((arr_32 [i_10] [i_10]), 229))))));
        arr_35 [21] = ((((min((arr_34 [i_10]), ((min((arr_32 [i_10] [i_10]), 1)))))) ? ((var_11 ? (var_0 != var_0) : ((var_5 ? 94 : var_4)))) : (((((~var_9) < var_11))))));
    }
    var_27 = ((var_9 ? var_11 : var_9));
    var_28 = (min(var_28, (((~(min(((var_4 ? -94 : var_11)), (1007888633 >= var_10))))))));
    var_29 = (min(var_29, var_2));
    #pragma endscop
}
