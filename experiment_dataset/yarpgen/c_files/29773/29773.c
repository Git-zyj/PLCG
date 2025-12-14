/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_2, 721637276))) ? (!32513) : var_5))) ? ((-721637285 ? -23774 : 1)) : -721637285));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [6] = ((((min(48031, (arr_1 [i_0] [1])))) ? ((((min(var_10, 721637276)) >= (~var_12)))) : (((arr_1 [i_0] [i_0]) ? (((arr_2 [i_0] [2]) ? 31681664 : var_3)) : var_6))));
        var_17 = ((-721637285 ? (((27 ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (((17557 * 27075) ^ var_11))));
        var_18 = (max(var_18, (((((((arr_1 [i_0] [i_0]) || (arr_0 [i_0])))) << 1)))));
        arr_4 [i_0] [i_0] = ((var_15 ? -2394618516022029940 : ((((!928731314) ? 20802 : 508)))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_19 = (max(var_19, var_5));
        var_20 = (max(var_20, (((((-1 >= (-9223372036854775807 - 1))) ? (var_8 ^ 120) : 928731314)))));
    }
    #pragma endscop
}
