/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (((((!var_1) ? ((12 << (241 - 234))) : (-127 - 1))) | (!-31)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, -33));
        arr_3 [i_0] = (((223 ^ 32) ? ((((arr_0 [i_0]) != 223))) : (arr_2 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = -140737488355328;
        arr_7 [i_1 - 1] |= (113 && 50);
        arr_8 [4] |= (+-5487856951424477383);
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_13 += ((var_9 > (arr_1 [i_2 - 1] [i_2 - 2])));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_18 [i_3] = -9223372036854775807;
                        arr_19 [i_3] = 6825779836286684380;
                        var_14 = max(-13, 16111050425898740969);
                    }
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
