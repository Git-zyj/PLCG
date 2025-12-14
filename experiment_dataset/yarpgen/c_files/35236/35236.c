/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~(!var_7)))) ? (((-73 ? 1 : 4294967295))) : (~var_1));
    var_12 = ((((max(((464520505 ? 0 : -59)), (-127 - 1)))) & ((-(max(28506, var_10))))));
    var_13 = 7885864774747666817;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (((min(var_9, var_8))));
                    var_15 |= (arr_0 [i_0] [i_1]);
                    arr_7 [i_0] [i_0] [i_2 - 1] = (arr_6 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
