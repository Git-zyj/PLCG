/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [0] |= ((min((arr_0 [i_0] [i_0]), ((0 ? var_10 : -111)))));
        var_14 *= ((((((arr_1 [6] [i_0]) >= -111))) >> (((arr_0 [i_0] [i_0]) - 10262))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                var_15 -= ((((!(arr_4 [i_1 + 1]))) ? 5051915512617498868 : ((((arr_4 [i_1 - 1]) & 124)))));
                arr_9 [i_1 + 2] [i_2] = (-19463 < -96);
            }
        }
    }
    var_16 ^= 1;
    #pragma endscop
}
