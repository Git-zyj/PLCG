/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+((((var_12 * var_10) || var_1)))));
    var_16 = (max(var_16, ((max((((var_5 ? var_0 : var_4))), (~var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 |= (((max((min(var_1, var_7)), (((-(arr_3 [i_0] [i_1] [i_1])))))) + (arr_4 [i_0] [i_0] [i_1])));
                var_18 ^= (min(((min(var_5, (144115188075855864 != var_12)))), ((-((var_9 ? (arr_1 [7] [i_1]) : (arr_0 [i_0])))))));
                var_19 += (arr_3 [i_0] [i_1] [i_0]);
                arr_6 [i_0] = ((-(max((arr_4 [9] [i_0] [i_1]), (min(-20, (arr_3 [7] [i_1] [2])))))));
            }
        }
    }
    #pragma endscop
}
