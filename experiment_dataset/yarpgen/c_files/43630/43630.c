/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] &= (arr_2 [i_0] [i_0]);
        arr_5 [2] [i_0] = ((var_8 * (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((((((arr_7 [i_1] [i_1]) >> (((arr_7 [i_1] [i_1]) - 4786056579960121394))))) ? (((arr_7 [i_1] [i_1]) >> (var_11 - 36440))) : -var_9));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_17 [i_1] = var_7;
                        var_15 += 1;
                        var_16 = -1008543078;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((((((arr_19 [1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2]) ? var_8 : 26))) ? ((max(26, 12))) : (((((~65524) + 2147483647)) >> (((max(var_6, var_11)) - 36417))))));
                        var_18 = ((((min(8838, ((65523 ? 139 : 65523))))) ? ((((var_12 + 2147483647) >> (((arr_13 [i_2 - 2] [i_1]) - 42948))))) : ((var_5 ? (((max(11534, 11534)))) : (((arr_14 [1] [1] [i_3]) ? 288230375883276288 : var_7))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_11, (!var_1)));
                        arr_24 [i_1] = 1180178650;
                    }
                    var_20 = (min(var_20, ((((var_11 ? (((arr_11 [i_1] [17] [13] [1]) ? 0 : var_9)) : -var_7))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_21 = 139;
        var_22 = ((((max((arr_25 [i_7]), 56293))) >> ((((~(arr_25 [i_7]))) + 19))));
        var_23 += (arr_27 [i_7]);
        var_24 = (arr_25 [i_7]);

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_25 = ((-((-(arr_29 [i_8])))));
            var_26 = ((var_4 ? (((arr_25 [i_8]) ? (arr_25 [i_7]) : var_0)) : -var_11));
            var_27 = ((~((-((var_10 ? var_8 : var_2))))));
        }
        for (int i_9 = 4; i_9 < 22;i_9 += 1)
        {
            arr_33 [i_7] = 151;
            var_28 = (min(((max(var_1, 35452))), var_1));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_29 = (max(var_29, var_1));
            var_30 = (~((-(arr_34 [i_7]))));
        }
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_31 += min(((var_3 ? (22 | var_0) : (arr_40 [i_11] [i_11]))), (arr_32 [i_11]));
        var_32 += (max(((max((1 >> 1), (41449 <= 9223372028264841216)))), ((-8 ? -107 : (max(-288230375883276288, 97))))));
        var_33 = (((arr_30 [i_11] [i_11] [i_11]) ? (max(-5213288020267525056, 12341)) : (((((var_4 ? var_7 : var_11)) >> ((((1049557988 >> (((arr_26 [i_11] [15]) - 34941591)))) - 512463)))))));
        var_34 = (min(var_34, ((max((~var_3), (((var_0 + 2147483647) >> (34825 - 34794))))))));
    }
    var_35 = var_3;
    var_36 = (min(var_36, (((((((((1 ? var_10 : var_11))) ? 1312091672 : (min(var_12, var_8))))) ? var_2 : (((!(((var_2 >> (3751779137 - 3751779115))))))))))));
    #pragma endscop
}
