/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((55135 && 417946634) ? -10115 : ((max(-582, var_6)))))) || -26)))));
    var_21 = (max(var_21, var_19));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = (7 > 0);
        var_23 = (min(var_23, ((min((((var_10 == (max(0, (arr_0 [i_0] [i_0])))))), (((((var_8 ? 18446744073709551609 : var_5))) ? (((3782267233735562896 ? 38346 : 25))) : ((~(arr_0 [i_0] [i_0]))))))))));
        var_24 = (min(var_24, (((-(!0))))));
        arr_2 [i_0] = ((73 ? (!1) : (~1)));
        arr_3 [i_0] = ((arr_1 [i_0]) == (max(18446744073709551603, -811063651)));
    }
    var_25 = (((((-((max(var_15, var_15)))))) ? 255 : var_13));
    #pragma endscop
}
