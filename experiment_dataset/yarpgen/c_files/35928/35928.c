/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min(var_14, -var_5)), var_8));
    var_16 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_1 [i_0 - 1]) ? (((min(0, (arr_3 [i_0]))))) : (((!(arr_3 [i_0 - 1]))))));
                arr_5 [i_1] = (arr_3 [i_0 + 1]);
                var_17 ^= (~-10833);
            }
        }
    }
    #pragma endscop
}
