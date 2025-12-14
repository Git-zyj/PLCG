/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((((((((var_3 ? var_6 : var_10))) / ((0 ? 2930034015 : -1024))))) ? ((((var_3 >= (var_5 >= var_6))))) : ((var_1 ? 2561790580 : -469066121))));
                    var_14 += (1024 ? 65 : (((!-1024) ? var_1 : 16743909406443951121)));
                }
            }
        }
        arr_7 [7] = var_2;
        var_15 &= (min(var_3, ((min(0, 73)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_16 = ((~(~15811640405690276826)));
        var_17 &= (-66 / 1);
        var_18 = var_2;
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_19 &= -18446744073709551606;
                var_20 = (30217 ? 1 : 16380);
            }
        }
    }
    #pragma endscop
}
