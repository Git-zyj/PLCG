/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((((arr_6 [i_0 + 1]) && (arr_6 [i_0 + 1]))) || ((min((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1]))))));
                    var_13 = (min(var_13, ((((((arr_1 [14] [i_1]) > (arr_0 [2]))))))));
                }
            }
        }
    }
    var_14 = (~var_5);
    var_15 = 2596088761;
    var_16 = -1947400660;
    #pragma endscop
}
