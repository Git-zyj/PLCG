/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 23914;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 15917;
        arr_4 [i_0] = ((var_10 ? var_12 : (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (min((((!(((arr_6 [i_1] [i_1]) || (arr_6 [i_1] [i_1])))))), ((0 ? (arr_6 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1])))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = ((((min(120187038, -27581)))) ? (((~(arr_5 [i_1])))) : (min(12940308120992651006, 0)));
            var_15 -= (arr_6 [i_1] [i_1]);
            arr_10 [i_1 - 1] = (max((~977055596), (arr_8 [i_2] [i_2] [i_2])));
            arr_11 [7] = (31313 | 1);
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, (arr_15 [i_1])));
                        arr_18 [i_1] [i_5] [i_4] [i_5] = arr_2 [i_1];
                        var_17 = 6011598919283536915;
                        arr_19 [i_5] [i_1] [i_3] [i_5] [i_5] = (((((+(((arr_5 [i_5 - 2]) ? var_7 : (arr_0 [i_1])))))) ? (((((((!(arr_0 [i_3]))))) < (min(var_9, var_9))))) : (1 == -31314)));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (min(var_5, (arr_21 [i_6 - 1])));
        arr_23 [i_6] [i_6] = ((((((!-14207) ? (~var_11) : (((((arr_13 [i_6] [i_6] [i_6]) == (arr_2 [i_6 + 2])))))))) ? ((((((arr_9 [i_6] [i_6] [i_6 + 2]) ^ (arr_15 [8])))) ? (~-1220) : (arr_8 [i_6] [i_6] [i_6 - 1]))) : ((~(arr_9 [i_6 + 2] [i_6] [i_6])))));
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((max((arr_24 [i_7]), 134217664)) == (arr_14 [i_7] [i_7] [i_7]))) ? ((~(arr_25 [i_7 - 1] [i_7 + 2]))) : (((-(arr_12 [i_7] [i_7])))))))));
        var_19 *= ((1844586138525526060 ? (((arr_14 [i_7 + 1] [i_7 + 1] [i_7]) ? (arr_12 [i_7 + 2] [i_7 + 2]) : (arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2]))) : ((min(var_6, (arr_21 [i_7 - 1]))))));
        var_20 = (min(var_20, 838559932445644565));
    }
    var_21 = var_3;
    var_22 = ((var_11 ? -var_2 : (min((min(var_12, var_5)), ((min(var_4, -31314)))))));
    #pragma endscop
}
