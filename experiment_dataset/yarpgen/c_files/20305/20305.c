/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((var_7 * (var_2 | var_7)))) ? (var_10 | 1152921504606846975) : var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((((max(881906088, var_10))))) == (max(15267877878685117570, (23432 & -23433)))));
        arr_3 [20] = ((-((var_7 << (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
