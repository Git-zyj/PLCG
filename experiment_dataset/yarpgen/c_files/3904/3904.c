/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 10;
    var_12 = -1781634743;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_3 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_1 + 1] = arr_1 [i_0] [i_1 - 1];
                var_13 -= (max((arr_3 [i_0] [i_0]), (max((-2083857232735149921 & 8074549924882943135), ((min((arr_2 [i_0]), var_8)))))));
                arr_6 [i_0] &= var_6;
            }
        }
    }
    #pragma endscop
}
