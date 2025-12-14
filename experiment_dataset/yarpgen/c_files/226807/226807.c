/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((25637 & ((max(var_13, var_6))))), ((((max(3663142336, var_6)) > (~var_7))))));
    var_15 = ((((((-1904221483 | var_2) ? ((var_10 ? 26779 : var_5)) : (min(var_5, 1465286293))))) ? ((((var_3 ? var_9 : var_13)) << (1465286296 - 1465286296))) : ((((max(var_6, -8198)))))));
    var_16 = (min(var_16, -var_4));
    var_17 = (min(((((min(var_7, var_0))) ^ (max(var_10, 183)))), (((((var_1 ? var_12 : var_1))) % ((var_13 ? 65 : var_10))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0])));
        arr_2 [i_0] = ((((+(((arr_1 [i_0]) | var_6)))) != (((arr_0 [i_0]) ? var_6 : (!2604584998)))));
        arr_3 [i_0] = ((((((var_9 == ((((arr_1 [i_0]) >> (((arr_0 [i_0]) - 232))))))))) > ((((max((arr_0 [i_0]), var_9))) ? 6954448975829954714 : var_13))));
    }
    #pragma endscop
}
