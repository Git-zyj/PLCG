/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((min(-402399148, 1))) ? var_12 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((!(arr_6 [i_1 + 1] [8] [i_3] [7])));
                                arr_12 [0] |= 4294967295;
                            }
                        }
                    }
                }
                var_21 ^= (max((min((1650420750 || 13), 17)), (arr_7 [5] [i_1] [i_0] [i_0] [i_1 + 1] [i_1 + 1])));
                var_22 ^= var_7;
            }
        }
    }
    #pragma endscop
}
