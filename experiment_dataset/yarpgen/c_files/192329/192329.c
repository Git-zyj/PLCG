/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 -= (((199 ? 193 : var_11)) >= (arr_0 [i_0]));
        var_14 = ((~((6551424534957078341 ? 0 : 17753))));
        var_15 = (min(var_15, var_8));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? 4 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 += (max((((arr_0 [i_1]) - (arr_0 [i_1]))), -var_11));
        var_17 = (max(var_17, var_1));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((arr_14 [1] [i_3 + 3] [i_4] [1]) >> var_1)))));
                            var_19 *= ((-(arr_14 [i_5] [i_5] [i_5] [i_5 + 1])));
                        }
                    }
                }
            }
            arr_16 [i_2] [i_1] = var_4;
        }
    }
    var_20 = var_4;
    var_21 = (max(((306428656 ? 11895319538752473273 : 32638)), ((((1 ? var_6 : var_10))))));
    #pragma endscop
}
