/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((7032 <= 1) | -27002))) ? 15 : ((-521416620 ? 14677 : (max(0, 11387114935365790598))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [4] [i_0] [i_1] = ((((((((4294967295 >> (4294967295 - 4294967271))) <= (((max(-58, -11597)))))))) | (((((16 ? 0 : 32758))) ? (min(-6702, 3101757803)) : (((1 ? 56708 : 15)))))));
                arr_5 [16] [i_1] = (min((((-(max(7853, 1695093377))))), (((-1 ? -6702 : 4294967295)))));
                arr_6 [i_0] [i_1] [6] = 0;
            }
        }
    }
    var_16 = 14677;
    #pragma endscop
}
