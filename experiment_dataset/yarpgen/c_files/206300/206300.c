/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((+(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_11 *= (max((9092737457322110589 >= -6), ((var_9 ? 0 : (arr_0 [i_0] [10])))));
        arr_3 [5] = ((!((max((max(7, var_0)), 248)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_12 += var_0;
        var_13 = (max(var_13, (((max(-249, (240 * 237)))))));
        var_14 = ((((max((arr_4 [i_1]), var_6))) ? (arr_1 [0]) : (arr_4 [6])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [0] [i_4] = (max(((((max(var_8, var_0))) ? (arr_8 [i_3] [0]) : var_2)), (max(var_7, ((var_3 ? (arr_13 [7] [i_3]) : var_0))))));
                    var_15 = (arr_11 [i_2] [i_2]);
                }
            }
        }
    }
    var_16 ^= (7 ? 232 : 8);
    #pragma endscop
}
