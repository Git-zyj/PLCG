/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_11 -= 3534854694965792126;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_10 [i_0] [i_2] [i_2] [8] [i_0] = 32767;
                            var_12 = (min(var_12, -32768));
                            var_13 = (max(var_13, 0));
                            var_14 = (max(var_14, 1));
                        }
                        arr_11 [i_1] [i_2] [i_1] [9] [12] [i_1] = 1;
                    }
                    arr_12 [i_2] [i_2] = 1;
                }
            }
        }
    }
    var_15 = 1;
    var_16 = (min(var_16, var_3));
    var_17 = 0;
    #pragma endscop
}
