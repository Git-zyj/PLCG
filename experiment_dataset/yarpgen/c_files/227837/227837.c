/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(((33794 ? 202 : var_12))))));
    var_19 = (((min(((52020 ? 54527 : 431966350)), var_3)) * -15504));
    var_20 = ((((((~4056701051) ? ((var_1 ? -17 : var_16)) : (((min(var_9, var_13))))))) ? var_12 : -var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_1] = (((((((min(51583, 664946991))) ? 19 : 2169739945))) ? (((((var_8 ? var_6 : 0))) * (((arr_7 [i_0] [i_1] [i_1] [12]) ? 0 : var_10)))) : (arr_6 [i_0 + 1] [i_0] [i_1 - 2])));
                    var_21 = (max(var_21, (((((((arr_1 [2]) ? (arr_1 [4]) : (arr_1 [2])))) ? (((4294967295 ? 1094277719 : 3))) : (((arr_4 [12] [i_1 - 1] [i_1 - 1] [12]) & (arr_1 [4]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = 4;
                                var_23 |= (min((max((arr_11 [i_4 - 2] [i_1 + 1] [i_1] [i_1]), ((~(arr_1 [i_3]))))), (arr_10 [i_0] [i_3] [i_2] [1] [i_0])));
                            }
                        }
                    }
                    arr_14 [10] &= ((28 ? 2603820103393800025 : 255));
                    arr_15 [i_0 - 1] [i_1] [i_0] [i_0] = ((((998761758708222816 ? 1559775871440313303 : 65535))) ? (max(var_9, (max(4193846961, (arr_6 [i_0] [i_1 - 1] [i_2]))))) : ((((var_13 ? (arr_3 [i_0] [i_1] [i_2]) : var_16)) ^ (arr_2 [i_1 - 2] [i_1 - 3] [i_0 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
