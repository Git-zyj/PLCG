/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] = -1;
        var_13 = (((~var_3) ? var_9 : ((max(((29360128 ? (arr_1 [1]) : 378360981)), (arr_0 [5] [i_0]))))));
        arr_3 [i_0] = ((-29360149 ? ((((min(0, 0))))) : (((!var_8) ? ((var_0 ? (-9223372036854775807 - 1) : var_12)) : ((max(29360175, (-127 - 1))))))));
    }
    var_14 = ((((((((var_8 ? var_12 : var_10))) ? (~29360103) : var_11))) ? 5 : (((((max(75, var_9))) ? (!-29360106) : var_3)))));
    #pragma endscop
}
