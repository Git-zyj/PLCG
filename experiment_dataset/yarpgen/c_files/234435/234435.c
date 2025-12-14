/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((((((126 ? 2159383105 : -2038182132))) ? 85 : var_13))) ? ((((15754727252241766292 ? -10577 : var_1)) & var_10)) : ((var_10 ? 1405291828 : -9701))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] [i_2] [i_1] = ((max((arr_6 [i_0] [i_3 - 1]), var_18)));
                                var_20 = ((((63 ? (arr_8 [i_0] [i_1] [i_4] [i_2]) : (arr_8 [i_0] [i_1 + 3] [i_2] [i_3 + 1])))) ? ((((arr_8 [i_4] [i_2] [i_1] [i_0]) || (arr_8 [i_4] [i_3] [i_2] [i_0])))) : (((arr_8 [i_0] [i_1] [i_2] [i_3]) ? var_4 : (arr_8 [i_1 + 2] [i_2] [i_3 - 1] [i_4]))));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = (-1405291829 / -10577);
                                arr_17 [i_0] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = (!2147483647);
                                var_21 = (arr_0 [i_1]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_0] = 5709678299842758744;

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] = ((((((arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]) | (arr_8 [i_0] [i_1] [i_1 - 3] [i_5])))) ? (max((arr_8 [i_1] [i_1] [i_1 + 3] [i_5]), var_16)) : var_13));
                        arr_23 [i_5] [i_0] [i_2] [i_0] [i_0] = ((((max(-9294862148349377683, ((((arr_2 [i_0] [i_5]) > (arr_19 [i_0] [i_1] [i_2] [i_5] [i_0]))))))) ? (min((((var_1 ? var_14 : (arr_14 [i_0] [i_1] [i_2] [i_5] [i_2])))), var_9)) : ((max(((var_9 ? (arr_0 [i_2]) : var_13)), (((arr_11 [i_0] [i_0] [i_2] [i_5]) ? var_18 : (arr_4 [i_0] [i_0] [i_5]))))))));
                        arr_24 [i_0] [i_1] [i_0] [i_5] = (((+(((((arr_14 [i_0] [i_1] [i_1] [i_2] [i_5]) + 2147483647)) << (((((arr_5 [i_0] [i_1]) + 101)) - 23)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_28 [i_6] [i_6] [i_2] [i_2] [i_0] [i_0] |= (((arr_27 [i_2] [i_0] [i_0] [i_1 - 1]) % (arr_27 [i_2] [i_1] [i_1] [i_1 - 2])));
                        arr_29 [i_0] [i_1] [i_1] = (((((arr_12 [i_6] [i_0] [i_2] [i_6]) || -761807394)) ? (arr_1 [i_1] [i_1 - 3]) : ((var_13 ? var_14 : 2929))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
