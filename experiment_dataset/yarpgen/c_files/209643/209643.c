/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((((~(arr_2 [i_0]))) != -26));
                var_12 = (((4140 ? 7 : -28)));
                arr_8 [i_0] [i_0] = ((((((arr_4 [i_0] [i_1] [i_0]) - 125))) ? (1 - -814637218) : ((41218 - (-32767 - 1)))));
            }
        }
    }
    var_13 *= ((68 ? 61662 : (((!(7 || var_4))))));
    var_14 = ((!((((var_1 && 9223372036854775807) | var_1)))));
    var_15 = (((69 - ((var_5 ? var_10 : var_5)))));
    #pragma endscop
}
