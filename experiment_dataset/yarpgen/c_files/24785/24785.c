/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0 + 1] [i_1]);
                var_12 = (((((~(min(var_4, 32767))))) || ((max(32767, -1472302259)))));
                var_13 ^= max((((!(arr_1 [i_0 + 1] [i_0 - 1])))), (max((((((arr_2 [i_0 - 1] [i_0]) + 2147483647)) >> (var_7 - 3915420571))), (((-16650 + 2147483647) << (36 - 36))))));
            }
        }
    }
    var_14 = (((var_2 % var_1) / (min(var_8, var_0))));
    var_15 += var_2;
    #pragma endscop
}
