/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_4 ? ((208 ? (-9223372036854775807 - 1) : 2018706095)) : ((var_14 ? -2018706096 : 9223372036854775789))))) ? ((((((-9223372036854775785 ? 1 : 2018706095))) ? ((-2018706097 ? 874397640 : 1)) : var_8))) : (((((2018706081 ? 3879819923695786190 : 32766))) ? ((var_0 ? 17 : var_5)) : var_0))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_6 ? var_8 : 12))) ? ((-67859950 ? 14566924150013765426 : 240)) : ((3393875916154512016 ? 3879819923695786190 : 2147483647))));
        arr_3 [i_0] = ((8188 ? ((2713326994 ? 2495164140 : -24648)) : ((18446744073709551612 ? 1 : 1867905776))));
        var_16 = (((((14566924150013765424 ? 96 : 0))) ? (((4095 ? 1 : 2018706114))) : ((0 ? (((-3647211626547638518 ? 73 : 50410))) : 3879819923695786184))));
    }
    var_17 = var_14;
    #pragma endscop
}
