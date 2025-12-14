/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 = (~1);
        arr_2 [i_0] [i_0] = (-2069421281 - -2069421281);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_11 = ((~(arr_9 [i_1] [i_3 - 1])));
                    arr_12 [i_1] = -2069421280;
                }
            }
        }
        arr_13 [i_1] [i_1] = (arr_7 [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_12 = (min(var_12, ((min((~2069421266), (((((1160387070 >> (((arr_9 [i_4] [i_4]) + 24002)))) == ((42400 ? -2069421275 : -22431))))))))));
        arr_17 [i_4] = -2069421259;
        var_13 = -var_8;
    }
    var_14 = (max(((!((max(var_5, var_3))))), ((!(!var_6)))));
    #pragma endscop
}
