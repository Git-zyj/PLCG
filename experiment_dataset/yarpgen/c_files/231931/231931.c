/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] = (((arr_2 [i_0 - 1] [i_1 + 1]) ? ((~((((arr_4 [9]) == 0))))) : (min(((var_11 ? (arr_6 [i_1] [8] [i_1]) : var_16)), (127 >= 17131123417807654001)))));
                            arr_10 [i_2] [i_2] [9] [i_2] [i_2] [i_1] = (min(((max((arr_2 [10] [i_1 - 1]), (arr_2 [i_3] [i_2])))), var_0));
                        }
                    }
                }
                var_19 ^= (arr_8 [i_0] [i_1] [1]);
                var_20 = (arr_1 [i_1 + 1] [i_0 - 1]);
            }
        }
    }
    var_21 = (max((-1 || -var_7), var_9));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = (((((arr_16 [i_4] [i_4] [1]) >> ((((var_17 ? 14704655796362509312 : 0)) - 14704655796362509310))))) ? ((((!(arr_14 [i_5] [i_6]))))) : (arr_11 [i_4]));
                    arr_19 [i_4] [1] &= (arr_18 [i_6] [i_5] [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] [i_5] [i_6] [i_5] [i_4] = ((!(arr_21 [i_4] [i_8] [i_6] [i_7] [i_8] [i_8])));
                                arr_25 [i_6] = ((((((arr_17 [i_4] [i_4] [i_4] [i_4]) ? ((0 ? (arr_21 [i_8] [i_7] [i_5] [i_4] [i_5] [i_4]) : (arr_20 [i_4] [19] [i_4] [i_4]))) : (((max(var_11, 104))))))) ? 1 : (min((max(9478070947227001411, 50)), (1 << 1)))));
                                var_23 = var_8;
                                var_24 = (((arr_16 [i_4] [i_4] [i_4]) | ((((arr_21 [i_8] [i_7] [i_6] [i_6] [i_5] [5]) < (~var_16))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = var_3;
    #pragma endscop
}
