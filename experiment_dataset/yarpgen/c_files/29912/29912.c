/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (((~var_5) / var_2));
        var_18 = (max(var_18, ((-var_6 ? (var_13 <= var_14) : var_8))));
        arr_3 [11] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 *= ((-(min(var_5, var_4))));
                    arr_12 [i_1] [i_1] [i_2] [i_3] = (min((((var_14 != (((min(1, 206))))))), 1192433338));
                    arr_13 [i_1] [i_3] = (min(1, ((((max(var_16, var_10))) ? ((max(var_12, 149))) : (var_1 % var_6)))));
                }
            }
        }
        var_20 |= (~1);

        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_21 = ((859100931358413084 ? -420103743 : 44185));
            var_22 = ((-82 ? -1339127881 : 1));
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_23 = ((((var_16 ? (arr_0 [i_1] [i_5 - 3]) : (arr_0 [i_1] [i_5 - 1])))) | ((var_5 ? (arr_1 [i_1] [9]) : ((-(arr_18 [i_1] [i_1] [1]))))));
            arr_20 [i_5] = (max((~var_3), (min(var_10, (((arr_5 [i_1] [11]) ? var_9 : var_7))))));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_24 = ((43395 ? 859100931358413075 : 10798449729681206553));
        var_25 += (min((((1 & 859100931358413077) ? (!var_1) : var_8)), (max(((var_7 / (arr_15 [7]))), (arr_15 [i_6])))));
        arr_23 [2] = (((((44871 ? 2787614983 : (min(859100931358413096, 1))))) ? (((arr_6 [i_6] [1]) ? (arr_6 [i_6] [i_6]) : (arr_7 [i_6]))) : (min(((-18384 - (arr_6 [i_6] [i_6]))), var_0))));
    }
    var_26 = (min((max((min(var_15, var_2)), var_10)), ((6208 & (~-176)))));
    #pragma endscop
}
