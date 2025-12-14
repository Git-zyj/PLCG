/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((-7024971861261573898 ? (~-11265) : (!15024))), (((!(((var_3 ? 15027 : var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((arr_4 [i_0] [i_0]) ? -15024 : 15011)))));
                    var_12 |= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = 1587619917;
                                var_14 = ((((min((arr_6 [i_1 + 1] [i_1 - 3]), (arr_6 [i_1 + 2] [i_1 + 2])))) ? (((arr_6 [i_1 + 2] [i_1 - 1]) ? (arr_6 [i_1 + 2] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1]))) : ((max((arr_6 [i_1 - 2] [i_1 + 2]), (arr_6 [i_1 + 2] [i_1 - 1]))))));
                                var_15 = (max(var_15, ((~(((arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] [i_4]) ? 2707347381 : (((~(arr_3 [i_0] [i_2] [i_2]))))))))));
                                var_16 ^= (max(((3335297926 ? ((((!(arr_6 [1] [1]))))) : (~0))), (((+((-9236 ? (arr_6 [i_1] [i_1]) : 3335297940)))))));
                                var_17 = (arr_7 [i_0] [i_1] [i_2] [i_4]);
                            }
                        }
                    }
                    var_18 |= ((18446744073709551615 ? ((~(((arr_4 [i_0] [i_0]) ? -7109592780750417807 : (arr_0 [i_0]))))) : (((~((max((arr_6 [i_1] [4]), 1))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_19 -= (max((((-112 + 13331096792771908911) + (((max((arr_8 [i_5] [6] [i_6] [i_6] [i_6]), (arr_5 [i_5] [i_5] [1] [i_6]))))))), (arr_12 [i_5])));
                var_20 ^= (((-(arr_11 [i_5]))));
            }
        }
    }
    #pragma endscop
}
