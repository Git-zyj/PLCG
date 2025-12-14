/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4044476983736132326;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = -95;
        var_15 = 44;
        arr_3 [i_0] [i_0] = 16166291470967293664;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = 32767;
                    var_16 -= 127;
                }
            }
        }
    }
    #pragma endscop
}
