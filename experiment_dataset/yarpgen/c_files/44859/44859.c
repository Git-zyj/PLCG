/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (!22021);
                var_15 -= ((-11097 ? 5398120950612054882 : 4294967290));
                arr_5 [i_0] [i_1] [i_0] = (min((max(((var_9 ? var_0 : 121)), (arr_3 [i_0] [i_0]))), var_10));
            }
        }
    }
    var_16 = 32768;
    #pragma endscop
}
