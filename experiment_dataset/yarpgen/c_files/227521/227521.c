/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_7;
    var_16 = 9;
    var_17 = (!var_3);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] = (!var_2);
                        var_18 = (max(var_18, (((-43491 % (arr_9 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_3]))))));
                        var_19 ^= var_10;
                        arr_13 [i_0 + 1] = (~var_13);
                    }
                }
            }
        }
        var_20 = (((arr_2 [i_0 - 2] [i_0 - 1]) << (((arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]) - 274565141))));
        arr_14 [i_0] = (((arr_11 [i_0]) ^ (arr_6 [2] [i_0 + 1] [i_0])));
        arr_15 [i_0] [i_0 + 1] = ((-((-1393591422 ? (arr_1 [i_0]) : 9))));
        var_21 -= (255 ^ -1);
    }
    #pragma endscop
}
