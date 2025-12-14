/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(var_15 && var_6)));
    var_17 = ((~(!var_6)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [15] = (-1 & 0);
        arr_4 [i_0] = 4611404543450677248;

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((arr_6 [14] [i_1 - 2]) == (((arr_0 [i_0 + 1]) / (arr_6 [i_0 - 2] [i_1 - 1])))));
            arr_8 [i_0] [14] [1] = (!22724);
            arr_9 [i_0] [i_0] |= (~-18488);
        }
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            arr_12 [18] = (arr_1 [7]);
            arr_13 [20] [11] = ((+(((!((min((arr_6 [i_2] [11]), 1))))))));
        }
        arr_14 [i_0] [6] = (min(((((((arr_6 [i_0 + 1] [i_0]) ? (arr_1 [i_0]) : 31))) ? ((var_11 ? var_13 : 480)) : (min(49079, (arr_11 [i_0]))))), (((8191 ? 1 : -1026201949)))));
    }
    var_18 = var_2;
    #pragma endscop
}
