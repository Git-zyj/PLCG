/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = 4263832524845696681;
                arr_7 [i_0] [i_0] = (max((min(var_1, 28)), var_2));
            }
        }
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2 - 2] [2] = (min(var_8, (-9129068431876052893 == var_2)));
        var_10 = ((-(min(281406257233920, -34))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = ((+((((arr_0 [i_3]) <= -32766)))));
        arr_14 [i_3] [i_3] = (arr_3 [i_3]);
        var_11 = -9129068431876052893;
    }
    #pragma endscop
}
