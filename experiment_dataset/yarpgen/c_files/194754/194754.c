/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((67108352 + (((((max(-19, 15360)) > var_5))))));
    var_16 = 3;
    var_17 = -3;
    var_18 = ((~(209 ^ -9223372036854775806)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (((((arr_5 [i_2 - 1] [i_2 - 1]) ? (arr_5 [i_2 - 3] [i_2 - 3]) : -47)) * 1));
                    var_20 = ((var_10 ? var_5 : ((var_5 >> ((min(var_9, var_10)))))));
                    arr_7 [i_0] [12] [i_2] = (min((((min(var_0, (arr_4 [1] [1] [i_2]))))), (((arr_4 [7] [i_2 - 3] [i_2]) - ((min(-9, 11591)))))));
                }
            }
        }
    }
    #pragma endscop
}
