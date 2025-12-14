/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [0] = var_18;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = 65535;
                                var_21 += ((((((((60351 ? var_1 : 18446744073709551615))) ? (((max(5193, var_13)))) : (arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 2])))) ? ((((((-41149164878421224 ? 9223372036854775794 : var_11)) < ((((arr_1 [i_2] [i_1]) ^ 1))))))) : (max(((min(511, (arr_7 [i_0] [i_0] [i_0])))), 5857416668739995329))));
                                arr_16 [13] [i_3] [i_2] [i_2] [1] [i_0] = (arr_2 [i_4]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_2] = (41149164878421207 ? 0 : 2018855460);
                    arr_18 [i_2] [i_0] = (-(min(((-(arr_11 [i_0] [i_1 + 3] [i_0] [i_2]))), -1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_25 [i_5] = ((-((((min(3762488595, -2775711528419386220))) ? (arr_3 [i_5] [i_6]) : ((((288230376151711744 > (arr_12 [i_5] [i_5] [10] [i_6] [i_6])))))))));
                arr_26 [i_5] = (min(-288230376151711735, var_13));
                var_22 ^= (((((((arr_0 [i_5] [i_6]) <= (min(6, (arr_8 [i_5]))))))) <= (max((((arr_2 [i_6]) ? 1163369825510926665 : (arr_7 [i_5] [i_6] [i_5]))), (((14236874238758853332 ? var_19 : 11068)))))));
            }
        }
    }
    #pragma endscop
}
