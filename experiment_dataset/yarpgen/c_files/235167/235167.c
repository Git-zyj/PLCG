/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 206;
    var_19 = (((((49 ? 0 : 207))) && (min((max(1, 1)), (!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 *= ((((890386790 < (24 >> 4)))));
                var_21 |= (max(((((~var_0) ? var_10 : (((var_14 + 2147483647) >> (4192256 - 4192230)))))), (((arr_5 [i_0]) ? var_2 : (arr_5 [i_0])))));
            }
        }
    }
    var_22 -= 25106;
    #pragma endscop
}
