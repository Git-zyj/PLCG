/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [0] [i_0] [i_1] = min(((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 - 2]) : -4046))), 4282507115);
                var_17 = (min(var_17, ((max(var_13, (arr_3 [i_1 - 2]))))));
            }
        }
    }
    var_18 = (((((452390264 ? (max(var_11, var_1)) : (max(-4054052346534998182, var_9))))) ? (min(((9223372036854775807 ? -9223372036854775803 : -9223372036854775790)), ((-2948950730472716950 ? 9223372036854775802 : 9223372036854775798)))) : var_3));
    var_19 |= ((((max(var_0, (min(var_12, -29224))))) ? (max(((5933463317750589232 ? -9223372036854775800 : -29234)), var_3)) : (((3030566607 ? var_9 : (max(1042451808, var_14)))))));
    var_20 = var_16;
    #pragma endscop
}
