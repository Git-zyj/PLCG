/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-((var_8 >> (var_7 - 34)))))) ? var_6 : ((var_7 ^ (var_0 % var_6))));
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 1] = (~-14290);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_2] [i_2] [i_4] = min(var_15, (((arr_15 [12] [i_1 + 2] [i_1] [i_3]) ? (((!(arr_5 [i_1] [i_1] [i_4])))) : ((var_7 ? var_11 : -869463936)))));
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] = (((((~(arr_14 [i_0] [0] [i_0] [i_0 + 1])))) ? var_4 : (((((-1 ? var_3 : (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_1] [i_4]))) != (arr_4 [i_1] [i_1]))))));
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_1] = 18650;
                arr_21 [i_0] [i_1] = (((arr_4 [i_1] [i_1]) ? 637832304258151208 : (((-1209329457 ? 18650 : 1209329440)))));
                var_18 = -var_1;
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_1] [i_0 + 1] = ((!((min((arr_2 [i_0 + 1] [i_1 + 4]), (arr_2 [i_0 + 1] [i_1 - 1]))))));
                            arr_31 [i_0] [i_1 + 4] [i_1] [3] [i_0 + 1] [12] [3] = 46886;
                            var_19 = (max(var_19, (((((arr_7 [i_0] [i_1 + 3] [i_5] [i_1 + 2]) ? (arr_7 [i_0] [i_0] [i_6] [i_1 + 3]) : (arr_4 [i_5] [i_5])))))));
                        }
                    }
                }
            }
            var_20 = ((((min((arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 + 1] [i_1] [i_1 - 1] [i_1])))) ? ((var_3 | (arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : var_7));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_34 [i_0] = ((-var_14 ? 18669 : 18663));
            arr_35 [i_0] [3] = 7;
            arr_36 [i_0] [i_0] = ((((max(32640, (max((arr_27 [i_8]), var_0))))) ? (arr_8 [18] [i_0 + 1] [i_8] [i_0]) : (((!(arr_8 [i_0] [i_0 + 1] [i_8] [i_0]))))));
            var_21 = (max(var_21, ((-((-(arr_32 [i_0 + 1] [i_0 + 1])))))));
            var_22 = (((!(arr_6 [i_8]))));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_49 [i_0] [i_9] [i_10] [i_11] [i_12] = (arr_47 [i_12] [18] [18] [i_9] [18]);
                            arr_50 [6] [6] [i_10] [i_10] [i_10] [6] [i_9] = ((((arr_4 [i_12] [i_10 - 2]) && var_7)) || ((((arr_25 [i_0] [i_0 + 1] [i_0 + 1] [i_12]) ? (arr_32 [i_0 + 1] [i_10 - 1]) : (arr_4 [i_9] [i_10 + 1])))));
                        }
                    }
                }
            }
            var_23 = 15;
            arr_51 [i_9] [i_9] [i_0] = (~var_11);
            var_24 ^= ((!(((var_7 ? (~var_6) : var_11)))));
        }
    }
    var_25 = ((2047 % ((var_12 >> ((((var_5 ? var_5 : 65)) + 1057578555701694581))))));
    var_26 = (!var_10);
    #pragma endscop
}
