/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = ((((((max((arr_4 [21]), (arr_4 [i_1])))) - (arr_1 [i_0 + 1]))) != (arr_3 [i_0 + 1] [i_1])));
                arr_5 [17] [i_0] [i_0] = ((19864 ? (max((max(15, (arr_1 [i_0]))), ((max(0, 4222124650659840))))) : 73));
                var_17 = var_0;
                var_18 = (-((31 << (983398471 - 983398464))));
            }
        }
    }
    var_19 = ((52532 + ((-(var_8 - var_11)))));
    #pragma endscop
}
