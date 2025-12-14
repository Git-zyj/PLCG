/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_2 ? var_3 : ((var_6 ? ((var_3 ? var_7 : var_1)) : -var_11)))))));
    var_20 = ((var_17 ? ((58658 ? 46377 : 65280)) : 17720));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((max(((min(46377, 19159))), (~var_12))))));
        arr_4 [i_0] = ((var_5 ? ((-(((var_1 <= (arr_3 [i_0] [i_0])))))) : var_0));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 = ((-(arr_5 [i_1])));
        var_23 |= ((((-(((arr_0 [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1]))))) == 31971));
    }
    var_24 = (((((var_17 ? var_5 : 65535))) ? ((var_0 ? var_17 : var_10)) : (26756 != 8188)));
    var_25 |= (max(((((max(var_13, var_2))) ? (var_5 < var_14) : ((min(0, 19955))))), (((((var_12 << (12464 - 12458)))) ? ((max(1154, var_10))) : (var_8 != var_7)))));
    #pragma endscop
}
