/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_3 - 2] [i_0] [i_0] [i_0] = 1;
                        var_12 |= (~1);
                    }
                    arr_12 [i_2] [i_0] [i_1] [10] |= ((3119 ? 9992354310474072905 : 8454389763235478714));
                }
            }
        }
    }
    var_13 = -32764;
    #pragma endscop
}
