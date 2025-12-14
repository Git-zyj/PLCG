/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (max(18589, 266338304));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] = (((((min(var_8, (arr_11 [12] [i_3] [i_3] [i_3 + 1]))))) <= (((arr_11 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]) ? (arr_6 [i_3 + 1]) : 266338304))));
                        arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] = 4028628983;
                    }
                }
            }
        }
    }
    var_14 = (((((var_10 + ((var_11 ? -55439899 : 266338304))))) ? var_12 : -4028628984));
    #pragma endscop
}
