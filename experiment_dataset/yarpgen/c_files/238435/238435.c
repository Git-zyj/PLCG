/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (108 ? 255 : 89);
                        arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = (8 | ((((127 >> (var_8 - 58))) - (-1 >= 10))));
                    }
                }
            }
        }
        arr_15 [i_0] [15] = -435495474;
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_15 = ((16 != 0) * (!1063925058));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_26 [i_5] [i_7] [i_6] [i_4] [i_5] = ((247 ? (((var_12 <= (5 | 13)))) : (((0 > (var_1 * 511))))));
                        var_16 = (min(var_16, (((((-435495474 ? var_6 : 0)) > ((45 ? -1 : var_9)))))));
                    }
                }
            }
        }
        var_17 -= ((!(-6 > -1023701675)));
    }
    var_18 += min(var_0, (154 & 0));
    var_19 = var_2;
    #pragma endscop
}
