/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 90;
    var_12 = (((((((max(var_9, 65521))) ? var_4 : ((var_9 ? 77 : (-127 - 1)))))) ? ((127 >> (var_5 - 221))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((((105 <= (arr_1 [i_1 - 1])))), (arr_0 [i_1 - 1])));
                arr_7 [i_0] = (max((arr_4 [i_0]), (arr_0 [i_1 - 1])));
                arr_8 [i_0] [i_0] [i_1 - 1] |= (((arr_5 [i_1 + 1] [i_1 - 1]) == -105));
            }
        }
    }
    #pragma endscop
}
