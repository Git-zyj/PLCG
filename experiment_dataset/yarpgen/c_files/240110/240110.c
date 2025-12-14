/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [18] [0] [i_1] [1] |= var_2;
                    arr_8 [i_0] [18] = (((+(((-1291460219377349172 + 9223372036854775807) << (((((arr_1 [i_2]) + 1852425323)) - 35)))))));
                }
            }
        }
    }
    #pragma endscop
}
