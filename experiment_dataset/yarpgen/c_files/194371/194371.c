/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (~14780);
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((((((((arr_0 [i_1]) ? -376460015 : var_0))) ? ((2610113274 ? 1411589590568932266 : -7829831922249867302)) : (arr_3 [i_0] [i_0] [i_0 + 3])))) ? ((~(((arr_1 [i_0] [i_1]) / 6029555894686757496)))) : (((-97 ? (arr_4 [i_0] [i_0] [i_0]) : 17035154483140619334)))));
                var_15 = ((min(20798, 96)));
            }
        }
    }
    var_16 &= ((var_10 ? ((-1100270296 ? var_7 : (~var_3))) : var_8));
    var_17 += (~var_8);
    #pragma endscop
}
