/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 405211073;
    var_12 = ((405211073 << (405211073 - 405211071)));
    var_13 = min(((!(((var_4 ? var_6 : var_2))))), 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = var_1;
        arr_2 [i_0] |= (((405211086 + 405211051) != -var_9));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_1] = var_10;

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_15 *= (-405211052 < 12);
                    arr_14 [i_0] [i_1] [i_2] = (!(arr_5 [i_1] [i_1 + 4]));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = ((-var_10 ? ((var_3 ? -405211052 : (arr_8 [i_4]))) : ((6463757274420322415 ? var_0 : (arr_1 [i_1])))));
                    var_16 = (min(var_16, (var_6 % var_10)));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_1] = ((11982986799289229201 ? ((((arr_11 [1] [1] [i_2] [i_4] [i_5]) - (arr_15 [i_1] [i_2] [i_1])))) : (((arr_15 [i_1] [i_4] [i_1]) ? var_2 : 14803883356785772293))));
                        var_17 = (min(var_17, ((((((!(arr_7 [i_0] [2] [1])))) >> (arr_16 [i_0] [11] [1] [i_0] [i_0]))))));
                        arr_21 [i_1] [i_1] [i_2] = (~1);
                    }
                }
                arr_22 [i_0] [i_0] [i_0] [i_1] = var_3;
                arr_23 [i_1] [i_1] = (var_9 | (arr_18 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 4]));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_18 = (min(var_18, 1));
                var_19 = var_4;
                var_20 &= -11982986799289229187;
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_21 = (max(var_21, -6463757274420322420));
                        var_22 &= (-405211069 - 278407138478223265);
                        var_23 = (min(var_23, ((((var_2 | var_8) < (((var_7 ? 405211086 : (arr_28 [1] [1])))))))));
                        var_24 = 1;
                        var_25 = (arr_8 [i_0]);
                    }
                }
            }
            arr_31 [i_0] [i_0] [i_1] = var_6;
        }
        var_26 = var_0;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((~(max(var_4, (((!(arr_11 [0] [0] [8] [i_9] [i_9]))))))));
        arr_35 [10] |= (!-405211079);
    }
    var_27 = (max(var_27, ((((((var_7 == var_1) ? (max(11982986799289229196, 1)) : (max(6463757274420322416, var_10)))) >> (var_10 - 7452800233172210621))))));
    #pragma endscop
}
