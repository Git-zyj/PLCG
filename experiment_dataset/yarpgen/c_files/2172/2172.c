/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -0;
    var_19 *= (!var_17);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((arr_3 [i_0]) ? (arr_2 [16]) : ((((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_1))) ? -1 : ((-15535 ? var_2 : 17214)))));
        var_21 = (arr_2 [i_0]);
        arr_4 [i_0] = (((((!(((255 ? 4858095235586743662 : 15534)))))) | var_13));
    }
    var_22 -= max(((var_6 ? (!1530085805442319833) : 0)), var_3);
    var_23 = ((var_3 / ((16980113415288833637 ? (-32767 - 1) : 7476407880561742137))));
    #pragma endscop
}
