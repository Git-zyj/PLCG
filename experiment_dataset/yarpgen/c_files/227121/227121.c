/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_4;
    var_19 = (max(var_19, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = var_1;
                var_21 = (((((-73484763 ? 73484769 : 1))) ? (!var_16) : 3702809290));
                var_22 = (((((~((min(var_3, 80)))))) ? ((min(((var_12 * (arr_2 [i_1] [i_1] [i_0]))), (((arr_3 [i_1] [i_0]) ? var_10 : 592158014))))) : (min(-2767113291868389064, (arr_2 [i_0] [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((var_9 ? (((~((-73484757 ? var_1 : var_3))))) : var_9));
                    arr_7 [i_0] [i_0] = min((((((var_14 ? var_16 : var_13))) ? (((92 ? -9179051716738390234 : 2070270475048815745))) : var_15)), (((-var_6 ? (arr_0 [i_0]) : (min(568358724, (arr_3 [i_0] [i_0])))))));
                    var_23 = var_5;
                    var_24 = (((arr_2 [i_0] [i_1] [i_1]) ? var_3 : ((82 ? 18198094584277914021 : -2587175111483667730))));
                    var_25 *= ((!(((!var_12) && ((min(1161613651, (arr_2 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_26 = (((arr_9 [i_3] [i_3]) ? var_9 : (((~(~73484772))))));
                        var_27 = (((((-82 * ((2070270475048815745 ? 83 : var_10))))) ? (((-(~var_7)))) : ((var_13 % (arr_12 [i_6])))));
                        arr_21 [i_5] [i_5] [i_5] = (min(((var_4 ? (min(var_13, var_5)) : (arr_18 [i_3] [i_4] [i_5] [i_4]))), (((var_6 ? (var_17 <= var_0) : (arr_15 [i_3] [i_4]))))));
                        var_28 = (min(var_28, (((!((min(2147483647, 1993901194666719745))))))));
                    }
                }
            }
            var_29 = (((arr_10 [i_3] [i_3]) > (arr_10 [i_3] [i_3])));
        }
        var_30 = (arr_18 [i_3] [i_3] [i_3] [i_3]);
        var_31 = ((var_0 ? ((var_14 ? (arr_16 [i_3] [4]) : (arr_12 [i_3]))) : ((-(arr_14 [i_3])))));
    }
    #pragma endscop
}
