/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (!var_4);
                arr_8 [i_0] [i_0] [i_1] = ((((((arr_1 [i_0 - 2] [i_0]) ? 1329680905 : (arr_1 [i_0 - 2] [i_0 - 2])))) ? (1329680905 > 2965286393) : ((-(arr_1 [i_0 - 1] [i_0 - 1])))));
                var_16 -= (arr_3 [i_1]);
            }
        }
    }
    var_17 = (min(var_17, var_11));
    var_18 = var_9;
    #pragma endscop
}
