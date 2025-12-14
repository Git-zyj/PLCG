/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((!(((5117182818029875294 ? 9223372036854775807 : 5836344797800717259)))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (min((((arr_4 [i_0] [i_1] [i_3]) ? -5836344797800717259 : 5836344797800717258)), (((!(arr_4 [i_0] [i_0] [i_0]))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, 0));
                            var_17 ^= (((-5836344797800717260 + 9223372036854775807) << (96 - 96)));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] [i_4] [i_1] = 0;
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = (arr_1 [i_1] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((((((!-5836344797800717258) ? -5836344797800717259 : 5836344797800717257))) ? 1244150602 : (arr_3 [i_0] [i_0])));
                            var_18 = 3050816695;
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_6] [i_2] [i_1] [i_0] = (((~((var_11 >> (-5836344797800717257 + 5836344797800717285))))));
                        arr_26 [i_0] [i_1] = ((min(((((arr_2 [i_2] [i_2]) ? 5836344797800717257 : 0))), ((527002698 ? (arr_4 [i_0] [i_0] [i_2]) : 1)))));
                        var_19 += (((((-5836344797800717245 ? (arr_3 [i_2] [i_2]) : var_0))) ? (((3873606096 << (var_12 - 4070582269)))) : ((((((arr_13 [i_0] [i_2] [i_6]) ? 0 : var_7))) ? (var_10 - 2704120114820018932) : (1 | var_8)))));
                    }
                    var_20 = (min(var_20, (((5836344797800717256 ? ((((1 ? 3622630060481478100 : 1)))) : (min((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1]))))))));
                    arr_27 [i_0] [i_1] [i_2] = 0;
                }
            }
        }
    }
    #pragma endscop
}
