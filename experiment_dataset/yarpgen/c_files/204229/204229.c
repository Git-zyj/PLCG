/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((arr_0 [i_0 - 1]) > (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 - 2]) : 18254968236532856792))));
                    var_17 = (max(var_17, 3483701682));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = var_14;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((+-18254968236532856814) ? (((191775837176694849 ? (((arr_6 [10]) ? 1405824549 : (arr_4 [8]))) : 56))) : ((~(min((arr_1 [i_1]), 191775837176694824)))))))));
                        var_19 *= (((((arr_9 [i_3] [i_3] [i_3] [i_3] [2] [i_3]) ? (~39601) : (min((arr_4 [0]), (arr_11 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [12]))))) + (arr_7 [i_3] [8] [8] [i_0])));
                        var_20 = (((arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]) ? (((arr_0 [i_0]) ? (arr_2 [i_1]) : var_9)) : (((-61 > (arr_0 [i_0 - 2]))))));
                        var_21 = (((((4294967295 * (arr_5 [i_1 - 1] [i_1])))) ? 64482 : 65523));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_22 = (max(((-((2889142751 ? -4264127822681020534 : 6491)))), ((((arr_0 [i_0 - 2]) + (arr_0 [i_0 - 1]))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = (arr_6 [i_1]);
                            var_24 = ((!(((191775837176694824 ? -14 : -73)))));
                            arr_18 [i_0 - 1] [i_1] [i_1] [i_0 - 2] = -71;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_25 = ((12658101089926188114 ? (arr_6 [i_1]) : 191775837176694852));
                            arr_21 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1] [i_0 - 2] [i_0 - 1] = ((-(arr_2 [i_1])));
                            var_26 = ((((((arr_5 [i_1] [i_1]) + var_14))) - ((255 ? 9223372036854775793 : (((var_2 >> (-126 + 127))))))));
                            var_27 = ((((max((arr_5 [i_0] [i_1]), 2439103492494036950))) ? ((((var_2 && (arr_17 [i_0] [i_1] [i_1] [i_4] [i_1]))) ? (max((arr_4 [i_1]), (arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_1]))) : ((((!(arr_20 [i_1]))))))) : 32));
                        }
                    }
                    var_28 = (((((8191 ? 4294967295 : ((3251262782 >> (-32765 + 32788)))))) ? (((arr_17 [i_0 - 1] [i_1 + 2] [i_2] [i_1 + 1] [4]) + (arr_17 [i_0 - 1] [i_1 - 1] [i_2] [i_1 + 1] [4]))) : var_3));
                }
            }
        }
    }
    var_29 = var_12;
    #pragma endscop
}
