/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_9;
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((198 >> (((max(1, 975952748)) - 975952746)))) / 7543155404364098775));
                var_13 &= (max((min(42210, (((((arr_3 [i_0] [i_1]) + 9223372036854775807)) << (65535 - 65535))))), (max(6129, (max(-23228, 6350929283984607984))))));
                arr_7 [i_1] = 134;
            }
        }
    }
    #pragma endscop
}
