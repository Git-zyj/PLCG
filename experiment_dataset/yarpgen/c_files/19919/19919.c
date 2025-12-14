/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-3104204214263031733);
    var_17 = ((-14259182317885256559 ? 3743932183783914250 : (var_10 * var_12)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = 14702811889925637365;
        var_19 = (((((-1 ? 14702811889925637366 : 4187561755824295072))) ? (((((24060 ? 13865527732601063260 : 27057))))) : (((((var_10 - (arr_1 [i_0] [i_0])))) ? 4187561755824295084 : 14702811889925637365))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = (!-716068551);
        var_21 = (max(var_21, 65535));
    }
    var_22 = var_13;
    #pragma endscop
}
