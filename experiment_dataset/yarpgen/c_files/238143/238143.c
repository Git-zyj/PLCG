/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((var_4 ? var_14 : 16232)), (((var_12 ? -16 : var_7)))))) ? (((((4294967280 / var_13) || (((-16241 ? -16 : 16))))))) : (max(3387203559097147771, var_14))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (min(var_15, ((((((((arr_0 [1] [i_2 - 2]) ? var_1 : -1995743208)) + 2147483647)) << (((arr_3 [5] [i_0 + 1] [i_0]) - 101)))))));
                    var_18 = (max(var_18, ((max((max(((var_14 ? (arr_2 [i_0]) : var_6)), (arr_0 [i_2 - 1] [i_0 + 2]))), ((var_7 ^ (arr_2 [i_1 - 4]))))))));
                }
            }
        }
    }
    var_19 = (max(var_7, ((-33 ? (~var_5) : (((var_10 ? var_11 : var_8)))))));
    #pragma endscop
}
