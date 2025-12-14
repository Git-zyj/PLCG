/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_3, (max(2814369528, var_4))))) ? ((max(var_11, ((min(var_7, 76)))))) : ((15780088383949849706 ? (((0 ? 1 : var_7))) : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(0, ((~(arr_5 [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 += 4294967295;
                                var_16 *= (arr_5 [i_0] [1]);
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = (max((((min(0, -15)))), 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 *= (var_9 | 17091);
    var_18 += ((max(var_3, var_5)));
    #pragma endscop
}
