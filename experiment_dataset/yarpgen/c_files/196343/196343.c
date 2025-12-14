/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 2] = ((((((arr_4 [i_2 - 1]) - (arr_4 [i_2 - 1])))) ? (arr_4 [i_2 - 1]) : (!5054)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_14 [i_0 - 1] [5] [i_0 + 1] [i_0] [i_0 + 1]) ? 1009894522 : (max(-7624095878582058596, 29398)))) >> (((!((min((arr_1 [i_0]), (arr_5 [i_4 + 1] [3] [i_4] [i_4 - 1]))))))));
                                var_18 = arr_4 [i_1];
                                var_19 = ((!(~29398)));
                                arr_15 [i_0] [i_3] [i_2 + 2] [4] [i_0] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_12 >= (((7482923567230383095 ? 1 : var_8))))) ? var_11 : var_2);
    #pragma endscop
}
