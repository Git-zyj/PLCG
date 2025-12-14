/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((var_10 ? 47963 : var_9));
                var_18 = (max((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_6)), 0));
                var_19 = (+-253688131);
                var_20 = (max((max(var_8, (arr_1 [i_0]))), (((arr_1 [i_0]) + (arr_2 [i_0])))));
                var_21 = (max((-9223372036854775807 - 1), 160309043048224151));
            }
        }
    }
    var_22 = (((!6703376236641098959) ? var_10 : ((((-7533760047102653574 + 9223372036854775807) >> (11097296674002917260 - 11097296674002917213))))));
    var_23 ^= var_5;
    #pragma endscop
}
