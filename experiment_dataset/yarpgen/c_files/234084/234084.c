/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (-17094 % -1108038178);
                    var_17 = (((min((arr_2 [i_0] [i_0]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) | 1));
                    var_18 += ((max(-1108038164, (var_7 && var_6))));
                    var_19 = (min(var_19, 1841348034172947712));
                }
            }
        }
    }
    var_20 = -var_16;
    #pragma endscop
}
