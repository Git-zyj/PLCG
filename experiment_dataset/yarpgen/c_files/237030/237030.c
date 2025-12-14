/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = 32767;
                arr_7 [1] [1] &= var_2;
                arr_8 [i_0] [i_0] = (arr_5 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_25 [i_6] [10] [i_6] [i_6] [i_6] = (arr_9 [i_6]);
                                arr_26 [i_6] [7] = (arr_19 [i_2] [19] [i_6]);
                                arr_27 [i_2] = ((((((arr_14 [i_3]) ? (arr_18 [i_2 + 1] [i_3 - 3] [i_3 + 1] [i_5 + 1]) : 32767))) ? (~var_9) : (((1152515622 < var_10) ? (arr_9 [i_2 - 3]) : (((max(32759, var_9))))))));
                                arr_28 [i_6] [i_5 - 1] [i_5] [i_4] [i_3] [i_2] = (max((arr_22 [i_5 - 2] [i_5] [i_2 + 1] [i_5] [i_3] [i_3 - 3] [i_2 + 1]), ((((arr_17 [i_2 + 1]) >= (arr_17 [i_2 + 1]))))));
                            }
                        }
                    }
                }
                arr_29 [i_2 + 1] |= min(1, (((arr_17 [i_2 - 2]) ? (arr_17 [i_2 + 1]) : var_2)));
            }
        }
    }
    var_11 = ((-(max((!var_4), -var_2))));
    #pragma endscop
}
