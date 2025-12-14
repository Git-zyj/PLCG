/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [7] [i_2] = ((var_11 * ((((~146327429) > var_14)))));
                    var_18 = (!var_17);
                }
            }
        }
        arr_10 [i_0] = (((((min(-31348, var_12)))) ? (((-var_5 + (arr_6 [i_0] [i_0])))) : (min((arr_7 [i_0] [i_0]), (min(1, (arr_7 [i_0] [i_0])))))));
        var_19 = (max(((-3168064248270589361 | (arr_8 [i_0] [i_0] [16] [i_0]))), var_7));
        arr_11 [i_0] [i_0] = 1;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 = (max(-31348, ((var_14 ? (((var_5 ? (arr_8 [i_0] [i_3] [i_4] [i_5]) : (arr_2 [14] [i_0])))) : (((arr_17 [i_5] [i_4] [i_0]) | var_5))))));
                        arr_22 [i_0] [i_0] [i_3] [i_4] [i_5] = (((arr_13 [i_5] [i_0]) ? (((arr_13 [i_0] [i_3]) * (arr_13 [i_0] [i_3]))) : ((((arr_13 [i_0] [i_3]) || var_14)))));
                        var_21 = ((((((max(-31351, -3168064248270589361)) + -var_8))) ? (((!var_0) << ((((var_2 ? 168 : 18446744073709551604)) - 147)))) : (((var_1 || (((42 ? -3812377592446398606 : 1))))))));
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, -33));

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_23 = max((max(-var_6, ((min(var_12, var_0))))), ((((arr_25 [i_6]) < (((min(var_5, (arr_23 [i_6])))))))));
        var_24 = (min(((max((max(var_0, var_2)), 1))), (((((-146327438 ? (arr_24 [i_6] [i_6]) : var_8))) ? (max(var_7, var_4)) : (arr_24 [i_6] [i_6])))));

        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            arr_28 [i_6] [i_6] [i_6] = var_2;
            var_25 = (max(var_25, (((((146327417 || ((min(4294967295, 3168064248270589369))))) ? (max((arr_27 [20]), (min(var_2, var_8)))) : ((((((arr_24 [i_6] [i_7]) - (arr_27 [i_7]))) >= (arr_24 [i_7] [i_6])))))))));
        }
        arr_29 [i_6] = var_1;
        var_26 = (((((arr_27 [i_6]) ^ (arr_27 [i_6]))) | (arr_27 [i_6])));
    }
    var_27 = ((((((((min(1, var_6))) + 2147483647)) << (var_14 - 32517))) != var_9));
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            {
                var_28 = (max(((min((max(-43, var_8)), (arr_33 [i_8 - 3])))), (arr_32 [i_9 + 2] [i_8 - 3])));
                arr_35 [i_8 - 2] [i_9 + 1] = (min((arr_34 [i_9] [i_9 + 1] [i_9 + 2]), ((1 ? (!146327430) : var_7))));
                var_29 = ((max((arr_31 [i_8] [i_8 - 3]), (146327429 || var_8))));

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_41 [i_8] [i_11] = (max(((((!var_15) ? var_0 : var_12))), ((var_10 ? (arr_34 [16] [i_9 + 1] [i_9]) : var_8))));
                        var_30 = ((var_15 != (max((((!(arr_36 [i_9 - 1] [i_10] [i_11])))), (26 % 52)))));
                    }
                    var_31 = (max(var_31, (((((min(var_7, (arr_34 [i_8 + 1] [i_9] [i_9 - 1])))) > ((min((arr_34 [i_8 + 1] [i_9 + 1] [i_9 - 1]), (arr_34 [i_8 + 1] [i_9] [i_9 - 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
