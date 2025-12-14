/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = var_10;
                    var_19 = ((1206380434 + (var_15 + var_9)));
                    var_20 ^= ((((((arr_6 [i_0 + 1]) && (arr_6 [i_0 + 2])))) % -var_13));
                }
            }
        }
    }
    var_21 = var_16;
    var_22 = ((((max((!var_8), var_4))) ? var_4 : -29));
    #pragma endscop
}
