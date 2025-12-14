/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= var_6;
                arr_4 [i_1] = ((var_0 + 2147483647) >> (min(121, 2)));
                var_11 *= 655840649342962187;
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_12 &= 850451886;
                        var_13 = ((1 < ((max(1, (11189923941370176993 && var_4))))));
                    }
                }
            }
        }
        var_14 = -var_5;
    }
    #pragma endscop
}
