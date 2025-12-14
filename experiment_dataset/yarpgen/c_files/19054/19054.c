/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = (((((~(var_6 * var_1)))) || (var_7 >= var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 &= (arr_5 [i_0 - 1] [i_0 + 1]);
                arr_6 [i_1] = ((((9223372036854775803 << (((((min((arr_0 [i_0]), -9223372036854775798)) + 9223372036854775800)) - 2)))) ^ ((-9223372036854775791 & ((((arr_0 [i_0]) >> (((arr_3 [i_1] [i_1] [i_1]) - 60375)))))))));
            }
        }
    }
    var_22 ^= var_12;
    #pragma endscop
}
