/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = var_15;
    var_22 = 1115147542;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max(916496820080039047, (arr_1 [i_0])))));
        var_23 = 4859532315123063064;
        arr_4 [i_0] = (min((((-32748 <= (!1)))), ((3960189059 ? 15236283760085604579 : (min(-32744, 5275040036213777816))))));
        arr_5 [i_0] [i_0] |= 15236283760085604582;
    }
    #pragma endscop
}
