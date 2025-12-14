/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_6;
    var_16 = (min(var_16, (-47 | var_8)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 = (min(var_17, ((((var_3 ^ var_10) ? (arr_2 [i_1] [i_1]) : ((((!(arr_0 [i_0]))))))))));
            var_18 = ((var_7 ^ (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 7224043316339355144))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_19 = (min(var_19, ((((!var_4) ? (arr_0 [i_2 + 3]) : 0)))));
            var_20 = (!(((-(arr_3 [1] [i_2] [i_2])))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_21 *= (arr_2 [i_4] [i_2]);
                    var_22 = var_11;
                }
                var_23 = (((((arr_0 [i_3]) ? var_5 : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_0]))) / (arr_4 [i_2 + 2])));
                var_24 = ((!((var_5 != (arr_1 [i_2] [5])))));
            }
        }
        var_25 = (min(var_25, ((((((1 ? 108 : 18078088107633192050))) ? 57344 : 1)))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_12 [8] [8] |= ((-((max((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        var_26 *= (max(((-((var_10 ? (arr_2 [i_5] [i_5]) : 16352)))), (((arr_4 [i_5]) - (arr_2 [i_5] [i_5])))));
        var_27 = (max(((-(arr_11 [i_5]))), ((min((arr_11 [i_5]), (arr_11 [i_5]))))));
        var_28 = ((+(((arr_4 [i_5]) ? (arr_3 [i_5] [i_5] [i_5]) : (arr_4 [i_5])))));
    }
    var_29 = ((var_0 ? ((~(~-3))) : (!var_7)));
    #pragma endscop
}
