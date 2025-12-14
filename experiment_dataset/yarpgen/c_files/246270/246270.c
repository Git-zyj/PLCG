/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (min(((max(((min(53548, 65532))), ((4 ? var_4 : var_7))))), (((~12951058440823825382) ^ ((min(16265, 161581204)))))));
                    var_12 = (((((~((min(4096, 255)))))) && (((3552768749875770027 ? 18446744073709551615 : 4095)))));
                }
            }
        }
    }
    var_13 = (min(((-(~var_1))), -1069143442));
    #pragma endscop
}
