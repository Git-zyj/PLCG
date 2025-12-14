/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= -2705009371145671373;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((arr_2 [i_1]), var_2));
                var_15 = ((!((((~var_5) ? (arr_1 [i_0]) : (min(5774, 2046077922774139821)))))));
                var_16 = (max(var_16, ((((arr_1 [2]) >> (max((-9223372036854775807 - 1), 1)))))));
            }
        }
    }
    #pragma endscop
}
