/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_1 [i_0 + 2]);
                arr_5 [i_1] [i_1] [i_1] = -2157898946041012335;
                arr_6 [i_0] [i_1] [i_0] = (((~15) ? var_3 : 241));
                var_12 = (((max(241, (var_9 == var_10)))) + 6);
            }
        }
    }
    var_13 = ((((max(31, (~var_7)))) ? var_1 : var_9));
    #pragma endscop
}
