/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 127;
    var_13 = -8020688265753267935;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (arr_6 [i_2] [i_2] [3]);
                    var_15 ^= ((15514950850214570094 << (2931793223494981522 - 2931793223494981516)));
                }
            }
        }
    }
    var_16 ^= 30;
    #pragma endscop
}
