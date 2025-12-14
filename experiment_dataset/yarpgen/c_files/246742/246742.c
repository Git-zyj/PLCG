/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((!(((var_1 ? var_8 : var_14))))))));
    var_21 = ((-215 ? var_8 : 95));
    var_22 -= ((24520 >> (250 - 241)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_23 ^= ((((0 ? (arr_0 [i_0]) : 36786)) >> (-1508827470 + 1508827494)));
                    var_24 = (max(var_24, ((max(((-(arr_5 [i_2] [i_1]))), ((39589 ? (((arr_5 [i_0] [i_1]) ? (arr_1 [i_1]) : (arr_5 [i_1] [i_2]))) : (-2147483647 - 1))))))));
                    var_25 = 19844;
                }
            }
        }
    }
    var_26 -= -5835770432310933292;
    #pragma endscop
}
