/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(((!(!1754503032))), (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((var_6 ? (arr_3 [0] [i_1]) : (((3679814539067261732 < (arr_1 [i_2])))))))));
                    var_21 = (max((arr_6 [i_0] [i_0] [i_1] [i_1]), (((var_2 ? (((min(var_3, var_1)))) : (arr_4 [i_0] [i_1] [i_2]))))));
                    var_22 = (max(var_22, ((max(((((1754503032 ? (arr_5 [i_2] [4]) : (arr_3 [17] [i_1]))))), (((((arr_6 [20] [5] [i_2] [i_2]) || (arr_1 [i_2]))) ? (arr_1 [i_2]) : (((var_3 ? 114 : var_6))))))))));
                    var_23 += (((arr_2 [19]) - var_0));
                }
            }
        }
        var_24 *= (((2902952414 ? var_1 : (arr_3 [i_0] [i_0]))));
        arr_9 [i_0] = ((var_2 ? var_4 : (!var_12)));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_25 = (max(var_25, (arr_13 [i_3 - 2])));
        var_26 = (min(var_9, (arr_8 [i_3] [i_3 - 1] [i_3] [i_3])));
        var_27 = (min((((((3505045890 ? var_1 : var_14)) != var_10))), ((3679814539067261732 ? ((((arr_0 [13] [i_3]) ? (arr_4 [i_3] [i_3 - 2] [0]) : var_7))) : ((var_10 ? (arr_10 [i_3 - 1]) : (arr_12 [4])))))));
    }
    var_28 = 14766929534642289898;
    #pragma endscop
}
