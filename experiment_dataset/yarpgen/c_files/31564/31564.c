/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] = arr_3 [i_1] [i_1];
                arr_6 [i_0] [i_0] [i_0] = (((((arr_0 [i_0]) ? 1407824617 : ((1407824625 ? -1407824618 : -4194304)))) > (((!(248 > -1407824610))))));
                var_13 = ((~(((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
                var_14 = 8;
            }
        }
    }
    var_15 = (min(var_15, (((-(~var_8))))));
    var_16 ^= ((1407824617 ? 31822 : var_3));
    #pragma endscop
}
