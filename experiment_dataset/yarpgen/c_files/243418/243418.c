/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_13, (!26223)));
    var_20 = (((-9223372036854775807 - 1) ? ((~(-5164923453238509155 || -3))) : ((-(!-3580727515067219332)))));
    var_21 = (min(var_5, var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [10] [9] = ((!(((((((min((arr_2 [i_0] [13]), var_11))) + 2147483647)) << (241 - 241))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [i_3] [i_0] = 16688960325810488457;
                                arr_18 [13] [i_1] [i_2] [i_1] [i_4] = ((!(((13588394498716779351 ? 5167 : (-1 || 245))))));
                                var_22 = ((((~(arr_12 [i_0] [i_1] [i_2] [i_3] [i_0]))) < (max((!-8694370078758271067), (arr_8 [i_0] [11] [11])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 = ((-110 ? var_12 : (min(((1 << (((arr_14 [i_1] [i_1] [15] [i_7] [i_7] [i_1]) - 8399710882589783946)))), (arr_1 [i_7] [i_1])))));
                                arr_26 [i_1] [i_5] [i_1] [i_1] [i_1] = (((((!(!var_7)))) / (arr_21 [i_0] [i_5] [i_6] [11])));
                            }
                        }
                    }
                }
                var_24 -= (arr_20 [i_1]);
                arr_27 [i_0] = (((~(arr_20 [i_0]))) | ((((1228259604 ? 0 : (arr_6 [i_0]))))));
            }
        }
    }
    var_25 = (max(var_25, (~1)));
    #pragma endscop
}
