/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (~(arr_0 [i_0] [i_0]));
                                var_19 &= ((68719476732 || (!8232716861050629642)));
                            }
                        }
                    }
                    arr_12 [10] [i_0] [10] [i_1] = (min((~254), ((-(!var_8)))));
                    arr_13 [i_2] [i_1] [7] = var_13;
                    var_20 = (arr_11 [1] [i_2] [1] [i_2] [i_2]);
                }
            }
        }
    }
    var_21 = (((!47) > (max((~-57), -48))));
    #pragma endscop
}
