/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(4268463424, 8));
    var_20 = (min(var_20, var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((((min((min((arr_1 [i_0]), 67065629)), (((59984 ^ (arr_2 [i_0] [i_1]))))))) ? ((var_0 ? (!var_3) : var_13)) : var_17));
                arr_4 [i_1] [i_1] [i_1] = (((arr_2 [i_1] [i_1]) / (arr_2 [i_0] [i_1])));
                var_22 *= min((min(var_6, (arr_2 [i_1 + 1] [i_0]))), (max((arr_2 [i_1 - 3] [i_0]), var_5)));
            }
        }
    }
    #pragma endscop
}
