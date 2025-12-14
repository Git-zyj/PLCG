/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_10 << (((3282990308380659069 / var_9) - 58282417731167)))));
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (var_2 ? -1045261619 : var_5);
                    arr_8 [i_0] [i_1] [i_2] = (((arr_1 [i_1]) * (min(var_1, 3879839682972689154))));
                    var_16 = ((!((((max((arr_3 [i_1] [11] [i_1]), 3282990308380659078))) && 43))));
                }
            }
        }
    }
    var_17 = -35;
    var_18 &= ((-((var_5 / (min(var_2, var_6))))));
    #pragma endscop
}
