/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_9, 41921));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = (((((-((var_4 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) && (((var_0 ? (((((arr_1 [i_0] [i_0]) && 158)))) : (((arr_1 [i_0] [i_0]) ? var_6 : (arr_1 [i_0] [i_0]))))))));
        var_12 = ((!((max((arr_1 [i_0] [i_0]), var_0)))));
        var_13 = (min((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        var_14 = ((!((!(((var_7 ? var_4 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = (arr_4 [i_1] [i_2] [i_3]);
                    var_16 = (min(var_16, (((((((max(var_6, (arr_5 [i_1] [i_2] [i_1])))) || (((var_6 ? var_6 : (arr_3 [i_2] [i_3])))))) ? ((((arr_1 [i_2] [i_3]) & ((var_2 ? var_2 : 158))))) : ((1 ? (max((arr_8 [i_1] [i_1]), 640304587)) : (arr_1 [i_3] [i_1]))))))));
                }
            }
        }
        var_17 = (min(var_17, var_3));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 -= (min((((arr_10 [i_1]) ? (arr_10 [i_1]) : (arr_10 [i_1]))), ((((var_6 ? var_8 : (arr_3 [i_1] [i_1]))) / (arr_10 [i_1])))));
            var_19 = (min(var_19, ((min(((((max((arr_7 [i_4] [i_4] [i_1] [i_1]), (arr_8 [i_1] [i_1]))) < (((arr_10 [i_4]) ? var_4 : var_5))))), ((-(((arr_4 [i_1] [i_4] [i_1]) + (arr_8 [i_1] [i_1]))))))))));
            var_20 = ((((((arr_5 [i_1] [i_1] [i_1]) - ((97 ? 9223372036854775807 : (arr_6 [i_4])))))) ? (arr_3 [i_1] [i_4]) : ((((((arr_5 [i_1] [i_4] [i_4]) ? var_4 : var_1))) ? (((-(arr_6 [i_1])))) : var_1))));
            var_21 = ((((var_8 ? var_8 : var_7)) * ((-(arr_9 [i_1] [i_4] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_22 = (((((((arr_4 [i_5] [i_5] [i_1]) && var_2)) || var_7)) || var_1));
            var_23 = (min(var_23, ((+(((arr_5 [i_5] [i_5] [i_1]) / (arr_7 [i_5] [i_5] [i_5] [i_5])))))));
            var_24 = (min((((arr_5 [i_1] [i_1] [i_1]) ? (max((arr_5 [i_1] [i_5] [i_1]), 640304587)) : var_4)), ((-var_0 - ((max((arr_10 [i_1]), var_2)))))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_25 = (~var_2);
                var_26 = (((var_8 ? (arr_7 [i_1] [i_6] [i_7] [i_1]) : var_1)));
            }
            var_27 -= (max(-var_1, ((max((arr_5 [i_1] [i_6] [i_1]), var_1)))));
        }
        var_28 = ((+((var_4 ? (((min((arr_15 [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1]))))) : (var_1 - var_5)))));
    }
    var_29 = (((var_4 && var_5) ? var_1 : (min((var_2 + -968798652662246821), (!var_7)))));
    #pragma endscop
}
