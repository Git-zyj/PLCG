/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((max(var_2, var_6)))) ? ((max(var_7, 0))) : var_8)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = ((((!0) ? 1963598148 : (max(var_4, var_7)))));
        var_12 = var_5;
        var_13 *= (~var_5);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = ((((max(1, ((var_8 ? -1963598162 : var_5))))) ? -1127407661 : -148270144));
        var_15 += (min((max(-215126254, ((var_1 ? var_3 : 39579)))), (max(1963598126, var_1))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_16 *= ((148270143 ? ((((min(var_8, 16383))) ? (((1 ? 32 : 12))) : ((52785 ? 18446744073709551615 : var_9)))) : (((var_0 ? ((1 ? var_2 : 1)) : var_5)))));
                        var_17 = ((((((4294967284 ? 18446744073709551595 : var_9)))) ? (min(((var_5 ? var_0 : var_4)), ((min(-148270128, var_2))))) : var_6));
                    }
                }
            }
        }
    }
    #pragma endscop
}
