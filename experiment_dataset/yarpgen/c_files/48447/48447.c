/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (arr_2 [7]);
                arr_6 [i_1] [i_1] [3] = (((!(arr_5 [i_0] [i_0] [i_0]))) ? (((arr_5 [i_0] [i_1] [i_1]) ? 11894983702037431075 : (arr_5 [i_0] [i_0] [i_1]))) : (arr_5 [i_1] [i_1] [i_0]));
                var_11 = var_7;
                arr_7 [i_0] [i_1] [i_1] = ((54841 & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
            }
        }
    }
    var_12 |= (var_4 ? var_7 : ((var_9 ? ((var_6 ? var_8 : var_3)) : ((var_8 ? var_8 : 127)))));
    #pragma endscop
}
