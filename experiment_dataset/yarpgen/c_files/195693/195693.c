/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = var_9;
        var_11 = (((var_0 & (arr_0 [i_0]))));
        var_12 = var_5;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = 0;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_3] = (((102 * 102) <= var_7));
                    var_14 ^= (!(arr_5 [i_1] [i_2] [i_2]));
                }
            }
        }
        arr_10 [i_1] [i_1 + 4] = (arr_2 [i_1 + 1]);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_15 = (((-(arr_1 [i_4]))));
        var_16 = (78 != (!192));
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_17 = var_1;
        var_18 = (arr_2 [i_5]);
    }
    var_19 += ((((-(~var_6))) * (~var_7)));
    var_20 = 108;
    #pragma endscop
}
