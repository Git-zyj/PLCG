/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [18] [i_1 - 1] = (max((arr_1 [i_1 + 1] [i_0]), ((~(arr_1 [i_0] [i_1 - 2])))));
                arr_9 [i_0] [i_1] [i_0] = min(((((arr_5 [16]) / var_0))), (((~((max(65535, 896)))))));
                var_19 = ((~((((arr_1 [i_0] [i_1]) < (3149613375010765696 * 2199023255536))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = 40825;
                                arr_19 [i_0] [i_1] [i_0] = (18981 | 4194303);
                                arr_20 [i_0] [i_1 - 1] [4] [i_3] = (105553116266496 + 0);
                                var_21 = (max((((~(((6494281153694144424 || (arr_2 [0]))))))), (((var_16 + 2270514369313507894) ? 3953969792 : var_16))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
