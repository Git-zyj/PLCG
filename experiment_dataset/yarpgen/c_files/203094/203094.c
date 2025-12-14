/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (arr_0 [i_0]);
        var_16 = (64 <= 63);
        var_17 &= (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (((~193) ? 193 : 65525));
        var_18 += (max(((((((var_4 ? var_5 : var_6))) ? ((max(209, 143))) : var_2))), (((((11 ? 88 : -680402071855511897))) ? var_13 : 0))));
        var_19 |= ((((((var_5 * -21) ? (((var_2 != (arr_5 [i_1])))) : (1 | 1)))) ? (!1863665772) : (max(593476165838518690, -4484625159794818607))));
    }
    var_20 = (max(var_2, 912366039));
    var_21 |= var_14;
    var_22 = ((((1 ? -18726 : 111)) - var_2));
    #pragma endscop
}
