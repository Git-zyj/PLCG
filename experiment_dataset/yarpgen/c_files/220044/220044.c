/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(268435455, ((~(var_6 * 18446744073709551615)))));
    var_18 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (max((var_11 > 0), (((var_4 > 155) ? (var_1 >= 384) : 4294966912))))));
                    var_20 += (max((((arr_1 [i_2 - 2]) << (((arr_1 [i_2 - 2]) - 18394952356220155932)))), 4294966884));
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
