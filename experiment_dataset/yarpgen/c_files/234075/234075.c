/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 -= (!-515667027);
                        arr_8 [i_0] [i_1] [i_1] [i_0] [1] [i_0] = ((!((max((!-24361), (((-2147483647 - 1) ? var_11 : 5517)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = ((!(var_7 / 1)));

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        var_18 = (!var_2);
                        var_19 = (20629 > 0);
                    }
                }
            }
        }
    }
    #pragma endscop
}
