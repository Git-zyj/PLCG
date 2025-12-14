/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = ((var_2 ? (((-8047565551038144331 - var_0) - (((min(var_4, var_0)))))) : (((~(!1))))));
        var_16 |= -8047565551038144318;
        var_17 = var_12;
        var_18 = (max(((3082 ? var_2 : 18446744073709551615)), (((-(var_0 == -942457690))))));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_19 ^= (((100 ? var_6 : 57849)));
            arr_7 [i_0] [i_1 + 1] = ((max(8047565551038144330, -77)) >> ((((171 ? 4611686018427387904 : 1311132817)) - 4611686018427387849)));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = (min(-var_1, (max(var_2, (var_2 >= var_1)))));
            var_20 += var_9;
        }
    }
    var_21 = (max(var_21, ((max((((((min(28901, var_3))) >= -198))), ((((4206343392 ? var_5 : var_8)) << (min(var_0, var_7)))))))));
    #pragma endscop
}
