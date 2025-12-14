/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((46 ? ((44 >> (2003559879 - 2003559863))) : 3))) != ((var_7 ? var_14 : (max(var_6, 1257669333))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (-(var_14 % -1624917527033460695));
                var_20 = arr_0 [i_0] [i_1];
                var_21 ^= (((arr_2 [i_1]) ? (5212648604077135679 + -1624917527033460695) : (((155 ^ (arr_2 [i_0]))))));
                var_22 += (arr_2 [i_0]);
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
