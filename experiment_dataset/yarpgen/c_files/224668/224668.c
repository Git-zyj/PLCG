/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15048;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_0] [i_1] [i_2]);
                    var_18 = ((((min(0, -25655))) * var_5));
                    var_19 &= 124;
                }
            }
        }
        var_20 *= (arr_2 [i_0]);
        arr_9 [11] = (((var_5 << (((arr_4 [1] [2] [i_0]) - 497037631)))));
        arr_10 [i_0] [i_0] = ((((((min(-116, 30184))) ? 77 : 6204469333373754590)) + 50553));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_21 = 48;
        var_22 |= (arr_12 [i_3 - 1] [i_3 + 1]);
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = ((((min((arr_14 [i_4 + 1]), (arr_14 [i_4 + 1])))) ? 50553 : ((-((6204469333373754589 ? 30184 : 6204469333373754580))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    var_23 = (~1034610549);
                    var_24 = var_5;
                }
            }
        }
    }
    var_25 = ((max(var_12, (((var_0 ? var_14 : var_14))))));
    #pragma endscop
}
