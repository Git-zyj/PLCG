/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max((((var_4 | var_6) * var_12)), (min(var_5, var_6))));
        var_16 = ((!(((-((var_7 ? 255 : var_9)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = var_14;
        var_18 = (min(var_18, (((!((!((max(0, -1769940823))))))))));
        var_19 = ((!(!7986)));
    }
    var_20 = (((min(0, -7986))) ? 7986 : var_12);
    var_21 = var_1;
    var_22 = (min(var_22, (max(((min((!var_0), var_13))), ((~(4294967294 - var_14)))))));
    #pragma endscop
}
