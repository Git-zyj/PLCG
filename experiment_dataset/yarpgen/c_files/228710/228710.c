/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 |= var_9;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1] = var_10;

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_13 = (min(var_13, -75));
                            var_14 = 73;
                        }
                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            var_15 = ((73 == 264241152) != 183);
                            var_16 = var_4;
                            var_17 = (min(var_17, ((-28460 ? var_10 : 1))));
                        }
                    }
                }
            }
        }
        var_18 = (min(var_18, (var_5 && var_7)));
    }
    #pragma endscop
}
