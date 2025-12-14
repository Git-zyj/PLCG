/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((var_13 ? var_5 : var_17)) <= (arr_3 [17] [i_0] [i_1])))));
                var_20 = (min(var_20, var_14));
            }
        }
    }
    var_21 += (max((min(-1, -21210)), (((((var_5 ? var_1 : 1))) ? var_5 : ((var_11 ? var_1 : var_3))))));
    var_22 = (min(63, -7494210347125527818));
    var_23 = (min(((((max(65, var_16)) <= (((var_8 ? 2648184928 : 4294967295)))))), (min((14893 ^ 14491), var_13))));
    #pragma endscop
}
