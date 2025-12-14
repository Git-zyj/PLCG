/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_0 + var_0) + var_7)) + var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((0 / (max((min((arr_7 [i_0] [i_0]), (arr_2 [i_1]))), (arr_3 [i_0] [i_1])))));
                    var_20 = (((((((max(-66, 45828))) * (arr_0 [i_0] [i_0])))) / (((~4050551190) ^ (((~(arr_3 [i_0] [i_1]))))))));
                    var_21 *= (!var_12);
                }
            }
        }
    }
    var_22 = (+-200);
    var_23 = var_16;
    #pragma endscop
}
