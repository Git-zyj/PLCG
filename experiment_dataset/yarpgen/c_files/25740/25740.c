/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = ((+(max((-127 - 1), (arr_0 [i_0] [i_0])))));
                    arr_7 [9] [i_1] [i_1] [i_1] = var_1;
                }
            }
        }
    }
    var_11 = ((100 ? (((((max(3157446745361949680, var_1)) >= (!-13362))))) : ((-(var_4 / var_1)))));
    #pragma endscop
}
