/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((6270 % 12067215775370910240), ((min((-122 <= 112), (max(var_7, var_12)))))));
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 4] [i_0] = -122;
                    var_16 = (max(-122, 43343));
                }
            }
        }
    }
    #pragma endscop
}
