/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_13 = (arr_1 [i_0] [i_0]);
    }
    var_14 -= (max((min(-6740598520637076855, 2087)), (((((12400774362779733893 ? 14902099912736232560 : 6045969710929817723))) ? (max(var_8, 4173850620181158085)) : (((5737719196404418989 ? var_12 : var_5)))))));

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_15 = ((max((arr_3 [i_1 - 1]), (arr_4 [i_1 + 1]))));
        var_16 = ((~(max(-13, (arr_4 [i_1 + 1])))));
        var_17 ^= (((((704818103 <= -1) & (max((arr_3 [i_1]), 2082))))) ? ((max((arr_4 [i_1 + 1]), (arr_3 [i_1])))) : ((min(13, (arr_4 [i_1 - 1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    var_18 = (arr_4 [i_1]);
                    var_19 ^= (min((arr_4 [i_1 + 2]), ((min((arr_8 [i_3 - 2]), (arr_8 [i_1 - 2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 = (arr_12 [i_4]);
        var_21 = ((~(arr_12 [i_4])));
        var_22 ^= (((91 + 2884986552525669561) ? 18446744073709551615 : (((4294967295 ? (arr_13 [i_4]) : 3595407388)))));
        var_23 ^= (((arr_12 [i_4]) || (arr_12 [i_4])));
        var_24 = (arr_13 [i_4]);
    }
    var_25 = var_3;
    #pragma endscop
}
