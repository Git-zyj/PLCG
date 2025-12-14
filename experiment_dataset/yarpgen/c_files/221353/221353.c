/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 101;
        arr_5 [i_0] = -5839;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = ((!((((((var_1 ? -1072757447 : 0))) ? 1072757461 : 0)))));
        arr_11 [i_1] = (arr_1 [0]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] = ((var_0 ? var_12 : 25467));
                        arr_20 [i_1] [0] [i_3] [i_1] [15] = -7492;
                        arr_21 [22] [i_2] [i_3] [i_3] [i_4] [0] = (((((arr_0 [i_2 - 1] [i_3 + 1]) ? (arr_0 [i_2 - 1] [i_3 + 1]) : 224))) ? (arr_12 [19] [i_4]) : ((4294967285 ? 252 : ((164 ? 2322492598 : 120)))));
                        arr_22 [i_1] [0] [i_3] [i_3 - 3] [0] [i_1] = 1972474685;
                        arr_23 [11] [i_1] [i_1] = (max(((var_16 ? 126 : 35183298347008)), ((max(211, 92)))));
                    }
                }
            }
        }
        arr_24 [i_1] [14] = (arr_8 [i_1] [i_1]);
    }
    var_19 = var_6;
    #pragma endscop
}
