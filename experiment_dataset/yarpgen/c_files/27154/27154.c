/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max((((var_0 ? var_10 : 1))), (((1 != var_8) ? 18446744073709551615 : var_14))));
    var_17 = 188;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 *= (((((~(arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 2])))) ? ((var_10 ? (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) : (arr_4 [i_1 + 1]))) : ((((arr_4 [i_1 - 2]) ? 60 : (arr_4 [i_1 - 2]))))));
                var_19 = ((-(((((10 ? 18446744073709551615 : 9223372036854775806))) ? ((~(arr_4 [i_0]))) : (((var_2 >= (arr_6 [i_1 - 2] [i_0] [i_0]))))))));
                var_20 = -2276572631162209111;
            }
        }
    }
    #pragma endscop
}
