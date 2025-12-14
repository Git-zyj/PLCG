/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_3] = (((((~(arr_4 [i_1])))) ? var_1 : (2063868464425028654 | 33886)));
                                arr_15 [i_3] [i_3] [i_2] [i_2] [i_2] = ((-(max((~40853), (~var_3)))));
                                var_12 = ((((max(var_5, var_0))) * (-1 * var_6)));
                                var_13 = 14183693619993387002;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = 32767;
            }
        }
    }
    var_14 = (max((var_2 << 0), (!var_3)));
    var_15 = var_10;
    var_16 = ((!(((var_7 ? (var_4 > var_5) : ((var_4 ? var_3 : var_8)))))));
    #pragma endscop
}
