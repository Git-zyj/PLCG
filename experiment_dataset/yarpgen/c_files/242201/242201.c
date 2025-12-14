/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = 9223372036854775807;
                var_14 *= (max((arr_0 [i_0] [i_1 + 3]), ((min((-127 - 1), 908863053)))));
                var_15 = -908863060;
                arr_6 [i_0] |= (min((max(9223372036854775807, 18446744073709551608)), ((min((-127 - 1), -2109879830)))));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
