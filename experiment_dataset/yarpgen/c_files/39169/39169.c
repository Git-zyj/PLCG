/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_13 = (~-2147483630);
                        arr_10 [9] [i_1] [0] [i_1] [i_2] [i_3] = -8207595054410103020;
                    }
                }
            }
        }
        var_14 = ((((arr_7 [i_0]) ? (arr_9 [i_0] [i_0]) : 2147483647)));
    }

    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        arr_13 [i_4] &= (((max((arr_11 [i_4 + 1]), 948353987)) | (((min((arr_11 [i_4 + 1]), (arr_11 [i_4 - 2])))))));
        arr_14 [i_4] [i_4] = (((arr_12 [i_4]) ? (2013265920 - -8306658147647691084) : -2147483643));
        arr_15 [i_4] [i_4] = (max(((-((~(arr_11 [i_4]))))), ((min((arr_11 [i_4 + 1]), 248)))));
        arr_16 [i_4] |= (min((((arr_12 [i_4 - 4]) ? 9018516015674939116 : ((((arr_12 [i_4]) ? 43 : 194))))), 948353987));
        arr_17 [i_4] [i_4] = (~((max(12770, -4977))));
    }
    #pragma endscop
}
