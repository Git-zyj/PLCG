/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = 1;
                var_13 = (max(((((1 ? 1 : (arr_2 [i_0 - 4] [i_1] [i_0 - 4]))) >= (var_12 == var_10))), (3893 || var_10)));
            }
        }
    }
    var_14 = -var_6;
    #pragma endscop
}
