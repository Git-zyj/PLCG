/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((0 ? 1 : 65535))) ? (~4294967295) : (max(((var_13 ? var_6 : 1)), 0)));
    var_17 = 127;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0] [i_0])));
        var_19 = (max((1 > 20016), 57937));
        var_20 *= ((var_9 ? ((2 ? (-2147483647 - 1) : 12030)) : var_8));
        var_21 = (((((!21866) ? ((-(arr_1 [10]))) : ((((arr_0 [i_0] [i_0]) ? 45519 : var_4))))) < (~127)));
        var_22 = -78;
    }
    var_23 = ((((min((var_14 != 248), ((var_15 ? 2726573420 : 494223235))))) ? (max((var_12 % var_0), 39)) : ((((max(1, var_13)))))));
    var_24 = ((8982443185618919602 + ((12030 ? (-2147483647 - 1) : (min(0, 4059482967244501765))))));
    #pragma endscop
}
