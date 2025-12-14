/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_7;
    var_20 = (max(var_20, (((var_5 / ((((17013732773997910909 ? 4294967295 : 1433011299711640689)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = (((arr_4 [3] [i_1] [i_2]) <= (((1911271246 <= (((99655007 != (arr_0 [i_3])))))))));
                            var_22 = (((((arr_12 [i_1] [i_1] [10] [i_1] [i_1]) ? 1992016799 : 164))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_5] [3] [i_0] = ((-(arr_13 [i_5] [i_0])));
                                var_23 = ((((min(3907505406, (((arr_18 [i_5]) ? (arr_21 [i_0] [i_1]) : var_13))))) ? ((+(((arr_12 [i_0] [i_1] [i_4] [i_0] [i_4]) ? (arr_0 [i_0]) : 1433011299711640688)))) : (((max((arr_16 [i_1 + 2] [i_6 - 1]), (arr_16 [i_1 - 2] [i_6 + 1])))))));
                                var_24 = (max(var_24, (((((0 ? (arr_3 [i_0 - 1] [i_6]) : ((max(-10, (arr_2 [i_0]))))))) ? (((((1911271246 ? 1911271246 : -115))) - var_7)) : ((((((var_7 ? -125 : (arr_5 [10] [10] [i_0])))) ? (17013732773997910923 != var_17) : (arr_12 [i_0] [i_0] [i_1] [i_1 - 2] [i_6 + 1]))))))));
                                var_25 = ((17013732773997910909 >> (17013732773997910933 - 17013732773997910875)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
