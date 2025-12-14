/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] &= (((arr_2 [i_0]) & ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_1] [11] [i_2] [i_3] = ((-2192 ? -911 : 911));
                    var_16 = ((!((var_4 && ((min(var_4, -933)))))));
                }
            }
        }
        var_17 = var_8;
    }
    var_18 = (((var_5 >> (135 - 90))));
    #pragma endscop
}
