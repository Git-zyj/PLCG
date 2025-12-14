/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (((arr_1 [15]) ? (max((arr_2 [i_0] [i_0]), ((1001874786 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : (min((1 < -11585), (var_10 % 147)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = -147;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_16 -= 67108863;
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = (arr_9 [i_0]);
                        }
                    }
                }
                var_17 = (((var_6 ^ 3144903613) ? ((18132948883548880015 >> (var_4 - 23082))) : ((((var_9 + 2147483647) >> (51 - 34))))));
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((((arr_5 [i_0]) + (arr_10 [i_5] [10]))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = (((!1) ? ((-16957 ? (~39799) : (((arr_16 [i_0] [i_5] [i_0]) >> (2379516312 - 2379516294))))) : 208));
                        var_19 = ((!(!39799)));
                        arr_24 [i_0] [i_0] [i_5] [i_0] [i_7] = 3144903613;
                        var_20 = (((((((arr_22 [i_0] [i_5] [8] [i_7]) != 6391598135383088104)))) != 2097151));
                    }
                }
            }
            var_21 = (arr_11 [i_0] [i_5] [i_0] [i_5]);
            var_22 = (min(var_22, 12055145938326463528));
        }

        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_23 = ((205 | (arr_21 [i_8 - 1])));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_34 [i_0] [i_8 - 1] [1] [9] = 0;
                        var_24 -= ((((55 ? (151 < -20473) : var_5))) > ((((((arr_28 [i_10]) * 104))) * (((arr_11 [i_10] [14] [14] [i_0]) ? 6391598135383088088 : -1015260910)))));
                    }
                }
            }
            var_25 += ((-((~(-2800 + var_0)))));
            var_26 = ((~((((((!(arr_14 [i_0] [i_0] [i_0] [i_8] [i_8]))))) * (((arr_25 [i_0] [11]) ? (arr_12 [i_0] [1]) : 6391598135383088088))))));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_37 [i_0] [i_11] [i_0] = (~var_1);
            arr_38 [i_0] = (+((((arr_28 [i_0]) == (((((arr_7 [i_11] [i_0] [i_11] [i_11]) < var_5))))))));
            var_27 = (max(var_27, 105));
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_41 [i_12] [i_12] |= (((var_9 > var_1) - (((arr_0 [i_12] [i_12]) - var_4))));
        var_28 -= var_6;
        arr_42 [4] [i_12] = (min((((((37 ? (arr_20 [2] [16]) : var_13))) ? -108 : var_5)), ((min((253 != -879618841), 97)))));
    }
    var_29 -= (var_5 == var_6);
    #pragma endscop
}
