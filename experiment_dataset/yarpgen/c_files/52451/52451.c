/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-255 ? (max((var_3 % var_2), 255)) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = 0;
                    var_12 = ((((7 ? (arr_5 [i_0] [i_0]) : (min((arr_4 [i_2] [i_0]), var_1)))) % (arr_0 [i_0])));
                    var_13 = max((0 ^ 7), (max((85 << 7), var_5)));
                }
            }
        }
    }
    #pragma endscop
}
