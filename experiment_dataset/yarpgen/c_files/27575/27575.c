/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [12] |= var_13;
                arr_7 [i_0] [i_1] [i_1] = (min((max(((((-127 - 1) + var_8))), (max(var_11, (arr_0 [i_0]))))), ((((var_9 - 0) <= (arr_3 [i_1]))))));
            }
        }
    }
    var_14 = ((var_7 >> (var_0 - 103)));
    var_15 = ((var_1 ? ((-var_0 ? (var_10 > var_0) : -var_12)) : (((((max(25, -9))) ? (var_11 || -7663563775540137308) : var_8)))));
    #pragma endscop
}
