/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_5;
    var_20 = ((5968756815402389362 ? 61 : 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((0 >> (((arr_1 [i_0 - 2]) - 99))));
        var_21 -= (-15933 ? 60 : -61);
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = 9823931253975491725;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_23 = 3941148598;
                        var_24 = var_3;
                    }
                }
            }
        }
    }
    var_25 = ((-(!15933)));
    var_26 = max(var_18, ((((-3882 - var_4) <= (var_7 <= 3209137530)))));
    #pragma endscop
}
