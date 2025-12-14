/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (min((((arr_2 [i_0] [i_0] [i_1 + 1]) ^ (arr_1 [i_0 + 1]))), (arr_3 [i_1] [i_1 + 1] [11])));
                arr_4 [3] = ((((min(49152, -40))) && ((!(arr_1 [i_0 - 1])))));
                var_17 = (arr_2 [i_0 - 1] [i_0] [i_1]);
                var_18 = min((arr_0 [i_1 + 1]), (arr_2 [i_0] [i_0] [i_0]));
            }
        }
    }
    var_19 = var_1;
    var_20 &= -40;
    var_21 = -40;
    #pragma endscop
}
