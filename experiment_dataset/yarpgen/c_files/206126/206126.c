/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 5807571334302446719;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 += (~(11893782925427660896 - 6552961148281890693));
                    arr_8 [i_1] = ((250 != ((2099699571 ? (arr_7 [i_2] [i_1 - 4] [i_0]) : 13))));
                    var_12 = (max(var_12, (((17 ? (62906 / 2099699571) : (max(0, -682501415)))))));
                    var_13 = (max(var_13, ((var_7 ? (7 / 39) : (arr_5 [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
