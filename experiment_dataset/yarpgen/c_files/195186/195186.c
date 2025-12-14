/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_14, (2501382527 * 2501382526));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = 3236087393;
                var_16 = ((var_11 <= (min(((1058879891 ? (arr_2 [i_1] [i_0]) : 8)), ((1058879903 ? 488958530 : 2501382545))))));
                var_17 = 891360689;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_18 += (!4084816587);
                                var_19 |= (-(max((arr_2 [i_1 - 4] [i_3 + 2]), (arr_2 [i_1 - 1] [i_3 - 2]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_20 -= (((2446424189 / var_4) && ((((arr_10 [i_0] [i_0] [12] [i_0] [i_0] [5]) ? (arr_10 [i_5] [i_3] [i_3] [i_2] [i_1] [12]) : var_13)))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((1793584768 ? 4194303 : 1951672969))) ? ((4084816589 ? 3946791301 : 2501382527)) : 1142372962);
                            }
                            for (int i_6 = 1; i_6 < 24;i_6 += 1)
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(-1694349623, ((((min(var_10, (arr_4 [i_3] [i_2]))) <= (((((arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6]) < (arr_6 [i_6] [i_6] [i_2] [i_3])))))))));
                                var_21 = arr_20 [i_0] [i_0] [i_6 - 1] [i_3] [i_0];
                                var_22 = 528482304;
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_3] [i_7] = min(668676979, 56754334);
                                var_23 = 348175994;
                            }
                            var_24 = (max(var_24, (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_3]), 1058879905))));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_8;
    var_26 = (1058879905 || 1793584770);
    #pragma endscop
}
