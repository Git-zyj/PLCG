/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = min(((~(~-1954028960))), ((-(max(var_3, var_10)))));
                var_19 += ((!((min((min(793054273, 1524341300)), (max(266767968, -793054284)))))));
                var_20 &= (-(min(-793054297, -793054274)));
                var_21 = max((min((min((arr_4 [i_1] [8]), var_10)), (!1394045368))), (max((max(-793054274, -471675606)), (max(var_4, var_4)))));
            }
        }
    }
    var_22 = (max(var_22, (((!(((~(min(var_8, var_7))))))))));
    var_23 = (~(~434602528));
    #pragma endscop
}
