/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((!(((130 ? 253 : 124)))));
                arr_6 [i_0] [i_1] = ((((249 ? var_11 : (94 <= 233))) >= var_2));
            }
        }
    }
    var_17 = (((((((max(124, 126))) ^ (!12)))) ? ((var_5 * (!var_1))) : var_4));
    #pragma endscop
}
