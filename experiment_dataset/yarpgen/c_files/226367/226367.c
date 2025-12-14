/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((4294967292 ? (((max(-64, var_6)))) : (~4294967295)))) ? (max((-64 > -1), (~4294967268))) : var_4);
    var_12 = (max(var_12, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(arr_4 [i_1] [6])));
                var_13 = (~var_7);
            }
        }
    }
    #pragma endscop
}
