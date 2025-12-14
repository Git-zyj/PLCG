/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_2, ((((~58) | ((-11128 ? 0 : -11128)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min((((!((max(20562, 8442)))))), (!20542))))));
                var_22 |= (((~0) ? ((8657959434253944101 ? 1 : -698185372692036100)) : 47498));
                var_23 = (max(31, (max(-32, (1 + 54113)))));
                var_24 = (max((max(2347639370, (-9223372036854775807 - 1))), (min(-1, -7806102274841978794))));
            }
        }
    }
    #pragma endscop
}
