/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((32767 ? 1152780767118491648 : -32752));
    var_11 = ((((max((min(255, -32752)), 32767))) ? ((0 ? 125829120 : (min(11474301060603246316, -5485187800449612751)))) : ((((((8147793279414030455 ? var_4 : 1))) ? ((max(103, -32765))) : ((min(-18292, var_9))))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 1] [0] |= ((((((max(-1, 14850868328652207897))) ? ((5485187800449612750 ? -1 : -311303265)) : (((arr_0 [22]) ? -32749 : (arr_1 [i_0 - 3])))))) ? ((((max(59323, (arr_1 [i_0])))) ? (((-9726 ? -7624945918357278393 : 249))) : (max(var_4, var_9)))) : ((min(((max((arr_1 [i_0]), (arr_1 [9])))), ((65535 ? var_1 : var_1))))));
        arr_3 [i_0] = (((((((max(var_5, (arr_0 [i_0])))) ? ((42 ? -7624945918357278393 : 62)) : ((((arr_1 [i_0]) ? var_2 : -198266022)))))) ? ((((((19 ? 255 : 65535))) ? ((32222 ? 123 : 1)) : 37437))) : (max((max(var_7, 15488378776477788267)), (((var_4 ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
        arr_4 [i_0] = max(((max(247, ((2147352576 ? 1 : 3667443137))))), (min(((min((-32767 - 1), var_3))), (((arr_1 [i_0]) ? var_5 : -7624945918357278409)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (max(7624945918357278393, 37466));
        arr_8 [i_1] = (max(27, 65535));
    }
    var_12 = (min(((min((((4088 ? -2147352595 : var_1))), (min(-8692325323058649760, 0))))), (max((((var_7 ? var_1 : var_7))), ((98 ? 2958365297231763349 : var_4))))));
    #pragma endscop
}
