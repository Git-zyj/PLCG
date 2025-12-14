/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= max(var_8, (~4160749568));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 -= 486606758;
                arr_4 [i_1] [12] [i_1] = ((((min(var_2, var_0))) ? (((arr_3 [i_1 - 2] [12] [i_1 - 2]) ? (1 ^ 536854528) : 1)) : -23018));
                arr_5 [i_0] [i_0] [i_1] &= (((((((8895 ? var_7 : (arr_2 [6] [i_1] [i_1])))) ? (max(var_9, -21495)) : ((0 ^ (arr_0 [i_0] [i_0]))))) >= ((min((arr_3 [i_0] [i_1] [i_0]), (22320 || -21495))))));
            }
        }
    }
    var_13 = ((0 ? 4294967295 : 4017119004323783279));
    var_14 &= var_3;
    #pragma endscop
}
