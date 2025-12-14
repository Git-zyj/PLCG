/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (min(-1728198666, 101));
                arr_4 [i_0] = var_16;
                var_20 = ((((max(var_4, 132))) ? (((((var_2 + 2147483647) << (arr_3 [i_0]))) - -132)) : (((((2050617071080243731 << (82 - 75)))) ? var_9 : (((arr_1 [i_0] [i_0]) ? var_11 : var_10))))));
            }
        }
    }
    var_21 = (((((((1 >> (124 - 113)))) ? 12 : 142)) == (var_16 && 22)));
    #pragma endscop
}
