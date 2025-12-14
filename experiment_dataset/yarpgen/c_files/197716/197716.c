/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = 51;
                var_21 = (((arr_2 [i_0]) ? (arr_1 [i_0]) : ((((((41 ? 27255 : (arr_1 [i_0])))) && (((7 | (arr_3 [i_0] [i_0] [i_1])))))))));
            }
        }
    }
    var_22 = ((!(((~((min(63, 1))))))));
    var_23 = (min(var_23, (((var_9 / ((((max(64060, 239))) ? var_19 : var_13)))))));
    #pragma endscop
}
