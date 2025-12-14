/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 0));
                    var_14 = ((((2482054772610533894 >= (~-127))) ? (!111) : (arr_6 [i_0] [i_1])));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (((((max(var_4, var_10))) ? (~var_10) : var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((~var_8) == var_7));
                                var_16 = (min(var_16, (((~((-(arr_10 [14] [i_4 + 1] [i_4 + 1] [i_4 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_18 [i_5] [4] &= (((arr_17 [0] [i_6]) ? (((!(arr_0 [i_6] [i_6])))) : (((((!(arr_10 [2] [2] [i_6] [2]))) || ((max(var_6, (arr_5 [i_5])))))))));
                var_17 ^= (((((((((1 ? 79 : (arr_1 [i_5])))) ? (arr_12 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6]) : 2482054772610533894)) + 9223372036854775807)) << ((((((18446744073709551615 ? (arr_5 [i_5]) : (arr_5 [i_5]))))) - 230))));
                var_18 = ((max(-2482054772610533877, ((4200778829 ? var_3 : (arr_17 [i_6] [i_6]))))));
                var_19 &= ((+(max((arr_3 [i_6]), (arr_16 [i_5] [4] [i_5])))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
