/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_6;
    var_15 = (((((~((-24625 ? 3202520267 : 3202520275))))) ? (((((min(59844, var_12)) >= var_9)))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [5] [i_1] = (((max((arr_0 [i_1]), var_6)) * var_5));
                arr_5 [i_0] [i_1] [i_1] = ((min(var_7, 3202520267)) - 4294967286);
            }
        }
    }
    #pragma endscop
}
