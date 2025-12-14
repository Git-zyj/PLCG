/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (1 - -1502020292);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max((!1502020291), (arr_0 [i_2])));
                    var_19 = ((((1 ? (max(var_8, (-9223372036854775807 - 1))) : 169)) << ((((((min(1, 87))) ^ var_14)) - 50256))));
                }
            }
        }
    }
    #pragma endscop
}
