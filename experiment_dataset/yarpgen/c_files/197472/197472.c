/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_1 + 1] = arr_3 [i_0];
            var_14 ^= 812215646;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] = (arr_1 [i_0]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_1] [i_3] [i_4] = (min((((((116 ^ (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((min(134, (arr_5 [i_0] [i_1 + 1])))) : (((!(arr_12 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3] [13] [i_4])))))), (((((arr_2 [i_4]) ? var_7 : var_12))))));
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_3] = ((((var_5 ? ((2147483648 ? 194575700 : 3482751650)) : 3482751649))) ? (((arr_11 [i_3] [6] [i_0]) ? ((var_12 ? 0 : 3482751639)) : (arr_5 [i_1 - 3] [i_1 - 1]))) : ((((arr_0 [i_1 - 2]) ? ((max((arr_1 [i_3]), var_8))) : ((2262280336 ? (arr_6 [i_0] [i_1] [i_2]) : var_1))))));
                        }
                        arr_15 [i_0] [i_3] [i_2] [i_3] [i_1] = ((((((!var_4) ? var_8 : 0))) ? ((-(min(222, (arr_8 [i_0]))))) : 2793258168));
                    }
                }
            }
            var_15 = (!28);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = min((min((var_12 ^ 178), (arr_0 [i_0]))), ((((arr_9 [i_0] [i_0] [i_0] [i_0]) != ((var_7 ? 4294967295 : (arr_5 [i_5] [i_0])))))));
            var_16 = (arr_11 [i_0] [i_5] [i_5]);
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_22 [i_0] [i_0] [i_6] = (-(arr_16 [i_0] [i_6]));
            arr_23 [i_0] [i_0] [i_0] = (~((var_5 ? var_7 : (arr_8 [i_0]))));
            var_17 = 3271495491;
        }
        arr_24 [i_0] = var_10;
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    {
                        var_18 = (min(var_18, var_13));
                        var_19 = (max(((4294967290 ? (arr_29 [i_7 + 2] [i_9 - 2]) : (arr_25 [i_7 + 2]))), 255));
                        arr_36 [i_10] [i_8] [i_9 + 3] = 4135032399;
                        var_20 *= max((arr_30 [i_7 + 3]), 1501709122);
                    }
                }
            }
        }
        arr_37 [i_7] [i_7 + 2] = (arr_35 [i_7] [i_7] [8] [i_7 + 3] [i_7 + 3] [i_7 + 3]);
        var_21 = ((~((~(!255)))));
    }
    var_22 = var_10;
    #pragma endscop
}
