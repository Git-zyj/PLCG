/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-1369103635 ? 9223371968135299072 : 1008));
    var_16 &= ((var_0 ? (min((6610780427829124401 <= -2103752475), var_14)) : -var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((9223371968135299084 ? -9223371968135299072 : (((~(arr_1 [i_1])))))))));
                var_18 &= 4;
            }
        }
    }
    #pragma endscop
}
