/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((~344101242671849534), (var_2 % var_2));
    var_12 = -9223372036854775780;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((arr_3 [i_0 + 2] [i_0 + 2]) == (arr_3 [i_0 + 1] [i_0 + 2]))))) / (max(var_9, var_0))))));
                arr_5 [i_0 + 2] [i_0] = 32749;
                var_14 = (min(var_14, ((-(arr_1 [i_0] [i_0])))));
                var_15 = (max(var_15, ((((max((arr_1 [i_0 - 1] [i_1 + 3]), (max((arr_2 [i_0] [i_1] [i_0]), -32731))))) ? 32731 : (((arr_1 [i_0 + 1] [i_1 + 1]) >> (var_10 - 139651653428785591)))))));
            }
        }
    }
    #pragma endscop
}
