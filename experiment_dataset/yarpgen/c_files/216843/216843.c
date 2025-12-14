/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min((min((arr_0 [i_0 - 1]), (arr_2 [i_0 - 1]))), 110));
        arr_5 [i_0] [i_0] |= ((-(((!(var_12 - var_18))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (((arr_0 [i_1 - 1]) / var_15));
        arr_11 [i_1] = (!var_15);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_16 [i_2] = ((((((((((arr_1 [i_2]) + 9223372036854775807)) >> (((arr_13 [7] [i_2]) - 102))))) ? 10834127768339966876 : (65535 <= 1)))) || (((var_3 ? (((arr_13 [i_2] [i_2]) ? 65531 : 1)) : 15))));
        var_19 = (min(var_19, 4224));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_29 [10] [i_4] [i_5] [i_4] = ((((arr_7 [i_3 - 1]) ? var_10 : (arr_23 [i_4] [i_4] [i_5] [i_6]))) < var_16);
                            arr_30 [0] [2] [6] = var_4;
                        }
                    }
                }
            }
            arr_31 [i_3] = (arr_27 [i_3] [i_4] [0] [i_3 - 1] [i_4]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_20 = (max(var_20, (arr_1 [i_3])));
            arr_34 [i_3] [i_8] = ((382827993 ? -250643315 : -443208771));
            var_21 = (max(var_21, ((((arr_21 [1] [11] [i_3] [i_3]) ^ ((1 ? 8589934588 : -1912271140)))))));
        }
        arr_35 [2] |= 92;
        arr_36 [i_3] [i_3 - 1] = ((var_3 ? (arr_13 [i_3] [7]) : 63));
        arr_37 [1] [i_3 - 1] &= ((((min(((var_17 ? var_2 : (arr_33 [i_3]))), var_17))) ? ((((var_6 || (63 ^ var_18))))) : ((var_7 ? ((var_5 ? (arr_33 [i_3]) : (arr_13 [i_3] [i_3]))) : (3912139299 - var_5)))));
    }
    var_22 = 4294967295;
    var_23 = var_2;
    #pragma endscop
}
