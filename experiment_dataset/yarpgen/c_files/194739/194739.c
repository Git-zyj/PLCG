/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_6, var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min((max(var_0, 4611685880988434432)), ((min(var_2, var_5)))));
                arr_8 [i_0] = (min((min((arr_5 [i_0 + 2]), (arr_4 [i_0] [i_0 - 1]))), ((max(var_9, (arr_2 [i_0] [i_0]))))));
                var_15 ^= max(4611685880988434432, -6533);
            }
        }
    }
    #pragma endscop
}
