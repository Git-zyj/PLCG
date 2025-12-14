/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(1223600561241200598, (((((var_9 ? var_10 : -914123842960188951))) ? var_11 : (~var_0))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((var_12 ? var_5 : (((((arr_2 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0])))))));
                arr_6 [i_0] = arr_5 [i_1];
                var_17 = 112;
                var_18 = var_11;
            }
        }
    }
    #pragma endscop
}
