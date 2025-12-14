/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (+-17015);
    var_17 = 3185144865;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (((var_2 >= ((var_8 ? 3185144860 : 1)))));
                var_19 = ((~(((((arr_2 [i_0]) ? (arr_0 [i_1 + 1]) : 1))))));
            }
        }
    }
    var_20 = (min(52, var_14));
    #pragma endscop
}
