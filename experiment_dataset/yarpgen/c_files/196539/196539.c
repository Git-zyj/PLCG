/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_2] [i_1 + 3] [i_0] = (((((var_10 & (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_2])))) ? (((!(arr_1 [i_0 + 3])))) : (!5184)));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, var_3));
                                var_15 = (max(var_15, (~87)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_16 ^= (((~(!var_11))));
                    var_17 = (min((!var_11), ((var_3 - ((2283176218 * (arr_3 [i_5])))))));
                    arr_20 [i_5] [11] [i_5] [i_5] = ((((((arr_8 [i_1 + 1] [i_1 + 1] [i_0 - 2]) ? (arr_8 [i_1 + 1] [i_1 + 3] [i_0 + 1]) : 2011791081))) ? (max((arr_8 [i_1 + 1] [i_1 - 1] [i_0 + 1]), (arr_8 [i_1 + 3] [i_1 - 2] [i_0 + 3]))) : (((arr_8 [i_1 - 1] [i_1 - 2] [i_0 - 2]) ? var_0 : (arr_8 [i_1 - 2] [i_1 + 2] [i_0 + 3])))));
                    arr_21 [i_5] [7] [i_0] = (((max((arr_18 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]), (arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 1]))) != (((((arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) || (arr_18 [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 - 2])))))));
                }
                var_18 &= ((((var_6 ? (arr_8 [i_0] [i_0 + 2] [i_0]) : (arr_18 [2] [i_1 + 3] [i_0 - 1] [i_0]))) / ((((arr_17 [i_0] [i_0 + 2] [i_0] [i_0 + 3]) * -var_5)))));
                var_19 = (max(var_19, 1));
            }
        }
    }
    #pragma endscop
}
