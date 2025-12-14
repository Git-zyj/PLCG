/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_18, (((~20030) ? 42066 : (~1984)))));
        var_19 ^= (min(((var_4 ? 45505 : 65535)), ((var_11 ? var_17 : var_16))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 *= (max(((((~1008) != ((var_8 ? 11987 : 47219))))), (((((var_11 >> (var_7 - 14913)))) ? (!var_13) : (5 - var_13)))));
            arr_7 [i_0] [i_0] [i_1] = var_2;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 *= (((((var_17 ? var_6 : 65533) ^ (~9986)))));
            var_22 = (max(var_22, ((((~65535) & (min((var_18 | var_12), ((var_9 ? 14086 : var_8)))))))));
        }
        arr_10 [i_0] = (!var_15);
        arr_11 [i_0] = var_2;
    }
    var_23 = (min(var_23, (((var_6 ? var_6 : (var_5 - var_18))))));
    var_24 *= ((45520 / ((min((min(var_4, var_3)), var_14)))));
    var_25 = ((~(~61440)));
    var_26 ^= (max(((((65535 << (var_17 - 59759))) ^ var_0)), 8250));
    #pragma endscop
}
