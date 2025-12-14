/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(32767, 17639398053827109462)) / (max(var_6, var_13))))) ? var_13 : (7 + 65528)));
    var_16 = var_9;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 = (min((318303134798880400 ^ 807346019882442153), (max((arr_0 [i_0]), var_2))));
        var_18 = ((!(0 - 24007)));
        var_19 = (((min((((!(arr_1 [i_0])))), var_5))) ? var_4 : var_0);
        var_20 = ((((((!var_11) ? var_10 : ((681445049 << (2147483647 - 2147483647)))))) ? ((((var_8 >= (arr_3 [i_0 + 1] [i_0]))))) : ((~((var_0 ? var_0 : var_3))))));
        var_21 = (var_5 + var_13);
    }
    var_22 = (min(var_22, (((((((191 * -38) > ((65529 ? var_6 : 18446744073709551615))))) / (min(var_9, (max(var_5, 197154401)))))))));
    var_23 &= 1160721238;
    #pragma endscop
}
