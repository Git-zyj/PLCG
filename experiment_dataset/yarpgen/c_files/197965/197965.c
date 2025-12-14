/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((!(arr_0 [i_1 - 1]))) ? ((var_10 ? (arr_0 [i_1 - 1]) : 1976867342)) : ((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1])))))))));
                    var_19 = (min((!var_1), (((((min(-64, -51)))) + (min(var_8, (arr_2 [i_0] [i_0] [i_0])))))));
                    var_20 = (min(var_20, ((((((((arr_1 [i_0] [i_0]) | var_5)) <= (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))) ? (((var_0 - var_11) - var_2)) : (arr_4 [i_0] [i_1 - 1] [i_2] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 = ((((((1 > (arr_16 [i_3 + 2]))) ? (((!(arr_19 [i_7] [i_7] [i_6] [i_6] [i_5] [i_4] [i_3])))) : 33)) < (max(((max(var_11, 15))), (((arr_14 [i_4 + 3] [i_4 + 2] [i_6]) ? var_5 : (arr_13 [i_6] [i_5])))))));
                                var_22 = (min(var_22, (((!((((arr_11 [i_3] [i_7]) ? (arr_8 [i_5 - 1]) : (arr_11 [i_3 + 1] [i_3 - 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_23 = ((var_2 ? (arr_21 [i_4 + 2]) : ((-var_3 & ((min(var_16, var_4)))))));
                                var_24 = (max(var_24, (((+(min((((arr_13 [i_5] [i_9]) ? 40 : (arr_17 [i_3] [i_3] [i_5 + 1] [i_8 + 1] [i_5] [i_8]))), (arr_10 [i_3 + 2]))))))));
                            }
                        }
                    }
                    var_25 = (((7203 ? 65535 : ((448 - (arr_22 [i_3 - 1] [i_3 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
