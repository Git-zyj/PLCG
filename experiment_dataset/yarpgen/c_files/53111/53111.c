/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 -= (max(var_18, -18446744073709551615));
        arr_4 [i_0] &= min((arr_3 [i_0]), (arr_2 [i_0 + 1] [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((18446744073709551596 - (arr_2 [i_1] [i_1])));
                    var_21 = ((((((max((arr_7 [i_2]), (arr_3 [i_0 + 1])))) % ((18446744073709551611 ? (arr_7 [i_2]) : var_9)))) % (((arr_1 [i_0]) ? (arr_6 [i_0]) : ((255 ? (arr_7 [i_2]) : 8944))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = var_8;
        arr_13 [i_3] = (arr_5 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_22 = (var_2 ^ 15);
        arr_16 [i_4 + 1] = (((arr_7 [6]) ? 8922 : var_11));
    }
    var_23 += ((((((min(var_6, 1414283157))) || (((3106790358 ? var_0 : var_9))))) ? (((((max(var_1, var_8))) || (((5 ? 1 : 1)))))) : ((max(-39, var_9)))));
    var_24 -= var_9;
    var_25 = var_16;
    var_26 = ((((~15) ? (236 ^ var_13) : ((var_10 ? 0 : 29)))));
    #pragma endscop
}
