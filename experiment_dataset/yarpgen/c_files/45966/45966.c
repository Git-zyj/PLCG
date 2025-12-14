/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = 18446744073709551615;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [3] [i_1] [i_1 + 1] [i_0] = 0;
                        arr_15 [i_0] [i_1 + 2] [i_2 + 1] [i_3] = 11268;
                        arr_16 [i_0] [8] [i_0] = 0;
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = var_7;
    #pragma endscop
}
