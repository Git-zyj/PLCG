/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_10, (((((var_11 << (var_8 - 182)))) ? (min(var_1, 2501810688580951554)) : var_0))));
    var_13 = (max(var_13, ((min(var_5, ((var_7 ? (((1 ? -37 : var_1))) : ((335395808 ? 281474976710528 : 335395804)))))))));
    var_14 = (var_4 ? 18446462598732841087 : -2501810688580951539);
    var_15 = (((!-335395783) ? (((var_4 ? 448 : 1))) : ((((-2 - 1) ? ((min(-2, 16))) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((max(2931693128, 167)) % (((67 ? (var_4 != 2501810688580951520) : (~-113)))));
                arr_6 [i_0] = ((!(~18446462598732841084)));
                var_16 = var_10;
            }
        }
    }
    #pragma endscop
}
