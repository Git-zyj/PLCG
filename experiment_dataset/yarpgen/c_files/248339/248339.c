/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = var_1;
        var_18 = 2064363454870154460;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_3 [i_1] [i_1]) ? (arr_4 [i_1]) : ((39 ? var_1 : (45 == 36)))));
        arr_7 [6] = (max(((((arr_1 [i_1]) ^ ((var_9 >> (((arr_3 [i_1] [i_1]) - 19550))))))), (((arr_1 [i_1]) ? 34 : var_14))));
        arr_8 [i_1] = (arr_3 [i_1] [i_1]);
    }
    var_19 = min(var_15, var_14);
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_17 [i_2] [i_2] [i_2] = ((~(((arr_16 [i_2 - 1] [i_2 - 1]) ? (arr_16 [i_2] [i_2]) : 48))));
                var_20 = (arr_10 [i_2]);
                var_21 = 16481663777344687006;
                arr_18 [i_2] = (((3236178470 ? 111 : 18685)));
            }
        }
    }
    #pragma endscop
}
