/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(3703761801, (24609 + var_11))) << ((((var_0 ? var_12 : (((var_1 ? var_7 : var_10))))) - 1912541233))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [6] [i_0] = ((((((max(591205494, 4497342948680682155))) ? (591205494 == -916385520) : ((var_2 >> (var_0 - 18370))))) * (((1 ^ 1) ? (((arr_4 [i_1]) - 153)) : ((max(0, 1196)))))));
                arr_6 [i_0] [i_0] = ((((min((((117 ? 26197 : (arr_2 [i_1])))), (min((arr_0 [i_1]), 34))))) ? var_9 : ((((max((arr_0 [21]), (arr_2 [i_0])))) ? (64339 & 2501458782) : (1824874353 >> var_5)))));
            }
        }
    }
    var_16 = 40931;
    #pragma endscop
}
