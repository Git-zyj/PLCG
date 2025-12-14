/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_1] = 8384512;
                    arr_12 [i_1] = (((arr_9 [i_2] [i_2] [i_1 - 1] [i_1]) >= 1729573202));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_12 = var_0;
                    arr_23 [i_3] [i_3] [i_3] = -1583424748;

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_26 [i_4] = ((var_2 ? ((var_0 ? 2147483647 : 277588426381315287)) : ((max((arr_13 [i_6 + 1] [i_3 - 1]), 6016672)))));
                        arr_27 [i_5] = ((min(var_1, (-2022302304 + 67108864))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
