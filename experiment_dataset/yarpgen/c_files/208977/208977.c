/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (35 + 0);
    var_13 = ((((0 ? 8191 : (min(10614021998007881654, 1))))) ? (((var_1 + 9223372036854775807) >> var_6)) : (104 ^ 1));
    var_14 |= (~(-22546 ^ 37));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = (+((var_7 ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2]) : -2155268768165925529)));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = (min(((max(var_10, (!93)))), (max(((((arr_4 [i_0]) || 2))), (arr_7 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
