/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((arr_1 [i_0] [i_1]), ((-((~(-9223372036854775807 - 1)))))));
                arr_7 [i_0] [i_1] = (min(((((arr_4 [i_0]) || (!var_1)))), -9223372036854775787));
                arr_8 [i_0] [i_0] [11] = ((-(arr_3 [i_0 + 1] [i_1] [i_1])));
            }
        }
    }
    var_11 = ((~((-var_7 ? 8191 : -1257609763))));
    #pragma endscop
}
