/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4025;
    var_17 ^= ((((min(var_6, var_5))) > ((min((var_10 > var_2), (var_9 > var_3))))));
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 += ((((7115158201910132104 > (arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2])))));
                    var_20 = var_14;
                }
            }
        }
    }
    var_21 = (max(var_21, var_10));
    #pragma endscop
}
