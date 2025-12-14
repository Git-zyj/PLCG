/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [1] |= (((((((((arr_2 [7]) < var_8)) && ((((arr_3 [i_0]) ^ 28))))))) + (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((max(var_15, (arr_5 [i_0]))) - (arr_3 [i_1]))));
                    arr_9 [i_0] [i_0] [i_2] &= (((((-(arr_6 [0] [i_1 + 1] [i_2])))) ? (max((((var_3 ? (arr_6 [4] [i_1] [i_1]) : (arr_0 [6])))), (min(227, (arr_8 [i_0] [i_1] [i_0]))))) : (((((arr_8 [1] [1] [1]) ? -53 : 0))))));
                    var_21 = (min(((((var_5 <= (arr_1 [i_0] [5]))))), var_3));
                    var_22 *= ((((min((arr_1 [i_0] [i_2]), (((var_10 || (arr_0 [i_1]))))))) ? (min(-6184202527102014320, 4294967295)) : var_0));
                    var_23 = (0 ? ((((!(((var_5 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [0])))))))) : (max(1673308942, (arr_8 [i_2] [i_0] [i_0]))));
                }
            }
        }
        arr_10 [i_0] = ((~((((arr_0 [i_0]) > 37)))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3] = (max(((((((-(arr_11 [10])))) && (arr_11 [i_3])))), ((-970869059 ^ (~28)))));
        arr_14 [1] = arr_11 [11];
        var_24 *= (arr_12 [i_3 + 2]);
        arr_15 [i_3] [i_3] = ((!((min((var_17 <= var_15), (min(1894865195, var_4)))))));
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    {
                        var_25 = (min(2621658354, (((arr_20 [i_4 - 1]) ? (arr_20 [i_4]) : (arr_20 [i_4])))));
                        arr_26 [i_4] [1] [13] [i_7] [i_4] [23] = 201;
                        arr_27 [i_4] [i_5] [i_4] [i_4] = ((!((((arr_19 [i_4] [i_5 + 2]) << (var_5 - 1421431738))))));
                    }
                }
            }
        }
        arr_28 [1] &= -564038430;
    }
    var_26 = (max(var_4, var_3));
    #pragma endscop
}
