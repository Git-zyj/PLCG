/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = (max(-6937749811106183135, (arr_5 [i_0] [i_1])));
                    var_12 = (max(var_12, ((max((max(6937749811106183135, 0)), (arr_4 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
