/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((~(var_6 > var_4))) / var_10));
    var_13 = (var_4 + var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 += ((((min((arr_4 [i_0 - 1]), 84))) <= ((((arr_6 [i_0 - 1] [i_0 - 1] [4]) < (arr_4 [i_0 - 1]))))));
                                arr_14 [i_0 + 1] [9] [i_0] [i_0] [i_1] = 224;
                                var_16 = (((arr_6 [i_3 + 1] [i_4 + 2] [i_1]) ? ((((((arr_1 [i_0 - 1]) ? (arr_4 [i_2]) : (arr_8 [i_0] [i_2] [7] [i_4])))) ? (arr_0 [i_2] [12]) : (32 - 224))) : (((arr_4 [i_4]) ? (27 || 6143922470687185500) : ((min((arr_5 [8]), (arr_7 [8] [4] [18] [i_3 - 1]))))))));
                                var_17 = (24 ^ var_7);
                                var_18 = (arr_2 [13]);
                            }
                        }
                    }
                }
                var_19 += ((26 + var_6) ? (max((-91 + 14), 91)) : var_6);
            }
        }
    }
    #pragma endscop
}
