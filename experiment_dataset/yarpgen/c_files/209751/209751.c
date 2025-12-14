/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 6;
    var_12 = ((2147483647 ? var_7 : (max(2097088, var_4))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 |= min((!var_4), (arr_0 [i_0 + 1] [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [23] = (min((arr_0 [i_1] [i_1]), var_9));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (1760084173 % (arr_2 [i_1] [i_1 + 1]));
                        var_15 |= (arr_8 [i_0 + 1] [5] [i_2] [i_3]);
                    }
                }
            }
        }
        arr_9 [i_0] = var_10;
        var_16 = 575911431;
    }
    #pragma endscop
}
