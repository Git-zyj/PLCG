/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 += ((!((((((((arr_3 [i_0] [i_0] [i_2]) > 511)))) & (30 + -334838648738581115))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (arr_0 [i_2]);
                    var_18 -= ((!(min((arr_6 [i_0 - 4] [i_0 - 4]), (arr_6 [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }
    var_19 = max((!var_16), var_9);
    var_20 -= 8388607;
    var_21 &= var_16;
    var_22 = 1;
    #pragma endscop
}
