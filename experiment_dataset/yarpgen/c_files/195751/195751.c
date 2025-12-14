/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((var_6 ? var_3 : var_8))) ? ((var_6 ? 2879824611 : 4294967295)) : 2879824621))) ? (((((1610612736 ? 4294967295 : 576460752286646272))) ? (-9223372036854775807 - 1) : 1893114532)) : var_10);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((arr_1 [i_0] [i_0]) ? var_6 : ((((((1 ? (-9223372036854775807 - 1) : 6484928556889671207))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_15 = (max(var_15, (((var_8 ? ((((arr_0 [i_0] [i_0]) ? ((var_9 ? var_8 : (arr_1 [i_0] [i_0]))) : var_12))) : (((((-3671136632135987959 ? -1893114549 : 2879824603))) ? (((1 ? -1893114553 : -788420246))) : ((-1893114560 ? 690724877621359880 : 823670991674656644)))))))));
    }
    var_16 = (((-1 ? -11631 : 24068)));
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
