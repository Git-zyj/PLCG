/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 11301;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((((max(964154817, 255))) ? ((1190774886 ? 4849045344978849 : 16777200)) : (((-(arr_3 [i_0 + 2]))))));
                var_22 -= ((84 ? ((max(255, (arr_3 [i_1])))) : ((max(var_13, (!35107))))));
                arr_6 [i_0 - 1] [i_1] [i_1] = (max(var_15, ((((max(46630, -8067320253837611862))) ? 4728809 : var_5))));
                arr_7 [i_1] [i_0] [i_0] = 9764;
            }
        }
    }
    #pragma endscop
}
