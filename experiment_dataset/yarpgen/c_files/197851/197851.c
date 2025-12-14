/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_11 ? (((!((min(38145, -10753)))))) : (((((2343496030 << (15697 - 15666)))) ? (-5216108390230678888 > 5216108390230678888) : 1580070454))));
    var_13 = (min((!-var_5), (min(((var_10 ? 15724 : -6068653935304382891)), -2736336160682999703))));
    var_14 = ((-5216108390230678888 ? (!-6068653935304382899) : (6068653935304382890 >= -6068653935304382891)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [1] = (max(1, ((2257634422 ? 7399251904676109068 : -16))));
        var_15 = (min((((arr_1 [i_0]) ? (arr_2 [i_0]) : (-5216108390230678883 > 17))), (~4294967290)));
    }
    #pragma endscop
}
