/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((118 ? 1 : 1));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [0] = (arr_4 [i_0] [i_1]);
                var_14 = ((!((min((((-23543 + 2147483647) << (68 - 68))), (68 << 0))))));
                var_15 = var_8;
            }
        }
    }
    var_16 = 4294967281;
    #pragma endscop
}
