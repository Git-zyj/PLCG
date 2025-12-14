/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(var_9, (min(var_7, -var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((!((((arr_3 [i_0] [i_2 - 3]) + (arr_2 [i_0] [i_1 + 3] [i_2])))))))));
                            var_18 = ((((((!var_4) / (((arr_0 [i_2 - 2]) ? 3789006964441321498 : 1729382256910270464))))) ? ((~(((arr_0 [i_0]) ? var_4 : (arr_4 [i_3]))))) : (((+((785759004 ? (-9223372036854775807 - 1) : (arr_6 [i_3 - 1] [i_0] [i_0] [i_0]))))))));
                            var_19 = (min(var_19, ((((min((arr_3 [i_0 + 1] [i_1 - 2]), var_12)) == 1729382256910270464)))));
                        }
                    }
                }
                var_20 = (min(var_20, var_13));
                arr_10 [i_0] &= ((((((min(var_4, (arr_3 [i_0] [i_1]))) >> (var_8 - 530004955)))) ? 9223372036854775807 : ((-var_5 ? (((1729382256910270464 ? var_14 : var_10))) : 8705066096640008144))));
                var_21 = (arr_4 [i_1]);
                arr_11 [i_0] [i_1] = ((!(((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_1)) == (((((arr_3 [i_0] [i_1]) > 16))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 = ((((arr_12 [i_4 - 1]) ? 785759013 : (arr_12 [i_4 - 1]))));
                    var_23 = (((arr_14 [i_4] [i_6]) ? ((((((arr_16 [i_4]) * (arr_17 [i_4] [i_4] [i_6] [i_5])))) ? -var_1 : var_13)) : (((!((((arr_12 [i_6]) ? (arr_18 [i_5]) : var_14))))))));
                    var_24 = ((((((arr_18 [i_4 - 1]) ? (arr_18 [i_6]) : (arr_18 [i_5])))) ? var_1 : ((var_8 ? (arr_15 [i_4 - 1] [i_4 - 1]) : (arr_12 [i_4 - 1])))));
                }
            }
        }
    }
    var_25 = var_6;
    var_26 = ((((min(var_11, ((var_15 ? var_9 : 1928594657))))) ? ((((!var_10) >> (!var_6)))) : (min((var_0 >> 1), (max(var_14, var_12))))));
    #pragma endscop
}
