/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_0 && 0) ? (min(-var_3, (max(-1122081655, 1073741824)))) : (((!((min(9, 3730289672102183999))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_18 ^= (min(((2 ? -7904491614152061771 : 23)), (((!((min((arr_2 [i_1]), (arr_5 [i_0] [i_0] [i_2] [7])))))))));
                    var_19 = ((((min((((var_13 ? var_2 : var_7))), ((~(arr_0 [i_0] [i_0])))))) ? ((((max(-1783, var_6))) & (~var_3))) : ((((0 ? 70 : 0)) ^ (~-3)))));
                }
                for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] = (72057591890444288 != 3);
                    var_20 = (max((min((min((arr_5 [i_0] [i_1] [i_3] [i_3 - 2]), (arr_2 [i_0]))), (!-15539))), (((~((min(2, 244))))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_21 = ((~(((-2 != 26) ? (((arr_14 [i_0] [0] [i_0] [i_0]) ? var_2 : var_13)) : (max(var_13, (arr_5 [i_0] [i_1] [i_4] [i_4])))))));
                            var_22 = (-((((min((arr_11 [i_0] [i_0]), (arr_3 [i_0])))) ? -1783 : ((var_8 ? var_14 : (arr_11 [i_0] [10]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (!252);
                        }
                    }
                }
                var_23 = (-15514 + 0);
                arr_16 [i_1] [i_1] [8] = (110 == 18374686481819107323);
            }
        }
    }
    #pragma endscop
}
